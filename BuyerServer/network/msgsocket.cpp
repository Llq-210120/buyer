#include "msgsocket.h"
#include "global.h"
#include "execsql.h"
#include <QStringBuilder>
#include <QDataStream>
#include <QByteArray>
#include <QImage>
#include <QTimer>
#include <QQueue>

#include <QDebug>
#define cout qDebug() << "[" <<__FILE__ << ":" << __LINE__ << "]"

bool flag = false;

MsgSocket::MsgSocket(QTcpSocket *socket, QObject *parent) : QObject(parent)
{
    m_tcpSocket = socket;
    m_tcpBlockSize = 0;
    connect(m_tcpSocket,&QTcpSocket::readyRead,this,&MsgSocket::slotRead);
    connect(m_tcpSocket, SIGNAL(disconnected()),
            m_tcpSocket, SLOT(deleteLater()));
    connect(&timer,&QTimer::timeout,
            [=](){
                   timer.stop();                                                //关闭定时器
                   slotSendImage(Global::m_bookInfo_g.getName());               //发送图像文件
                  });

}
MsgSocket::~MsgSocket(){
    delete m_tcpSocket;
}

void MsgSocket::slotRead(){
    if(flag) readSpecificBookImage();
    qDebug() << "MsgSocket::slotRead()";
    QDataStream in(m_tcpSocket);
    in.setVersion(QDataStream::Qt_4_6);
    if(m_tcpBlockSize == 0)
    {
        if(m_tcpSocket->bytesAvailable() < sizeof(quint16))
            return;
        in >> m_tcpBlockSize;
    }

    if(m_tcpSocket->bytesAvailable() < m_tcpBlockSize)
        return;
    QString msg;
    in >> msg;
    qDebug() << "Server Recv: " << msg;
    parseUserAsk(msg);
    m_tcpBlockSize = 0;
}
void MsgSocket::readSpecificBookImage(){

    QDataStream in(m_tcpSocket);
    in.setVersion(QDataStream::Qt_4_6);
    if(m_tcpSocket->bytesAvailable() == 65536){
        arry.append(m_tcpSocket->readAll());
        cout << arry.size();
    }
    else{
        arry.append(m_tcpSocket->readAll());
        QDataStream in(&arry,QIODevice::ReadWrite);
        in.setVersion(QDataStream::Qt_4_6);
        cout << "read size : " << arry.size();
        QImage img;
        in >> img;
        cout << img;
        QString  fileName = QString("../bookImages/%1.png").arg(Global::m_bookInfo_g.getName());
        img.save(fileName);

        flag = false;

    }

}
void MsgSocket::parseUserAsk(QString msg){

    qDebug() << "MsgSocket::parseUserInfo" << msg;
    QStringList list = msg.split("#");
    int cmd = msg.at(0).toLatin1();

    switch(cmd){

    case CMD_UserLogin_L :paresUserLogin(list.at(1)); break;
    case CMD_UserInfo_I :break;
    case CMD_ChangePswd_H:paresChangePswd(list.at(1));break;
    case CMD_UserChangeInfo_X:paresUserChangeInfo(list.at(1));break;
    case CMD_UserRegister_R:parseUserRegisterAsk(list.at(1));break;
    case CMD_SellerCreate_C:parseSellerCreateAsk(list.at(1));break;


    case CMD_BookLoad_B:pareseBookLoadAsk(list.at(1));break;
    case CMD_BookLoadSpecific_S:parsesBookLoadSpecificAsk(list.at(1));break;
    case CMD_BookManyImages_M:pareseBookManyAsk(list.at(1));break;


    case CMD_ShoppingCartAdd_A: parseShoppingCartAddAsk(list.at(1)) ; break;
    case CMD_ShoppingCartInit_T: parseShoppingCartInitAsk(list.at(1));break;

    case CMD_Uploadbooks_U: parseUploadbooksAsk(list.at(1));break;

    default:break;
    }
}
void MsgSocket::paresUserLogin(QString data){
    QStringList list = data.split("|");
    QString temp;
    if(Execsql::loginUser(list[0],list[1])){
        if(list[0][0] == 'B' && list[0][1] =='Y'){
            BuyerInfo info =  Execsql::selectOneBuyer(list[0]);
            temp = QString("#") +
                   info.getID() + QString("|") +
                   info.getName()+QString("|") +
                   info.getSex();
        }else if(list[0][0] == 'S' && list[0][1] =='E'){
            SellerInfo info = Execsql::selectOneSeller(list[0]);
            StoreInfo store = Execsql::selectOneStoreInfo(list[0]);
            temp = QString("#") +
                   info.getID() + QString("|") +
                   info.getName()+QString("|") +
                   info.getSex() +QString("|") +
                   store.getId() + QString("|")+
                   store.getName();

        }
        QString msg = QString(CMD_UserLogin_L) + temp ; /// %  与  + 的区别   %会一次性生成空间   #include <QStringBuilder>
                                                        /// 而+会一次又一次的申请
                /*+ QString("#") + list[0]
                + QString("|") + list[1];*/
        slotSendMsg(msg);
    }else{
        QString msg = QString(CMD_UserLogin_L)
                + QString("#?")
                + QString("|error");
        slotSendMsg(msg);
    }


}
void MsgSocket::paresChangePswd(QString data){
   QStringList list = data.split("|");
   cout << list[0] << list[1] << list[2];
   if(Execsql::loginUser(list[0],list[1])){
       if(Execsql::updataUserpswd(list[0],list[2])){

           QString msg = QString(CMD_ChangePswd_H) + QString("#")  + QString("Y");
           slotSendMsg(msg);

       }else {
           QString msg = QString(CMD_ChangePswd_H) + QString("#")  + QString("N");
           slotSendMsg(msg);
       }

   }else {
       QString msg = QString(CMD_ChangePswd_H) + QString("#")  + QString("P");
       slotSendMsg(msg);

   }


}
void MsgSocket::paresUserChangeInfo(QString data){
    QStringList list = data.split("|");

    if(list[0][0] == 'B' && list[0][1] =='Y'){
        BuyerInfo info(list[0],list[1],list[2]);

        if(Execsql::updataOneBuyer(info)){
            QString msg = QString(CMD_UserChangeInfo_X) + QString("#")  + QString("Yes");
            slotSendMsg(msg);
        }else {
            QString msg = QString(CMD_UserChangeInfo_X) + QString("#")  + QString("No");
            slotSendMsg(msg);
        }


    }else if(list[0][0] == 'S' && list[0][1] =='E'){
        SellerInfo info(list[0],list[1],list[2]);
        if(Execsql::updataOneSeller(info)){
            QString msg = QString(CMD_UserChangeInfo_X) + QString("#")  + QString("Yes");
            slotSendMsg(msg);
        }else {
            QString msg = QString(CMD_UserChangeInfo_X) + QString("#")  + QString("No");
            slotSendMsg(msg);
        }
    }



}
void MsgSocket::parseUserRegisterAsk(QString data){
    QStringList list = data.split("|");
    bool men = false;
    bool use = false;
    if(Execsql::selectOneUser(list[0])){

        if(list[0][0] == 'B' && list[0][1] =='Y'){

            BuyerInfo buyer(list[0],list[1],list[2]);
            UserInfo  user(list[3],list[4],list[5],list[6]);
            men = Execsql::addOneBuyer(buyer);
            use = Execsql::addOneUser(user);

        }else if(list[0][0] == 'S' && list[0][1] =='E'){

            SellerInfo seller(list[0],list[1],list[2]);
            UserInfo  user(list[3],list[4],list[5],list[6]);
            men = Execsql::addOneSeller(seller);
            use = Execsql::addOneUser(user);
        }
        cout << "men " << men << " use " << use;
        if(men && use){
            QString msg = QString(CMD_UserRegister_R) + QString("#") + QString("Yes");
                                                        /// %  与  + 的区别   %会一次性生成空间   #include <QStringBuilder>
                                                        /// 而+会一次又一次的申请
            slotSendMsg(msg);
        }else {

            QString msg = QString(CMD_UserRegister_R)
                    + QString("#?")
                    + QString("|error");
            slotSendMsg(msg);
        }

    }else{
        QString msg = QString(CMD_UserRegister_R)
                + QString("#?")
                + QString("|ID");
        slotSendMsg(msg);
    }



}
void MsgSocket::parseSellerCreateAsk(QString data){

    QStringList list = data.split("|");
    StoreInfo info(list[0],list[1],list[2]);

    if(Execsql::addOneStore(info)){
         QString msg = QString(CMD_SellerCreate_C) + QString("#") +
                 QString ("Yes");
        slotSendMsg(msg);
    }else {
        QString msg = QString(CMD_SellerCreate_C) + QString("#") +
                QString ("No");
       slotSendMsg(msg);

    }

}

