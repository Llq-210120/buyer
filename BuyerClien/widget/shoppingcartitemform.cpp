#include "shoppingcartitemform.h"
#include "ui_shoppingcartitemform.h"
#include "global.h"
#include <QMessageBox>
#include <QDebug>
#define cout qDebug() << "[" <<__FILE__ << ":" << __LINE__ << "]"
ShoppingCartItemForm::ShoppingCartItemForm(ShoppingCart info, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShoppingCartItemForm)
{
    ui->setupUi(this);
    m_shoppingInfo = info;
    if(info.getCondition() == "未提交"){
        ui->checkBox->show();

    }else {
        ui->checkBox->hide();
    }
    updataShoppingCartItemForm();
    if(info.getCondition() != "未提交") {
        ui->pushButton->hide();
        ui->pushButton_2->hide();
        ui->pushButton->setEnabled(false);
        ui->pushButton_2->setEnabled(false);
    }
}

ShoppingCartItemForm::~ShoppingCartItemForm()
{
    delete ui;
}
void ShoppingCartItemForm::updataShoppingCartItemForm(){

    ui->lb_bookImage->setScaledContents(true);
    ui->lb_bookImage->setPixmap(QPixmap::fromImage(m_shoppingInfo.getImage()));

    ui->lb_bookName->setText(Global::m_bookMap_g[m_shoppingInfo.getBookId()]);

    ui->lb_number->setText(m_shoppingInfo.getNumber());

    ui->lb_price->setText(m_shoppingInfo.getPrice());

    ui->lb_time->setText(m_shoppingInfo.getTime());
    if(m_shoppingInfo.getCondition() == "已提交"){
        ui->lb_condition->setText("已支付");
    }else{
        ui->lb_condition->setText(m_shoppingInfo.getCondition());

    }


}

void ShoppingCartItemForm::on_pushButton_clicked() ///按下加号键
{
    int num = ui->lb_number->text().toInt();
    num++;
    QString num_s = QString("%1").arg(num);
    ui->lb_number->setText(num_s);

    for(int i = 0 ; i < Global::m_shoppingCartInfoList_g.length();i++){
        if(m_shoppingInfo.getBookId() == Global::m_shoppingCartInfoList_g.at(i).getBookId())
        {
            int temp = Global::m_shoppingCartInfoList_g[i].getNumber().toInt() + 1 ;
            Global::m_shoppingCartInfoList_g[i].setNumber(QString("%1").arg(temp));
            m_shoppingInfo.setNumber(QString("%1").arg(temp));
            if(ui->checkBox->isChecked()){
                emit signalsCheckShoppingCart(m_shoppingInfo);
            }
        }

    }


}

void ShoppingCartItemForm::on_pushButton_2_clicked()///按下减号键
{
    int num = ui->lb_number->text().toInt();
    num--;
    if(num == 0) {

        int r = QMessageBox::information(this,"注意","如果数量为0，则会移出购物车，你确定吗？"
                                 ,QMessageBox::Yes,QMessageBox::No);
        if(r == QMessageBox::Yes) {
            cout << "QMessageBox::Yes";
                    Global::m_shoppingCartInfoList_g.removeOne(m_shoppingInfo);

                    emit signalsCheckShoppingCartDel(m_shoppingInfo);

        }else if(r == QMessageBox::No){
            cout << "QMessageBox::No";
            num = 1;
        }
    }

    QString num_s = QString("%1").arg(num);
    ui->lb_number->setText(num_s);

    for(int i = 0 ; i < Global::m_shoppingCartInfoList_g.length();i++){
        if(m_shoppingInfo.getBookId() == Global::m_shoppingCartInfoList_g.at(i).getBookId())
        {
            int temp = num_s.toInt() ;
            Global::m_shoppingCartInfoList_g[i].setNumber(QString("%1").arg(temp));
            m_shoppingInfo.setNumber(QString("%1").arg(temp));
            if(ui->checkBox->isChecked()){
                emit signalsCheckShoppingCart(m_shoppingInfo);
            }

        }

    }

}

void ShoppingCartItemForm::on_checkBox_clicked(bool checked)
{
    if(checked == true) {
        cout << "on_checkBox_clicked(bool checked)  true" ;
        emit signalsCheckShoppingCart(m_shoppingInfo);
    }else {
        cout << "on_checkBox_clicked(bool checked)  false" ;

        emit signalsCheckShoppingCartDel_1(m_shoppingInfo);
    }

}
