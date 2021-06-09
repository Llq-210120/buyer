#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "global.h"
#include <QMessageBox>
#include <QStringList>
#include <QDebug>
#define cout qDebug() << "[" <<__FILE__ << ":" << __LINE__ << "]"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);


    m_loginForm = new Login();
    m_register = new RegisterForm();

    m_waitForm = new  WaitingForm();
    m_buyerInfoForm = new BuyerInfoForm(ui->widget);
    m_sellerInfoForm = new SellerInfoForm(ui->widget);
    m_bookRecommendForm = new BookRecommendForm(ui->widget);
    m_shoppingCartForm = new ShoppingCartForm(ui->widget);
    m_sellerLoadForm = new SellerLoadForm(ui->widget);
    m_sellerShoppingCartForm = new SellerShoppingCartForm(ui->widget);

    m_loginForm->show();
    m_waitForm->hide();

    m_bookRecommendForm->hide();
    m_buyerInfoForm->hide();
    m_sellerInfoForm->hide();
    m_shoppingCartForm->hide();
    m_sellerLoadForm->hide();
    m_sellerShoppingCartForm->hide();

    ui->mainToolBar->hide();
    ui->menuBar->hide();


    m_msgSocket = new MsgSocket;


//    QString msg = QString(CMD_BookLoad_B) + QString("#") + QString("ALL");  ///更新推荐页

