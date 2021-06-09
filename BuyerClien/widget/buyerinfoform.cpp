#include "buyerinfoform.h"
#include "ui_buyerinfoform.h"
#include "waitingform.h"
#include "global.h"
#include <QPixmap>
#include <QImage>
#include <QFileDialog>
#include <QMessageBox>
#include <QRegExp>
#include <QDebug>
#define cout qDebug() << "[" <<__FILE__ << ":" << __LINE__ << "]"
BuyerInfoForm::BuyerInfoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BuyerInfoForm)
{
    //WaitingForm *wait = new WaitingForm();
    ui->setupUi(this);
    updateBuyerInfoForm();

    QRegExp  tempExp("男|女");    ///设置le_sex 的格式
    ui->le_sex->setValidator(new QRegExpValidator(tempExp, this));
    ui->le_sex->setPlaceholderText("请输入 男|女 ");

    ui->le_name->setEnabled(false);
    ui->le_sex->setEnabled(false);
    ui->le_pawdOld->setEnabled(false);
    ui->le_pawdNew->setEnabled(false);

    ui->pb_backImage->setFlat(true);
    ui->pb_logout->setFlat(true);
    ui->lb_backImage->setScaledContents(true);//设置label全填效果

    QRegExp  temp("[0-9a-zA-Z]{6,12}");
    ui->le_pawdOld->setValidator(new QRegExpValidator(temp,this));
    ui->le_pawdNew->setValidator(new QRegExpValidator(temp,this));
    ui->label_pawdOld->hide();
    ui->le_pawdOld->hide();
    ui->pb_pawd->hide();

    ui->le_pawdOld->setPlaceholderText("请输入原始密码");
    ui->le_pawdOld->setEchoMode(QLineEdit::Password);

    ui->label_pawdNew->hide();
    ui->le_pawdNew->hide();
    ui->le_pawdNew->setPlaceholderText("请输入新密码");
    ui->le_pawdNew->setEchoMode(QLineEdit::Password);

}

BuyerInfoForm::~BuyerInfoForm()
{
    delete ui;
}
void BuyerInfoForm::updateBuyerInfoForm(){
    ui->le_id->clear();
    ui->le_name->clear();
    ui->le_sex->clear();
    cout << Global::m_buyerInfo_g.getID() << Global::m_buyerInfo_g.getName() << Global::m_buyerInfo_g.getSex();
    ui->le_id->setText(Global::m_buyerInfo_g.getID());
    ui->le_name->setText(Global::m_buyerInfo_g.getName());
    ui->le_sex->setText(Global::m_buyerInfo_g.getSex());

    if(ui->le_sex->text() == "男"){
        ui->label_headPic->setPixmap(QPixmap("../../images/usermale.png"));
    }else if(ui->le_sex->text() == "女"){
        ui->label_headPic->setPixmap(QPixmap("../../images/userfemale.png"));
    }

    ui->label_headPic->setScaledContents(true);//设置label全填效果
    QString imgPath = QString("../../backImages/%1.png").arg(Global::m_buyerInfo_g.getID());

    ui->lb_backImage->setPixmap(QPixmap(imgPath));

}


void BuyerInfoForm::on_pb_backImage_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this
                                  ,"select Image","../../backImages"
                                  ,"Images(*.png *.jpg)");

    if(!fileName.isEmpty()){
    QImage img(fileName);
    ui->lb_backImage->setPixmap(QPixmap::fromImage(img));

    QString  fileName = QString("../../backImages/%1.png").arg(Global::m_buyerInfo_g.getID());
    img.save(fileName);


    }
}

void BuyerInfoForm::on_pb_info_clicked()
{




}

void BuyerInfoForm::on_pb_pawd_clicked()
{
    ui->label_pawdOld->show();
    ui->le_pawdOld->show();



}

void BuyerInfoForm::on_pb_logout_clicked()
{
    emit buyerLogout();
}

void BuyerInfoForm::on_pb_info_clicked(bool checked)
{
    cout <<  checked;
    if(checked){
        ui->le_name->setEnabled(true);
        ui->le_sex->setEnabled(true);
        ui->pb_info->setText("确认修改");

        ui->pb_pawd->show();
        ui->le_pawdOld->show();
        ui->label_pawdOld->show();

        ui->le_pawdNew->show();
        ui->label_pawdNew->show();
    }else {

        ui->le_name->setEnabled(false);
        ui->le_sex->setEnabled(false);
        ui->pb_info->setText("修改信息");
        ui->pb_pawd->hide();
        ui->le_pawdOld->hide();
        ui->label_pawdOld->hide();

        ui->le_pawdNew->hide();
        ui->label_pawdNew->hide();

        if(Global::m_buyerInfo_g.getName() == ui->le_name->text() && Global::m_buyerInfo_g.getSex() == ui->le_sex->text())
               return ;

        Global::m_buyerInfo_g.setName(ui->le_name->text());
        Global::m_buyerInfo_g.setSex(ui->le_sex->text());


        emit signalChangeBuyerInfo();
    }

}

void BuyerInfoForm::on_pb_pawd_clicked(bool checked)
{


    if(checked){
        ui->pb_info->setEnabled(false);
        ui->le_pawdNew->clear();
        ui->le_pawdOld->clear();

        ui->le_pawdOld->setEnabled(true);
        ui->le_pawdNew->setEnabled(true);

        ui->pb_pawd->setText("确认修改");
    }else {
        ui->pb_info->setEnabled(true);
        ui->le_pawdOld->setEnabled(false);
        ui->le_pawdNew->setEnabled(false);

        ui->pb_pawd->setText("修改密码");

        if(ui->le_pawdOld->text().isEmpty() || ui->le_pawdNew->text().isEmpty()){
               QMessageBox::information(NULL,"注意","请填入旧密码和新密码",QMessageBox::Yes);
               return;
        }else if(ui->le_pawdOld->text() == ui->le_pawdNew->text()){
                QMessageBox::information(NULL,"注意","旧密码和新密码不能一样",QMessageBox::Yes);
                return;
        }

        QString msg = QString(CMD_ChangePswd_H) + QString("#") +
                Global::m_buyerInfo_g.getID() + QString("|") +
                ui->le_pawdOld->text() +  QString("|") +
                ui->le_pawdNew->text();

        emit signalChangeBuyerPawd(msg);
    }
}
