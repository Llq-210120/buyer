#include "buyerform.h"
#include "ui_buyerform.h"
#include "buyerinfo.h"
#include "execsql.h"
#include "global.h"
#include <QList>
#include <QTableWidget>
#include <QMessageBox>
BuyerForm::BuyerForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BuyerForm)
{
    ui->setupUi(this);
    updateTableInfos();
}

BuyerForm::~BuyerForm()
{
    delete ui;
}

void BuyerForm::updateTableInfos(void){

    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(3);

    QStringList headers;
    headers << "id" << "名字" << "性别" ;

    ui->tableWidget->setHorizontalHeaderLabels(headers);

    QList<BuyerInfo> buyerInfoList =  Execsql::selectAllBuyerInfo();
    Global::m_buyerInfoList_g.clear();
    ui->tableWidget->setRowCount(buyerInfoList.length());
    for(int i=0; i < buyerInfoList.count(); i++)
    {
        Global::m_buyerInfoList_g.append(buyerInfoList.at(i));
        QTableWidgetItem *item = new QTableWidgetItem(buyerInfoList.at(i).getID());
        ui->tableWidget->setItem(i, 0, item);
        item = new QTableWidgetItem(buyerInfoList.at(i).getName());
        ui->tableWidget->setItem(i, 1, item);
        item = new QTableWidgetItem(buyerInfoList.at(i).getSex());
        ui->tableWidget->setItem(i, 2, item);

    }


}

void BuyerForm::on_tableWidget_clicked(const QModelIndex &index)
{
    ui->le_id->setEnabled(false);
    ui->le_id->setText(Global::m_buyerInfoList_g.at(index.row()).getID());
    ui->le_name->setText(Global::m_buyerInfoList_g.at(index.row()).getName());
    ui->le_sex->setText(Global::m_buyerInfoList_g.at(index.row()).getSex());
}

void BuyerForm::on_pushButton_clicked()
{
    if(ui->le_id->text().isEmpty()){
        QMessageBox::information(NULL,"注意","无信息可操作，请选择",QMessageBox::Yes);
        return;
    }
    BuyerInfo info;
    info.setID(ui->le_id->text());
    info.setName(ui->le_name->text());
    info.setSex(ui->le_sex->text());
    bool flag = Execsql::updataOneBuyer(info);

    if(flag){
        QMessageBox::information(NULL,"修改成功","修改成功",QMessageBox::Yes);
    }else {
        QMessageBox::information(NULL,"修改失败","修改失败",QMessageBox::Yes);
    }
    updateTableInfos();
}
