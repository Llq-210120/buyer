#include "storeform.h"
#include "ui_storeform.h"
#include "execsql.h"
#include "global.h"
#include <QMessageBox>

StoreForm::StoreForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StoreForm)
{
    ui->setupUi(this);
    updateTableInfos();
}

StoreForm::~StoreForm()
{
    delete ui;
}
void StoreForm::updateTableInfos(){

    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(3);

    QStringList headers;
    headers << "商店id"  << "店长id" << "书店名称" ;

    ui->tableWidget->setHorizontalHeaderLabels(headers);

    QList<StoreInfo> StoreInfoList =  Execsql::selectAllStoreInfo();
    Global::m_storeInfoList_g.clear();
    Global::m_storeInfoList_g.append(StoreInfoList);

    ui->tableWidget->setRowCount(StoreInfoList.length());
    for(int i=0; i < StoreInfoList.count(); i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(StoreInfoList.at(i).getId());
        ui->tableWidget->setItem(i, 0, item);
        item = new QTableWidgetItem(StoreInfoList.at(i).getSellerId());
        ui->tableWidget->setItem(i, 1, item);
        item = new QTableWidgetItem(StoreInfoList.at(i).getName());
        ui->tableWidget->setItem(i, 2, item);

    }

}

void StoreForm::on_tableWidget_clicked(const QModelIndex &index)
{
    ui->le_sellerID->setEnabled(false);
    ui->le_storeID->setEnabled(false);
    ui->le_storeID->setText(Global::m_storeInfoList_g.at(index.row()).getId());
    ui->le_sellerID->setText(Global::m_storeInfoList_g.at(index.row()).getSellerId());
    ui->le_storeName->setText(Global::m_storeInfoList_g.at(index.row()).getName());

}

void StoreForm::on_pushButton_clicked()
{
    if(ui->le_sellerID->text().isEmpty()){
        QMessageBox::information(NULL,"注意","无信息可操作，请选择",QMessageBox::Yes);
        return;
    }
    StoreInfo info;
    info.setId(ui->le_storeID->text());
    info.setSellerId(ui->le_sellerID->text());
    info.SetName(ui->le_storeName->text());

    bool flag = Execsql::updataOneStore(info);

    if(flag){
        QMessageBox::information(NULL,"修改成功","修改成功",QMessageBox::Yes);
    }else {
        QMessageBox::information(NULL,"修改失败","修改失败",QMessageBox::Yes);
    }
    updateTableInfos();
}