//    m_msgSocket->slotSendMsg(msg);
//    m_bookRecommendForm->updateBookRecommendForm(Global::m_bookInfoList_g);


    this->setContextMenuPolicy(Qt::NoContextMenu); //去掉工具栏的右键菜单
    this->setCentralWidget(ui->widget);
    this->setWindowTitle(tr("客户端"));

    connect(m_loginForm,&Login::signalUserLogin,this,&MainWindow::slotUserLogin);///登录信号
    connect(m_msgSocket,&MsgSocket::userLoginResult,this,slotUserLoginResult);   ///登录结果验证

    connect(m_sellerInfoForm,&SellerInfoForm::creatStoreSignal,this,&MainWindow::creatStoreSlot);

    connect(m_loginForm,&Login::signalUserRegister,this,[=](){m_register->show();});
    connect(m_register,&RegisterForm::GatheringInfoSignal,this,
            [=](){cout << m_register->getData();
                  QString msg = QString(CMD_UserRegister_R) + QString("#") + m_register->getData();
                  cout << msg;
                  m_msgSocket->slotSendMsg(msg);
                 });
    connect(m_buyerInfoForm,&BuyerInfoForm::buyerLogout,this,[=](){
         Global::m_buyerInfo_g.clear();
         m_msgSocket->socketDisConnectTo();
         m_loginForm->show();
         MainWindow::hide();
         m_buyerInfoForm->hide();
         m_msgSocket = new MsgSocket;
         m_msgSocket->socketConnectTo();
         connect(m_msgSocket,&MsgSocket::userLoginResult,this,slotUserLoginResult);   ///登录结果验证
    });///buyer用户注销
    connect(m_buyerInfoForm,&BuyerInfoForm::signalChangeBuyerInfo,this,[=](){
        QString msg = QString(CMD_UserChangeInfo_X) + QString("#") +
                Global::m_buyerInfo_g.getID() +  QString("|") +
                Global::m_buyerInfo_g.getName() + QString("|")+
                Global::m_buyerInfo_g.getSex();
                cout << msg;

        m_msgSocket->slotSendMsg(msg);
    });///修改buyer信息
    connect(m_buyerInfoForm,&BuyerInfoForm::signalChangeBuyerPawd,this,&MainWindow::slotChangeBuyerPawd);
    connect(m_sellerInfoForm,&SellerInfoForm::sellerLogout,this,[=](){
        Global::m_sellerInfo_g.clear();
        m_msgSocket->socketDisConnectTo();
        m_loginForm->show();
        MainWindow::hide();
        m_sellerInfoForm->hide();
        m_msgSocket = new MsgSocket;
        m_msgSocket->socketConnectTo();
        connect(m_msgSocket,&MsgSocket::userLoginResult,this,slotUserLoginResult);   ///登录结果验证
    });///seller用户注销
    connect(m_sellerInfoForm,&SellerInfoForm::signalChangeSellerInfo,this,[=](){
        QString msg = QString(CMD_UserChangeInfo_X) + QString("#") +
                Global::m_sellerInfo_g.getID() +  QString("|") +
                Global::m_sellerInfo_g.getName() + QString("|")+
                Global::m_sellerInfo_g.getSex();
                cout << msg;
                m_msgSocket->slotSendMsg(msg);
    });///修改seller信息
    connect(m_sellerInfoForm,&SellerInfoForm::signalChangeSellerPawd,this,&MainWindow::slotChangeSellerPawd);
    connect(m_msgSocket,&MsgSocket::userRegisterResult,this,&MainWindow::slotUserRegister);

    connect(m_bookRecommendForm,&BookRecommendForm::pb_F5_ClickedSignals,this,&MainWindow::pb_F5_ClickedSlot);///书籍推荐刷新信号与槽
    connect(m_bookRecommendForm,&BookRecommendForm::shoppingCartInsert,this,&MainWindow::shoppingCartInsertSlot);
    connect(m_bookRecommendForm,&BookRecommendForm::shoppingCartUpdate,this,&MainWindow::shoppingCartUpdateSlot);

    connect(m_shoppingCartForm,&ShoppingCartForm::shoppingCartSubSignal,this,&MainWindow::shoppingCartSubSlot);
    connect(m_shoppingCartForm,&ShoppingCartForm::shoppingCartSaveSignal,this,&MainWindow::shoppingCartSaveSlot);
    connect(m_shoppingCartForm,&ShoppingCartForm::shoppingCartConSignal,this,&MainWindow::shoppingCartConSlot);
    connect(m_shoppingCartForm,&ShoppingCartForm::shoppingCartDelSignal,this,&MainWindow::shoppingCartDelSlot);

    connect(m_shoppingCartForm,&ShoppingCartForm::signalsSubShoppingCart,this,&MainWindow::slotSubShoppingCart);
    connect(m_shoppingCartForm,&ShoppingCartForm::signalsShoppingCartDel,this,&MainWindow::slotShoppingCartDel);
    connect(m_shoppingCartForm,&ShoppingCartForm::signalsShoppingCartCon,this,&MainWindow::slotShoppingCartCon);

    connect(m_sellerShoppingCartForm,&SellerShoppingCartForm::shoppingCartDeliverSignal,this,&MainWindow::shoppingCartDeliverSlot);
    connect(m_sellerShoppingCartForm,&SellerShoppingCartForm::shoppingCartGoodsSignal,this,&MainWindow::shoppingCartGoodsSlot);


    connect(m_sellerLoadForm,&SellerLoadForm::addOneBookSignal,this,&MainWindow::addOneBookSlot);
    connect(m_sellerLoadForm,&SellerLoadForm::updataOneBookInSignal,this,&MainWindow::updataOneBookInSlot);
    connect(&timer,&QTimer::timeout,
            [=](){
                    timer.stop();
                    QString msgL;           ///初始化购物车
                    if(Global::m_buyerInfo_g.getID() != NULL){
                        msgL = QString(CMD_ShoppingCartInit_T) + QString("#") + QString("%1")
                                .arg(Global::m_buyerInfo_g.getID());
                    }else if(Global::m_sellerInfo_g.getID() != NULL){
                        msgL = QString(CMD_ShoppingCartInit_T) + QString("#") + QString("%1")
                                .arg(Global::m_sellerInfo_g.getID());
                    }

                    m_msgSocket->slotSendMsg(msgL);
                   //m_shoppingCartForm->updateShoppingCartForm();

            });
    connect(&timer_login,&QTimer::timeout,[=](){
        timer_login.stop();
        if(Global::m_buyerInfo_g.getID().isEmpty() && Global::m_sellerInfo_g.getID().isEmpty()){
            QMessageBox::information(NULL,"注意！！","服务器未开启",QMessageBox::Yes);
            m_msgSocket->socketConnectTo();
        }
    });

    connect(&timer_wait,&QTimer::timeout,[=]()
    {
        timer_wait.stop();
        m_waitForm->hide();
        MainWindow::show();
    });

    connect(&timer_addBook,&QTimer::timeout,[=](){

        timer_addBook.stop();
        m_msgSocket->slotSendImage(Global::m_bookInfo_g.getBookImage());
    });
}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_loginForm;
    delete m_register;
    delete m_waitForm;
}
void MainWindow::slotUserLogin(QString id, QString pswd)  /// 登录槽函数
{
    ///用户登录请求

    QString msg = QString(CMD_UserLogin_L)
            + QString("#") + id
            + QString("|") + pswd;
    timer_login.start(100);
    m_msgSocket->slotSendMsg(msg);

}

