#include "sellerloadform.h"
#include "ui_sellerloadform.h"
#include "selleritemform.h"
#include "selleraddbookform.h"
#include "global.h"
SellerLoadForm::SellerLoadForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SellerLoadForm)
{
    ui->setupUi(this);
    updataSellerLoadForm(Global::m_bookInfoList_g);


}

SellerLoadForm::~SellerLoadForm()
{
    delete ui;
}
void SellerLoadForm::updataSellerLoadForm(bookInfoList list){

    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(3);

    ui->tableWidget->verticalHeader()->setVisible(false);  ///隐藏行号
    ui->tableWidget->horizontalHeader()->setVisible(false);///隐藏表头

    ui->tableWidget->setRowCount(list.length() / 3 +1);

    for(int x = 0 ; x < list.length() / 3 +1; x++){
        for(int y = 0 ; y < 3; y++)
            if(x*3+y < list.length()){
                SellerItemForm *item = new SellerItemForm(list.at(x*3+y));
                ui->tableWidget->setCellWidget(x,y,item);
                connect(item,&SellerItemForm::addOneBookInSignal,this,&SellerLoadForm::updataOneBookInSlot);
            } //if

    }//for


}

void SellerLoadForm::on_pushButton_clicked()
{
    SellerAddBookForm *item = new SellerAddBookForm();
    item->show();
    connect(item,&SellerAddBookForm::addOneBookInfoSignal,this,addOneBookinfoSlot);
}
void SellerLoadForm::addOneBookinfoSlot(BookInfo info){
    emit addOneBookSignal(info);
}
void SellerLoadForm::updataOneBookInSlot(BookInfo info){
    emit updataOneBookInSignal(info);
}
