#include "selleritemform.h"
#include "ui_selleritemform.h"
#include "sellerbookinfoform.h"

#include <QPixmap>
SellerItemForm::SellerItemForm(BookInfo info, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SellerItemForm)
{
    ui->setupUi(this);
    m_bookInfo = info;
    updataSellerItemForm();

}

SellerItemForm::~SellerItemForm()
{
    delete ui;
}
void SellerItemForm::updataSellerItemForm(){

    ui->lb_bookAuthor->setText(m_bookInfo.getAuthor());
    ui->lb_bookImage->setScaledContents(true);
    ui->lb_bookImage->setPixmap(QPixmap::fromImage(m_bookInfo.getBookImage()));
    ui->lb_bookName->setText(m_bookInfo.getName());

}

void SellerItemForm::on_pushButton_clicked()
{
    SellerBookInfoForm *item = new SellerBookInfoForm(m_bookInfo);
    item->show();
    connect(item,&SellerBookInfoForm::addOneBookInfoSignal,this,&SellerItemForm::addOneBookInfoSlot);
}
void SellerItemForm::addOneBookInfoSlot(BookInfo info){

    emit addOneBookInSignal(info);
}
