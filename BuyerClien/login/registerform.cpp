#include "registerform.h"
#include "ui_registerform.h"
#include <QDateTime>
#include <QRegExp>
#include <QMessageBox>
#include <QDebug>
#include <QMouseEvent>
#define cout qDebug() << "[" <<__FILE__ << ":" << __LINE__ << "]"

RegisterForm::RegisterForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegisterForm)
{

    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    QRegExp  tempExp("男|女");
    QRegExp  temp("[0-9a-zA-Z]{6,12}");
    ui->le_sex->setValidator(new QRegExpValidator(tempExp, this));
    ui->le_sex->setPlaceholderText("请输入 男|女 ");
    ui->le_pawd->setValidator(new QRegExpValidator(temp,this));
    ui->le_pawd->setPlaceholderText("密码最少位为6位");
    ui->le_id->setEnabled(false);
    ui->le_name->setEnabled(false);
    ui->le_pawd->setEnabled(false);
    ui->le_sex->setEnabled(false);

}

RegisterForm::~RegisterForm()
{
    delete ui;
}
QString RegisterForm::getData(){

    return data;
}
void RegisterForm::on_rb_buyer_clicked()
{
    ui->le_id->clear();
    QRegExp  tempExp("BY\\-[0-9]{3,10}");
    ui->le_id->setValidator(new QRegExpValidator(tempExp, this));
    ui->le_id->setPlaceholderText("顾客ID以 BY- 开头");
    ui->le_id->setEnabled(true);
    ui->le_name->setEnabled(true);
    ui->le_pawd->setEnabled(true);
    ui->le_sex->setEnabled(true);

}

void RegisterForm::on_rb_seller_clicked()
{
    ui->le_id->clear();
    QRegExp  tempExp("SE\\-[0-9]{3,10}");
    ui->le_id->setValidator(new QRegExpValidator(tempExp, this));
    ui->le_id->setPlaceholderText("店长ID以 SE- 开头");
    ui->le_id->setEnabled(true);
    ui->le_name->setEnabled(true);
    ui->le_pawd->setEnabled(true);
    ui->le_sex->setEnabled(true);

}
void RegisterForm::on_pushButton_clicked()
{

    if(ui->le_id->text()==QString("")){
        QMessageBox::information(NULL,"注意","ID不能为空",QMessageBox::Yes);
        return;
    }else if(ui->le_id->text().length() < 6){
        cout << ui->le_id->text().length();
        QMessageBox::information(NULL,"注意","ID长度不能小于6位",QMessageBox::Yes);
        return;
    }else if(ui->le_name->text()==QString("")){
        QMessageBox::information(NULL,"注意","名字不能为空",QMessageBox::Yes);
        return;
    }else if(ui->le_sex->text()==QString("")){
        QMessageBox::information(NULL,"注意","性别不能为空",QMessageBox::Yes);
        return;
    }else if(ui->le_pawd->text()==QString("")){
        QMessageBox::information(NULL,"注意","密码不能为空",QMessageBox::Yes);
        return;
    }else if(ui->le_pawd->text().length() < 6 ){
        QMessageBox::information(NULL,"注意","密码长度不能小于6位",QMessageBox::Yes);
        return;
    }

    ui->le_id->setEnabled(false);
    ui->le_name->setEnabled(false);
    ui->le_pawd->setEnabled(false);
    ui->le_sex->setEnabled(false);

    QString role;
    if(ui->rb_buyer->isChecked()){
        role = QString("顾客");
    }else if(ui->rb_seller->isChecked()){
        role = QString("店长");
    }
    data = ui->le_id->text()  + QString("|")  +
           ui->le_name->text()+ QString("|")  +
           ui->le_sex->text() + QString("|") +
           ui->le_id->text()  + QString("|") +
           ui->le_pawd->text()+ QString("|") +
           role + QString("|") +
           QDateTime::currentDateTime().toString("yyyy-MM-dd");
    emit GatheringInfoSignal();
}
void RegisterForm::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::RightButton)
    {
        close();
    }else if(e->button() == Qt::LeftButton)
    {

        p = e->globalPos() - this->frameGeometry().topLeft();
    }


}
void RegisterForm::mouseMoveEvent(QMouseEvent *e)
{

    if(e->buttons() & Qt::LeftButton)
    {

        move(e->globalPos() - p);
    }

}




void RegisterForm::on_pb_close_clicked()
{
    this->close();
}