void MainWindow::slotUserLoginResult(bool result){
    if(result){
        m_loginForm->hide();
        ui->mainToolBar->show();
        ui->menuBar->show();



        if(Global::m_buyerInfo_g.getID() != NULL){
            QString msg = QString(CMD_BookLoad_B) + QString("#") + QString("ALL");  ///更新推荐页
            m_msgSocket->slotSendMsg(msg);
            m_bookRecommendForm->updateBookRecommendForm(Global::m_bookInfoList_g);
            m_buyerInfoForm->updateBuyerInfoForm();
            m_buyerInfoForm->show();

        }else if(Global::m_sellerInfo_g.getID() != NULL){
            QString msg = QString(CMD_BookLoad_B) + QString("#") + Global::m_sellerInfo_g.getID();  ///更新推荐页
            m_msgSocket->slotSendMsg(msg);
            m_sellerLoadForm->updataSellerLoadForm(Global::m_bookInfoList_g);
            m_sellerInfoForm->updateBuyerInfoForm();
            m_sellerInfoForm->show();
            m_sellerInfoForm->show();
        }


        m_waitForm->show();
        timer_wait.start(5000);
        timer.start(2000);

    }else{
        QMessageBox::information(NULL,"错误","id  or password error",QMessageBox::Yes);
    }


}

void MainWindow::slotChangeBuyerPawd(QString msg){

    m_msgSocket->slotSendMsg(msg);

}
void MainWindow::slotChangeSellerPawd(QString msg){
    cout << msg;
    m_msgSocket->slotSendMsg(msg);
}
void MainWindow::slotUserRegister(QString data){
    QStringList list = data.split("|");
    if(list[0] == "Yes") {
        QMessageBox::information(NULL,"成功","注册成功，请登录",QMessageBox::Yes);
    }else if(list[0] == "?"){
        if(list[1] == "ID") {
            QMessageBox::information(NULL,"注意","ID已存在，请重新输入",QMessageBox::Yes);

        }else{
            QMessageBox::information(NULL,"失败","注册失败",QMessageBox::Yes);
        }

    }

}

void MainWindow::on_actionuserInfo_triggered()
{
    m_sellerInfoForm->updateBuyerInfoForm();
    m_buyerInfoForm->updateBuyerInfoForm();
    if(Global::m_buyerInfo_g.getID() != NULL){
        m_buyerInfoForm->show();
        m_bookRecommendForm->hide();
        m_shoppingCartForm->hide();
    }else if(Global::m_sellerInfo_g.getID() != NULL){
        m_sellerInfoForm->show();
        m_sellerLoadForm->hide();
        m_sellerShoppingCartForm->hide();
    }


}

