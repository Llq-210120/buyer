#include "sellerinfoform.h"
#include "ui_sellerinfoform.h"
#include "global.h"
#include <QPixmap>
#include <QStringList>
#include <QMessageBox>
#include <QRegExp>
#include <QDebug>
#define cout qDebug() << "[" <<__FILE__ << ":" << __LINE__ << "]"
SellerInfoForm::SellerInfoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SellerInfoForm)
{
    ui->setupUi(this);

    updateBuyerInfoForm();
    ui->pb_create->hide();

    QRegExp  tempExp("男|女");    ///设置le_sex 的格式
    ui->le_sex->setValidator(new QRegExpValidator(tempExp, this));
    ui->le_sex->setPlaceholderText("请输入 男|女 ");

    ui->le_name->setEnabled(false);
    ui->le_sex->setEnabled(false);
    ui->le_pawdOld->setEnabled(false);
    ui->le_pawdNew->setEnabled(false);

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

SellerInfoForm::~SellerInfoForm()
{
    delete ui;
}
void SellerInfoForm::updateBuyerInfoForm(){

    ui->le_id->clear();
    ui->le_name->clear();
    ui->le_sex->clear();
    cout << Global::m_sellerInfo_g.getID() << Global::m_sellerInfo_g.getName() << Global::m_sellerInfo_g.getSex();
    ui->le_id->setText(Global::m_sellerInfo_g.getID());
    ui->le_name->setText(Global::m_sellerInfo_g.getName());
    ui->le_sex->setText(Global::m_sellerInfo_g.getSex());

    if(ui->le_sex->text() == "男"){
        ui->label_headPic->setPixmap(QPixmap("../../images/usermale.png"));
    }else if(ui->le_sex->text() == "女"){
        ui->label_headPic->setPixmap(QPixmap("../../images/userfemale.png"));
    }

    ui->le_id_2->setText(Global::m_storeInfo_g.getId());
    ui->le_storeName->setText(Global::m_storeInfo_g.getName());
    ui->le_storeName->setEnabled(false);

    ui->label_headPic->setScaledContents(true);//设置label全填效果

    if(Global::m_storeInfo_g.getId().isEmpty() == true){

        QString sellerID = Global::m_sellerInfo_g.getID();
        if(sellerID.isEmpty() == false){
            QStringList l  =  sellerID.split("-");
            QString storeId = QString("ST-") + l.at(1);
            ui->le_id_2->setText(storeId);
        }
        ui->le_storeName->setEnabled(true);
        ui->pb_create->show();
    }
}

void SellerInfoForm::on_pb_create_clicked()
{
    if(Global::m_storeInfo_g.getId().isEmpty() == false){
        QMessageBox::information(NULL,"注意","你已经创建成功书店",QMessageBox::Yes);
        return ;
    }
    if(ui->le_id_2->text().isEmpty()){
        QMessageBox::information(NULL,"注意","书店ID不能为空",QMessageBox::Yes);
        return;
    }else if(ui->le_storeName->text().isEmpty()){
        QMessageBox::information(NULL,"注意","书店名字不能为空",QMessageBox::Yes);
        return;
    }
    StoreInfo info(ui->le_id_2->text(),Global::m_sellerInfo_g.getID(),ui->le_storeName->text());

    ui->le_id_2->setEnabled(false);
    ui->le_storeName->setEnabled(false);
    emit creatStoreSignal(info);
}

void SellerInfoForm::on_pb_logout_clicked()
{
    emit sellerLogout();
}

void SellerInfoForm::on_pb_info_clicked(bool checked)
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

        if(Global::m_sellerInfo_g.getName() == ui->le_name->text() && Global::m_sellerInfo_g.getSex() == ui->le_sex->text())
               return ;

        Global::m_sellerInfo_g.setName(ui->le_name->text());
        Global::m_sellerInfo_g.setSex(ui->le_sex->text());


        emit signalChangeSellerInfo();
    }
}

void SellerInfoForm::on_pb_pawd_clicked(bool checked)
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
                Global::m_sellerInfo_g.getID() + QString("|") +
                ui->le_pawdOld->text() +  QString("|") +
                ui->le_pawdNew->text();
        cout << msg;
        emit signalChangeSellerPawd(msg);
    }

}
