#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QMouseEvent>

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{

    ui->setupUi(this);
    ui->le_pswd->setEchoMode(QLineEdit::Password);
    setWindowFlags(Qt::FramelessWindowHint);
    ui->pb_close->setFlat(true);
    ui->pb_login->setFlat(true);
    ui->pb_login->setToolTip(QString("登录"));
    ui->pb_register->setFlat(true);
    ui->pb_register->setToolTip(QString("注册"));
}

Login::~Login()
{
    delete ui;
}

void Login::on_pb_login_clicked()
{
    emit signalUserLogin(ui->le_name->text(), ui->le_pswd->text());
}

void Login::on_pb_register_clicked()
{
    emit signalUserRegister();
}
void Login::paintEvent(QPaintEvent *)
{
    /*QPainter p(this);
    QPixmap pix("../images/login.jpg");
    p.drawPixmap(0,0,width(),height(),pix);*/


    QPixmap *pixmap = new QPixmap("../../images/login.jpg");//加载图片
    pixmap->scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio);//设置图片大小

    //ui->label->setScaledContents(true);//设置label全填效果
    ui->label->setPixmap(*pixmap);//把图片放到label中，其他控件加载图片思路一样的
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

void Login::on_pb_close_clicked()
{
    this->close();
}