void MainWindow::on_actionbookRecommend_triggered()
{
    if(Global::m_buyerInfo_g.getID() != NULL){
        m_buyerInfoForm->hide();
        m_bookRecommendForm->show();
        m_bookRecommendForm->updateBookRecommendForm(Global::m_bookInfoList_g);
        m_shoppingCartForm->hide();
    }else if(Global::m_sellerInfo_g.getID() != NULL){

        m_sellerInfoForm->hide();
        m_sellerLoadForm->show();
        m_sellerLoadForm->updataSellerLoadForm(Global::m_bookInfoList_g);
        m_sellerShoppingCartForm->hide();
    }


}

void MainWindow::on_actionshoppingCart_triggered()
{


    m_shoppingCartForm->updateShoppingCartForm();
    m_shoppingCartForm->tabUpdate();
    if(Global::m_buyerInfo_g.getID() != NULL){
        m_buyerInfoForm->hide();
        m_bookRecommendForm->hide();
        m_shoppingCartForm->show();
        m_shoppingCartForm->updateShoppingCartForm();
        m_shoppingCartForm->tabUpdate();
    }else if(Global::m_sellerInfo_g.getID() != NULL){
        m_sellerInfoForm->hide();
        m_sellerLoadForm->hide();
        m_sellerShoppingCartForm->show();
        m_sellerShoppingCartForm->updataSellerShoppingCartForm();
    }

}
void MainWindow::pb_F5_ClickedSlot(){

    QString msg = QString(CMD_BookLoad_B) + QString("#") + QString("ALL");
    //QString msg = QString(CMD_BookLoadSpecific_S) + QString("#") + QString("BK-101");

    m_msgSocket->slotSendMsg(msg);
    m_bookRecommendForm->updateBookRecommendForm(Global::m_bookInfoList_g);
}
void MainWindow::shoppingCartInsertSlot(ShoppingCart info){



    QString msg = QString(CMD_ShoppingCartAdd_A) + QString("#") +
                  info.getBuyerId() + QString("|") +
                  info.getBookId() + QString("|") +
                  info.getPrice() +  QString("|") +
                  info.getNumber() + QString("|") +
                  info.getTime() + QString("|") +
                  info.getCondition() ;
    cout << msg;
    m_msgSocket->slotSendMsg(msg);
    m_shoppingCartForm->updateShoppingCartForm();
    m_shoppingCartForm->tabUpdate();
}
void MainWindow::shoppingCartUpdateSlot(ShoppingCart info){

    QString msg = QString(CMD_ShoppingCartAdd_A) + QString("#") +
                  info.getBuyerId() + QString("|") +
                  info.getBookId() + QString("|") +
                  info.getPrice() +  QString("|") +
                  info.getNumber() + QString("|") +
                  info.getTime() + QString("|") +
                  info.getCondition() ;
    cout << msg;
    m_msgSocket->slotSendMsg(msg);
    m_shoppingCartForm->updateShoppingCartForm();
    m_shoppingCartForm->tabUpdate();
}
void MainWindow::slotSubShoppingCart(ShoppingCart info){

    info.setCondition("已提交");
    for(int i = 0 ; i <Global::m_shoppingCartInfoList_g.length();i++){
        if(Global::m_shoppingCartInfoList_g.at(i).getBookId() == info.getBookId()){
            Global::m_shoppingCartInfoList_g.replace(i,info);
        }

    }
    QString msg = QString(CMD_ShoppingCartAdd_A) + QString("#") +
                  info.getBuyerId() + QString("|") +
                  info.getBookId() + QString("|") +
                  info.getPrice() +  QString("|") +
                  info.getNumber() + QString("|") +
                  info.getTime() + QString("|") +
                  info.getCondition() ;
    cout << msg;
    m_msgSocket->slotSendMsg(msg);
    m_shoppingCartForm->tabUpdate();

}

