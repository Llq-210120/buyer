#include "bookform.h"
#include "ui_bookform.h"
#include "execsql.h"
#include "global.h"
#include "bookinfo.h"
#include <QTableWidget>
#include <QMessageBox>
#include <QDebug>
BookForm::BookForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BookForm)
{

    ui->setupUi(this);

    updateTableInfos();
}

BookForm::~BookForm()
{
    delete ui;
}

void BookForm::updateTableInfos(){

    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(7);

    QStringList headers;
    headers << "书号" << "书店id" << "书名" <<"作者"<< "类型" << "价格" << "简介" ;
    ui->tableWidget->setHorizontalHeaderLabels(headers); ///设置表头
    QList<BookInfo> bookInfoList =  Execsql::selectAllBookInfo();
    Global::m_bookInfoList_g.clear();
    ui->tableWidget->setRowCount(bookInfoList.length());
    for(int i=0; i < bookInfoList.count(); i++)
    {
        Global::m_bookInfoList_g.append(bookInfoList.at(i));
        QTableWidgetItem *item = new QTableWidgetItem(bookInfoList.at(i).getId());
        ui->tableWidget->setItem(i, 0, item);
        item = new QTableWidgetItem(bookInfoList.at(i).getStoreId());
        ui->tableWidget->setItem(i, 1, item);
        item = new QTableWidgetItem(bookInfoList.at(i).getName());
        ui->tableWidget->setItem(i, 2, item);
        item = new QTableWidgetItem(bookInfoList.at(i).getAuthor());
        ui->tableWidget->setItem(i, 3, item);
        item = new QTableWidgetItem(bookInfoList.at(i).getTypde());
        ui->tableWidget->setItem(i, 4, item);
        item = new QTableWidgetItem(bookInfoList.at(i).getPrice());
        ui->tableWidget->setItem(i, 5, item);
        item = new QTableWidgetItem(bookInfoList.at(i).getDescription());
        ui->tableWidget->setItem(i, 6, item);
    }

}

void BookForm::on_tableWidget_clicked(const QModelIndex &index)
{
    int col = ui->tableWidget->currentColumn();
    int row = ui->tableWidget->currentRow();
    ui->le_bookId->setEnabled(false);
    ui->le_bookSotreId->setEnabled(false);

    ui->le_bookId->setText(Global::m_bookInfoList_g.at(row).getId());
    ui->le_bookName->setText(Global::m_bookInfoList_g.at(row).getName());
    ui->le_bookSotreId->setText(Global::m_bookInfoList_g.at(row).getStoreId());
    ui->le_author->setText(Global::m_bookInfoList_g.at(row).getAuthor());
    ui->le_price->setText(Global::m_bookInfoList_g.at(row).getPrice());
    ui->le_type->setText(Global::m_bookInfoList_g.at(row).getTypde());
    ui->textEdit->setText(Global::m_bookInfoList_g.at(row).getDescription());
}

void BookForm::on_pushButton_clicked()
{
    if(ui->le_bookId->text().isEmpty()){
        QMessageBox::information(NULL,"注意","无信息可操作，请选择",QMessageBox::Yes);
        return;
    }
    BookInfo info;
    info.setid(ui->le_bookId->text());
    info.setAuthor(ui->le_author->text());
    info.setName(ui->le_bookName->text());
    info.setPrice(ui->le_price->text());
    info.setType(ui->le_type->text());
    info.setStoreId(ui->le_bookSotreId->text());
    info.setDescription(ui->textEdit->toPlainText());

    bool flag = Execsql::updataOneBook(info);
    if(flag){
        QMessageBox::information(NULL,"修改成功","修改成功",QMessageBox::Yes);
    }else {
        QMessageBox::information(NULL,"修改失败","修改失败",QMessageBox::Yes);
    }
    updateTableInfos();
}