void MsgSocket::pareseBookLoadAsk(QString data){

    bookInfoList list;
    if(data == "ALL"){
       list = Execsql::selectAllBookInfo();

    }else if(data[0]=='S' && data[1]=='E'){
       list = Execsql::selectSellerBookinfo(data);
    }

       for(int i = 0 ; i < list.length() ;i++){

           Global::m_bookInfoQueue_g.enqueue(list[i]);

       }

       QString msg = QString(CMD_BookLoad_B) % QString("#");/* %
                     QString(list.length())  %  QString("$");*/

       for(int i = 0 ; i < list.length() ;i++){
           msg += list.at(i).getId() % QString("|") %
                  list.at(i).getStoreId() % QString("|") %
                  list.at(i).getName() % QString("|") %
                  list.at(i).getAuthor() % QString("|") %
                  list.at(i).getTypde() % QString("|") %
                  list.at(i).getPrice() % QString("|") %
                  list.at(i).getDescription() %QString("$");
       }
       slotSendMsg(msg);


}
void MsgSocket::parsesBookLoadSpecificAsk(QString data){
    BookInfo info = Execsql::selectOneBook(data);
    Global::m_bookInfo_g=info;
    QString msg = QString(CMD_BookLoadSpecific_S) % QString("#");
    msg += info.getId() % QString("|") %
           info.getStoreId() % QString("|") %
           info.getName() % QString("|") %
           info.getAuthor() % QString("|") %
           info.getTypde() % QString("|") %
           info.getAuthor() % QString("|") %
           info.getPrice() % QString("|") %
           info.getDescription();
     slotSendMsg(msg);
     Global::m_bookInfo_g = info;
     timer.start(50);

}