void MainWindow::slotShoppingCartDel(ShoppingCart info){

    for(int i = 0 ; i <Global::m_shoppingCartInfoList_g.length();i++){
        if(Global::m_shoppingCartInfoList_g.at(i).getBookId() == info.getBookId()){
            Global::m_shoppingCartInfoList_g.removeOne(info);
        }

    }
    QString msg = QString(CMD_ShoppingCartAdd_A) + QString("#") + QString("D")+QString("|")+
                  info.getBuyerId() + QString("|") +
                  info.getBookId() + QString("|") +
                  info.getPrice() +  QString("|") +
                  info.getNumber() + QString("|") +
                  info.getTime() + QString("|") +
                  info.getCondition() ;
    cout << msg;
    m_msgSocket->slotSendMsg(msg);
    m_shoppingCartForm->tabUpdate();


}
void MainWindow::slotShoppingCartCon(ShoppingCart info){
    info.setCondition("已收货");
    for(int i = 0 ; i <Global::m_shoppingCartInfoList_g.length();i++){
        if(Global::m_shoppingCartInfoList_g.at(i).getBookId() == info.getBookId()){
            Global::m_shoppingCartInfoList_g.replace(i,info);
        }

    }
    QString msg = QString(CMD_ShoppingCartAdd_A) + QString("#") +
                  info.getBuyerId() + QString("|") +
                  info.getBookId() + QString("|") +
                  info.getPrice() +  QString("|") +
                  info.getNumber() + QString("|") +
                  info.getTime() + QString("|") +
                  info.getCondition() ;
    cout << msg;
    m_msgSocket->slotSendMsg(msg);
    m_shoppingCartForm->tabUpdate();

}
void MainWindow::shoppingCartSubSlot(int index){

    Global::m_shoppingCartInfoList_g[index].setCondition("已提交");
    ShoppingCart info  = Global::m_shoppingCartInfoList_g[index];

    QString msg = QString(CMD_ShoppingCartAdd_A) + QString("#") +
                  info.getBuyerId() + QString("|") +
                  info.getBookId() + QString("|") +
                  info.getPrice() +  QString("|") +
                  info.getNumber() + QString("|") +
                  info.getTime() + QString("|") +
                  info.getCondition() ;
    cout << msg;
    m_msgSocket->slotSendMsg(msg);
    m_shoppingCartForm->updateShoppingCartForm();

}
void MainWindow::shoppingCartSaveSlot(int index){

    Global::m_shoppingCartInfoList_g[index].setCondition("未提交");
    ShoppingCart info  = Global::m_shoppingCartInfoList_g[index];

    QString msg = QString(CMD_ShoppingCartAdd_A) + QString("#") +
                  info.getBuyerId() + QString("|") +
                  info.getBookId() + QString("|") +
                  info.getPrice() +  QString("|") +
                  info.getNumber() + QString("|") +
                  info.getTime() + QString("|") +
                  info.getCondition() ;
    cout << msg;
    m_msgSocket->slotSendMsg(msg);
    m_shoppingCartForm->updateShoppingCartForm();

}
void MainWindow::shoppingCartDelSlot(int index){


    ShoppingCart info  = Global::m_shoppingCartInfoList_g[index];
    Global::m_shoppingCartInfoList_g.removeOne(info);
    QString msg = QString(CMD_ShoppingCartAdd_A) + QString("#") + QString("D")+QString("|")+
                  info.getBuyerId() + QString("|") +
                  info.getBookId() + QString("|") +
                  info.getPrice() +  QString("|") +
                  info.getNumber() + QString("|") +
                  info.getTime() + QString("|") +
                  info.getCondition() ;
    cout << msg;
    m_msgSocket->slotSendMsg(msg);
    m_shoppingCartForm->updateShoppingCartForm();

}

