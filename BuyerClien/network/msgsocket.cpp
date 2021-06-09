#include "msgsocket.h"
#include "global.h"

#include <QDataStream>
#include <QByteArray>
#include <QStringBuilder>
#include <QImage>
#include <QMessageBox>
#include <QDebug>
#define cout qDebug() << "[" <<__FILE__ << ":" << __LINE__ << "]"

bool flag = false;
bool flag_00 = true;
MsgSocket::MsgSocket(QObject *parent) : QObject(parent)
{
    m_tcpBlockSize = 0;
    m_tcpSocket = new QTcpSocket(this);
    connect(m_tcpSocket, SIGNAL(readyRead()),
            this, SLOT(slotReadyRead()));
    m_tcpSocket->connectToHost("127.0.0.1", 9999);

}
void MsgSocket::socketConnectTo(){
    m_tcpSocket->connectToHost("127.0.0.1",9999);

}
void MsgSocket::socketDisConnectTo(){
    m_tcpSocket->disconnectFromHost();
}

void MsgSocket::slotReadyRead(){
    if(flag) readSpecificBookImage();

    QDataStream in(m_tcpSocket);
    in.setVersion(QDataStream::Qt_4_6);

    if(m_tcpBlockSize == 0)
    {
        if(m_tcpSocket->bytesAvailable()<sizeof(quint16))
            return;

        in >> m_tcpBlockSize;
    }

    if(m_tcpSocket->bytesAvailable() < m_tcpBlockSize)
        return;

    QString msg;
    in >> msg;
    qDebug() << "Client Recv: " << msg;
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

        if(!Global::m_bookInfoQueue_g.empty()){

             BookInfo info = Global::m_bookInfoQueue_g.dequeue();

             for(int i = 0; i < Global::m_bookInfoList_g.length();i++){

                if(Global::m_bookInfoList_g[i].getId() == info.getId()){
                    if(flag_00 == false){
                        Global::m_bookInfoList_g[i].setBookImage(img);
                    }

                    cout << Global::m_bookInfoList_g[i].getBookImage();
                    break;
                }
            }
            flag = false;


        }
        if(!Global::m_bookInfoQueue_g.empty()){

            parsesBookLoadManySend(Global::m_bookInfoQueue_g.head().getId());

        }
        arry.clear();
    }
}
void MsgSocket::parseUserAsk(QString msg){

    QStringList list = msg.split("#");

    int cmd = msg.at(0).toLatin1();

    switch(cmd){

    case CMD_UserLogin_L :paresUserLogin(list.at(1)); break;
    case CMD_UserInfo_I :break;
    case CMD_ChangePswd_H:paresChangePswd(list.at(1));break;
    case CMD_UserChangeInfo_X:;break;
    case CMD_UserRegister_R:parseUserRegisterAsk(list.at(1));break;
    case CMD_SellerCreate_C:parseSellerCreate(list.at(1));break;

    case CMD_BookLoad_B:pareBookLoad(list.at(1));break;
    //case CMD_BookLoadSpecific_S:parsesBookLoadSpecificAsk(list.at(1));break;
    case CMD_BookManyImages_M:parsesBookLoadManyAsk(list.at(1));break;

    case CMD_ShoppingCartInit_T : parseShoppingCartInitRev(list.at(1));break;
    case CMD_Uploadbooks_U :parseUploadbooks(list.at(1)) ;break;
    default:break;

    }


}
void MsgSocket::paresUserLogin(QString data){

    QStringList list = data.split("|");
    if(list[0] == "?" && list[1] == "error"){
        emit userLoginResult(false);
    }else{
        if(list[0][0] == 'B' && list[0][1] =='Y'){
cout << list[0] << list[1] << list[2];
            Global::m_buyerInfo_g.setID(list[0]);
            Global::m_buyerInfo_g.setName(list[1]);
            Global::m_buyerInfo_g.setSex(list[2]);
cout << Global::m_buyerInfo_g.getID() << Global::m_buyerInfo_g.getName() << Global::m_buyerInfo_g.getSex();
        }else if(list[0][0] == 'S' && list[0][1] =='E'){
            Global::m_sellerInfo_g .setID(list[0]);
            Global::m_sellerInfo_g.setName(list[1]);
            Global::m_sellerInfo_g.setSex(list[2]);

            Global::m_storeInfo_g.setId(list.at(3));
            Global::m_storeInfo_g.setSellerId(list.at(0));
            Global::m_storeInfo_g.SetName(list.at(4));
        }
        emit userLoginResult(true);
    }

}
void MsgSocket::paresChangePswd(QString data){
    cout << data;
    if(data == "Y"){
        QMessageBox::information(NULL,"成功","修改成功",QMessageBox::Yes);
    }else if(data == "N"){
        QMessageBox::information(NULL,"失败","修改失败，请重试",QMessageBox::Yes);
    }else if(data == "P"){
        QMessageBox::information(NULL,"注意","密码错误，请重新输入",QMessageBox::Yes);
    }

}
void MsgSocket::parseUserRegisterAsk(QString data){


    emit userRegisterResult(data);

}
void MsgSocket::parseSellerCreate(QString data){

    if(data == "Yes"){
        QString text = QString("书店 %1 创建成功").arg(Global::m_storeInfo_g.getName());
        QMessageBox::information(NULL,"成功",text,QMessageBox::Yes);
    }else if(data == "No"){
        QString text = QString("书店 %1 创建失败").arg(Global::m_storeInfo_g.getName());
        QMessageBox::information(NULL,"失败",text,QMessageBox::Yes);
    }


}
void MsgSocket::pareBookLoad(QString data){
    if(data.length() == 0) return;
    QStringList list = data.split("$");
    //cout << list;
    Global::m_bookInfoList_g.clear();
    for(int i = 0 ;i <list.length() -1;i++){
        QStringList l  = list.at(i).split("|");
        //cout << l;

        BookInfo info(l[0],l[1],l[2],l[3],l[4],l[5],l[6]);
        if(flag_00 == true){


            QString fileName = QString("../../bookImages/%1.png").arg(info.getName());
            cout << fileName;
            QImage img(fileName);
            cout << img;
            info.setBookImage(img);
       }
        Global::m_bookInfoList_g.append(info);
        Global::m_bookMap_g[info.getId()] = info.getName();
    }

    for(int i = 0; i < Global::m_bookInfoList_g.length(); i++){
        Global::m_bookInfoQueue_g.enqueue(Global::m_bookInfoList_g.at(i));
    }

    parsesBookLoadManySend(Global::m_bookInfoQueue_g.head().getId());

}
void MsgSocket::parsesBookLoadManySend(QString id){

    QString  msg = QString(CMD_BookManyImages_M) % QString("#") %
                    id;
    cout << msg;
    slotSendMsg(msg);

}


