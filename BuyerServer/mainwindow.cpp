#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "execsql.h"

#include "login.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);




    MainWindow::hide();


    //setWindowFlags(Qt::WindowCloseButtonHint  );  //只显示关闭按钮

    //ui->pushButton->setFlat(true);
    //setWindowFlags(Qt::FramelessWindowHint);   ///隐藏边框
    /*setWindowFlags(Qt::FramelessWindowHint | windowFlags()); /// 设置为透明
    setAttribute(Qt::WA_TranslucentBackground);*/

    m_loginForm = new Login();

    m_userForm = new UserForm(ui->widget);
    m_buyerForm = new BuyerForm(ui->widget);
    m_sellerForm = new SellerForm(ui->widget);
    m_bookForm = new BookForm(ui->widget);
    m_storeForm = new StoreForm(ui->widget);

    m_server = new MsgServer();

    m_loginForm->show();
    m_userForm->hide();
    m_buyerForm->hide();
    m_sellerForm->hide();
    m_bookForm->hide();
    m_storeForm->hide();

    //ui->mainToolBar->hide();
    //ui->menuBar->hide();
    //ui->statusBar->hide();


    this->setContextMenuPolicy(Qt::NoContextMenu); //去掉工具栏的右键菜单
    this->setCentralWidget(ui->widget);

    this->setWindowTitle(tr("服务器端"));

    connect(m_loginForm, SIGNAL(signalUserLogin(QString,QString)),
            this, SLOT(slotUserLogin(QString,QString)));    /// 登录信号与槽函数



}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_loginForm;

}
void MainWindow::slotUserLogin(QString id, QString pswd)  /// 登录槽函数
{

    if(Execsql::loginUser(id,pswd))
    {
        //ui->mainToolBar->show();
        m_loginForm->hide();
        //ui->menuBar->show();
        MainWindow::show();

        this->setCentralWidget(ui->widget);
        //this->menuBar()->hide();
        //on_actionUser_triggered();
    }
}

void MainWindow::on_actionseller_triggered() /// seller图标触发
{
    this->setWindowTitle(tr("seller界面"));
    m_userForm->hide();
    m_buyerForm->hide();
    m_bookForm->hide();
    m_storeForm->hide();

    m_sellerForm->show();
    m_sellerForm->updateTableInfos();

}

void MainWindow::on_actionbuyer_triggered()  ///buyer
{
    this->setWindowTitle(tr("buyer界面"));
    m_userForm->hide();
    m_sellerForm->hide();
    m_bookForm->hide();
    m_storeForm->hide();

    m_buyerForm->show();
    m_buyerForm->updateTableInfos();
}

void MainWindow::on_actionuser_triggered() ///user
{
    this->setWindowTitle(tr("user界面"));

    m_buyerForm->hide();
    m_sellerForm->hide();
    m_bookForm->hide();
    m_storeForm->hide();


    m_userForm->show();
    m_userForm->updateTableInfos();
}


void MainWindow::on_actionstore_triggered() ///store
{
    this->setWindowTitle(tr("store界面"));

    m_buyerForm->hide();
    m_sellerForm->hide();
    m_userForm->hide();
    m_bookForm->hide();

    m_storeForm->show();
    m_storeForm->updateTableInfos();
}

void MainWindow::on_actionbook_triggered()  ///book
{
    this->setWindowTitle(tr("book界面"));

    m_buyerForm->hide();
    m_sellerForm->hide();
    m_userForm->hide();
    m_storeForm->hide();

    m_bookForm->show();
    m_bookForm->updateTableInfos();

}