void MainWindow::shoppingCartDeliverSlot(int index){

    Global::m_shoppingCartInfoList_g[index].setCondition("已发货");
    ShoppingCart info  = Global::m_shoppingCartInfoList_g[index];

    QString msg = QString(CMD_ShoppingCartAdd_A) + QString("#") +
                  info.getBuyerId() + QString("|") +
                  info.getBookId() + QString("|") +
                  info.getPrice() +  QString("|") +
                  info.getNumber() + QString("|") +
                  info.getTime() + QString("|") +
                  info.getCondition() ;
    cout << msg;
    m_msgSocket->slotSendMsg(msg);
    m_shoppingCartForm->updateShoppingCartForm();

}
void MainWindow::shoppingCartConSlot(int index){

    Global::m_shoppingCartInfoList_g[index].setCondition("已收货");
    ShoppingCart info  = Global::m_shoppingCartInfoList_g[index];

    QString msg = QString(CMD_ShoppingCartAdd_A) + QString("#") +
                  info.getBuyerId() + QString("|") +
                  info.getBookId() + QString("|") +
                  info.getPrice() +  QString("|") +
                  info.getNumber() + QString("|") +
                  info.getTime() + QString("|") +
                  info.getCondition() ;
    cout << msg;
    m_msgSocket->slotSendMsg(msg);
    m_shoppingCartForm->updateShoppingCartForm();
}
void MainWindow::shoppingCartGoodsSlot(int index){

    ShoppingCart info  = Global::m_shoppingCartInfoList_g[index];
    Global::m_shoppingCartInfoList_g.removeOne(info);
    QString msg = QString(CMD_ShoppingCartAdd_A) + QString("#") + QString("D")+QString("|")+
                  info.getBuyerId() + QString("|") +
                  info.getBookId() + QString("|") +
                  info.getPrice() +  QString("|") +
                  info.getNumber() + QString("|") +
                  info.getTime() + QString("|") +
                  info.getCondition() ;
    cout << msg;
    m_msgSocket->slotSendMsg(msg);
    m_shoppingCartForm->updateShoppingCartForm();
}
void MainWindow::addOneBookSlot(BookInfo info){

    info.setStoreId(Global::m_storeInfo_g.getId());
    QString msg = QString(CMD_Uploadbooks_U) + QString("#") +
            info.getId() + QString("|") +
            info.getStoreId() + QString("|") +
            info.getName() + QString("|") +
            info.getAuthor() + QString("|") +
            info.getTypde() + QString("|") +
            info.getPrice() + QString("|") +
            info.getDescription();
    cout << msg ;
    cout << info.getBookImage();
    Global::m_bookInfo_g = info;
    Global::m_bookInfoList_g.append(info);
    m_sellerLoadForm->updataSellerLoadForm(Global::m_bookInfoList_g);
    m_msgSocket->slotSendMsg(msg);
    timer_addBook.start(20);

}
void MainWindow::updataOneBookInSlot(BookInfo info){

    info.setStoreId(Global::m_storeInfo_g.getId());
    QString msg = QString(CMD_Uploadbooks_U) + QString("#") + QString("U") + QString("|")+
            info.getId() + QString("|") +
            info.getStoreId() + QString("|") +
            info.getName() + QString("|") +
            info.getAuthor() + QString("|") +
            info.getTypde() + QString("|") +
            info.getPrice() + QString("|") +
            info.getDescription();
    cout << msg ;
    cout << info.getBookImage();

    Global::m_bookInfo_g = info;
    for(int i = 0 ; i <Global::m_bookInfoList_g.length() ;i++){
        if(Global::m_bookInfoList_g.at(i).getId()==info.getId()){
            Global::m_bookInfoList_g[i] = info;
            break;
        }
    }
    m_sellerLoadForm->updataSellerLoadForm(Global::m_bookInfoList_g);
    m_msgSocket->slotSendMsg(msg);
    timer_addBook.start(20);

}
void MainWindow::creatStoreSlot(StoreInfo info){

    QString msg = QString(CMD_SellerCreate_C) + QString("#") +
            info.getId() + QString("|")+
            info.getSellerId() +QString("|")+
            info.getName();
    Global::m_storeInfo_g = info;
    m_msgSocket->slotSendMsg(msg);
}