void MsgSocket::parsesBookLoadManyAsk(QString data){
    if(data == Global::Global::m_bookInfoQueue_g.head().getId()){
        flag=true;
    }
}

void MsgSocket::parseShoppingCartInitRev(QString data){

    QStringList list = data.split("$");
    //cout << list;

    Global::m_shoppingCartInfoList_g.clear();

    for(int i = 0 ;i <list.length()-1;i++){

        QStringList l  = list.at(i).split("|");

        ShoppingCart info(l[0],l[1],l[2],l[3],l[4],l[5]);

        for(int j = 0 ; j < Global::m_bookInfoList_g.length(); j++){

            if(Global::m_bookInfoList_g.at(j).getId() == l[1]){
                info.setImage(Global::m_bookInfoList_g.at(j).getBookImage());
                cout << info.getImage();
                break;
            }

        }

        Global::m_shoppingCartInfoList_g.append(info);
    }

}

/*void MsgSocket::parsesBookLoadSpecificAsk(QString data){

    QStringList l = data.split("|");
    //Global::m_bookInfoList_g.clear();
    cout << l;
    BookInfo info(l[0],l[1],l[2],l[3],l[4],l[5],l[6]);
    //Global::m_bookInfoList_g.append(info);
    Global::m_bookInfo_g = info;

    flag = true;
}*/
void MsgSocket::parseUploadbooks(QString data){

    if(data == "Yes"){
        QString text = QString("《%1》添加成功").arg(Global::m_bookInfo_g.getName());
        QMessageBox::information(NULL,"成功",text,QMessageBox::Yes);
    }else if(data == "YesU"){

        QString text = QString("《%1》修改成功").arg(Global::m_bookInfo_g.getName());
        QMessageBox::information(NULL,"成功",text,QMessageBox::Yes);
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

    qDebug() << "Client Send: " << msg;
    m_tcpSocket->write(buffer);

}

void MsgSocket::slotSendImage(const QImage &img){

    QByteArray byte;
    QDataStream out(&byte,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);

    cout << img;
    out << img;
    cout << "send size :" << byte.size();
    m_tcpSocket->write(byte);

}
