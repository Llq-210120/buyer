#include "sellerform.h"
#include "ui_sellerform.h"
#include "sellerinfo.h"
#include "execsql.h"
#include "global.h"
#include <QList>
#include <QTableWidget>
#include <QMessageBox>
SellerForm::SellerForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SellerForm)
{
    ui->setupUi(this);
    updateTableInfos();

}

SellerForm::~SellerForm()
{
    delete ui;
}

void SellerForm::updateTableInfos(void){

    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(3);

    QStringList headers;
    headers << "id" << "名字" << "性别";

    ui->tableWidget->setHorizontalHeaderLabels(headers);

    QList<SellerInfo> sellerInfoList =  Execsql::selectAllSellerInfo();
    Global::m_sellerInfoList_g.clear();
    Global::m_sellerInfoList_g.append(sellerInfoList);

    ui->tableWidget->setRowCount(sellerInfoList.length());
    for(int i=0; i < sellerInfoList.count(); i++)
    {

        QTableWidgetItem *item = new QTableWidgetItem(sellerInfoList.at(i).getID());
        ui->tableWidget->setItem(i, 0, item);
        item = new QTableWidgetItem(sellerInfoList.at(i).getName());
        ui->tableWidget->setItem(i, 1, item);
        item = new QTableWidgetItem(sellerInfoList.at(i).getSex());
        ui->tableWidget->setItem(i, 2, item);
    }


}

void SellerForm::on_tableWidget_clicked(const QModelIndex &index)
{
    ui->le_id->setEnabled(false);
    ui->le_id->setText(Global::m_sellerInfoList_g.at(index.row()).getID());
    ui->le_name->setText(Global::m_sellerInfoList_g.at(index.row()).getName());
    ui->le_sex->setText(Global::m_sellerInfoList_g.at(index.row()).getSex());




}

void SellerForm::on_pushButton_clicked()
{
    if(ui->le_id->text().isEmpty()){
        QMessageBox::information(NULL,"注意","无信息可操作，请选择",QMessageBox::Yes);
        return;
    }
    SellerInfo info;
    info.setID(ui->le_id->text());
    info.setName(ui->le_name->text());
    info.setSex(ui->le_sex->text());
    bool flag = Execsql::updataOneSeller(info);

    if(flag){
        QMessageBox::information(NULL,"修改成功","修改成功",QMessageBox::Yes);
    }else {
        QMessageBox::information(NULL,"修改失败","修改失败",QMessageBox::Yes);
    }
    updateTableInfos();
}
