#include "sellershoppingitemform.h"

#include "ui_sellershoppingitemform.h"

#include "global.h"
SellerShoppingitemForm::SellerShoppingitemForm(ShoppingCart info, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SellerShoppingitemForm)
{

    ui->setupUi(this);
    m_shoppingInfo = info;
    updataSellerShoppingitemForm();
}

SellerShoppingitemForm::~SellerShoppingitemForm()
{
    delete ui;
}
void SellerShoppingitemForm::updataSellerShoppingitemForm(){

    ui->lb_bookImage->setScaledContents(true);
    ui->lb_bookImage->setPixmap(QPixmap::fromImage(m_shoppingInfo.getImage()));
    ui->lb_bookName->setText(Global::m_bookMap_g[m_shoppingInfo.getBookId()]);
    ui->lb_number->setText(m_shoppingInfo.getNumber());
    ui->lb_price->setText(m_shoppingInfo.getPrice());
    ui->lb_time->setText(m_shoppingInfo.getTime());
    ui->lb_condition->setText(m_shoppingInfo.getCondition());
    ui->lb_buyerId->setText(m_shoppingInfo.getBuyerId());


}