void MsgSocket::pareseBookManyAsk(QString id){

    Global::m_bookInfo_g = Execsql::selectOneBook(id);
    QString msg = QString(CMD_BookManyImages_M) % QString("#") %
                  Global::m_bookInfo_g.getId();
    slotSendMsg(msg);
    timer.start(50);
}

void MsgSocket::parseShoppingCartAddAsk(QString data){


    QStringList list = data.split("|");
    if(list[0] == QString("D")) {

        ShoppingCart info(list[1],list[2],list[3],list[4],list[5],list[6]);
        Execsql::delOneShoppingCart(info);
        return ;
    }

    ShoppingCart info(list[0],list[1],list[2],list[3],list[4],list[5]);
    ShoppingCart info_0  = Execsql::selectOneShoppingCart(info.getBuyerId(),info.getBookId());
    if(info_0.getBookId().isEmpty()){
        cout << Execsql::addOneShoppingCart(info);
    }else {
        cout << Execsql::updataShoppingCart(info);
    }



}
void MsgSocket::parseShoppingCartInitAsk(QString data){

    shoppingCartInfoList list =  Execsql::selectOneShoppingList(data);
    QString msg = QString(CMD_ShoppingCartInit_T) % QString("#") ;

    for(int i = 0; i < list.length() ; i++){

        msg +=  list.at(i).getBuyerId() % QString("|") %
                list.at(i).getBookId() % QString("|") %
                list.at(i).getPrice() % QString("|") %
                list.at(i).getNumber() % QString("|") %
                list.at(i).getTime() % QString("|") %
                list.at(i).getCondition() % QString("$");

    }

    slotSendMsg(msg);
}
void  MsgSocket::parseUploadbooksAsk(QString data){
     QStringList l = data.split("|");
     QString msg;
     if(l[0] == "U"){ //更新
         BookInfo info(l[1],l[2],l[3],l[4],l[5],l[6],l[7]);
         Global::m_bookInfo_g = info;


         if(Execsql::updataOneBook(info)){
             msg = QString(CMD_Uploadbooks_U) + QString("#") + QString("YesU");
             slotSendMsg(msg);
             flag = true;
         }



     }else {
         BookInfo info(l[0],l[1],l[2],l[3],l[4],l[5],l[6]);
         Global::m_bookInfo_g = info;


         if(Execsql::addOneBook(info)){
             msg = QString(CMD_Uploadbooks_U) + QString("#") + QString("Yes");
             slotSendMsg(msg);
             flag = true;
         }
     }








}

void MsgSocket::slotSendMsg(QString msg)
{
    QByteArray buffer;
    QDataStream out(&buffer, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);

    out << (quint16)0;
    out << msg;
    out.device()->seek(0);
    out << (quint16)(buffer.size() - sizeof(quint16));

    qDebug() << "server Send: " << msg;

    m_tcpSocket->write(buffer);
}


void MsgSocket::slotSendImage(QString bookName){

    QByteArray byte;
    QDataStream out(&byte,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);
    cout << bookName;
    QString fileName = QString("../bookImages/%1.jpg").arg(bookName);
    cout << fileName;
    if(!fileName.isEmpty()){
    QImage img(fileName);
    cout << img;
    out << img;
    cout << "send size :" << byte.size();
    m_tcpSocket->write(byte);
    }else{
        cout << "fileName is empty";
    }
}

