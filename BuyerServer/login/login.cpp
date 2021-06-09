#include "login.h"
#include "ui_login.h"
#include <QPaintEvent>
#include <QPainter>
#include <QPixmap>
#include "execsql.h"
#include <QMouseEvent>
Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    setWindowTitle("登录界面");
    setWindowFlags(Qt::FramelessWindowHint);
    ui->le_pswd->setEchoMode(QLineEdit::Password);
    ui->pb_login->setFlat(true);
    ui->pushButton->setFlat(true);
}

Login::~Login()
{
    delete ui;
}

void Login::paintEvent(QPaintEvent *)
{
    /*QPainter p(this);
    QPixmap pix("../images/login.jpg");
    p.drawPixmap(0,0,width(),height(),pix);*/


    QPixmap *pixmap = new QPixmap("../images/login.jpg");//加载图片
    pixmap->scaled(ui->label->size(), Qt::KeepAspectRatio);//设置图片大小

    ui->label->setScaledContents(true);//设置label全填效果
    ui->label->setPixmap(*pixmap);//把图片放到label中，其他控件加载图片思路一样的
    ui->label_4->setStyleSheet("color:white");
    ui->label_2->setStyleSheet("color:white");
    ui->label_3->setStyleSheet("color:white");




}

void Login::on_pb_login_clicked()
{

      emit signalUserLogin(ui->le_name->text(),ui->le_pswd->text());

}
void Login::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::RightButton)
    {
        close();
    }else if(e->button() == Qt::LeftButton)
    {

        p = e->globalPos() - this->frameGeometry().topLeft();
    }


}
void Login::mouseMoveEvent(QMouseEvent *e)
{

    if(e->buttons() & Qt::LeftButton)
    {

        move(e->globalPos() - p);
    }

}

void Login::on_pushButton_clicked()
{
    this->close();
}
