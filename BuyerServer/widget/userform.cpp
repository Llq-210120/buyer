#include "userform.h"
#include "ui_userform.h"
#include "userinfo.h"
#include "execsql.h"
#include "global.h"
#include <QList>
#include <QTableWidget>
#include <QMessageBox>
UserForm::UserForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserForm)
{
    ui->setupUi(this);
    updateTableInfos();

}

UserForm::~UserForm()
{
    delete ui;
}

void UserForm::updateTableInfos(void){

    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(4);

    QStringList headers;
    headers << "id" << "密码" << "角色" << "注册日期";

    ui->tableWidget->setHorizontalHeaderLabels(headers);

    QList<UserInfo> userInfoList =  Execsql::selectAllUserInfo();
    Global::m_userInfoList_g.clear();
    Global::m_userInfoList_g.append(userInfoList);
    ui->tableWidget->setRowCount(userInfoList.length());
    for(int i=0; i < userInfoList.count(); i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(userInfoList.at(i).getID());
        ui->tableWidget->setItem(i, 0, item);
        item = new QTableWidgetItem(userInfoList.at(i).getPswd());
        ui->tableWidget->setItem(i, 1, item);
        item = new QTableWidgetItem(userInfoList.at(i).getRole());
        ui->tableWidget->setItem(i, 2, item);
        item = new QTableWidgetItem(userInfoList.at(i).getDate());
        ui->tableWidget->setItem(i, 3, item);
    }


}

void UserForm::on_tableWidget_clicked(const QModelIndex &index)
{
    ui->le_id->setEnabled(false);
    ui->le_id->setText(Global::m_userInfoList_g.at(index.row()).getID());
    ui->le_pawd->setText(Global::m_userInfoList_g.at(index.row()).getPswd());
    ui->le_role->setText(Global::m_userInfoList_g.at(index.row()).getRole());
    ui->le_date->setText(Global::m_userInfoList_g.at(index.row()).getDate());

}

void UserForm::on_pushButton_clicked()
{
    if(ui->le_id->text().isEmpty()){
        QMessageBox::information(NULL,"注意","无信息可操作，请选择",QMessageBox::Yes);
        return;
    }
    UserInfo info;
    info.setID(ui->le_id->text());
    info.setRole(ui->le_role->text());
    info.setPswd(ui->le_pawd->text());
    info.setDate(ui->le_date->text());

    bool flag = Execsql::updataOneuser(info);

    if(flag){
        QMessageBox::information(NULL,"修改成功","修改成功",QMessageBox::Yes);
    }else {
        QMessageBox::information(NULL,"修改失败","修改失败",QMessageBox::Yes);
    }
    updateTableInfos();
}
