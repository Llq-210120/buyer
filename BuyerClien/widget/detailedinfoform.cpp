#include "detailedinfoform.h"
#include "ui_detailedinfoform.h"
#include "shoppingcart.h"
#include "global.h"
#include <QPixmap>
#include <QMessageBox>
#include <QDateTime>
#include <QDebug>
#define cout qDebug() << "[" <<__FILE__ << ":" << __LINE__ << "]"
DetailedInfoForm::DetailedInfoForm(BookInfo info, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DetailedInfoForm)
{
    ui->setupUi(this);
    m_bookInfo = info;
    updateDetailedInfoForm();
    ui->pushButton->setFlat(true);
    setWindowFlags(Qt::FramelessWindowHint);

}

DetailedInfoForm::~DetailedInfoForm()
{
    delete ui;
}
void DetailedInfoForm::updateDetailedInfoForm(){

    ui->lb_bookImage->setPixmap(QPixmap::fromImage(m_bookInfo.getBookImage()));
    ui->lb_bookImage->setScaledContents(true);
    ui->lb_bookName->setText(m_bookInfo.getName());
    ui->lb_author->setText(m_bookInfo.getAuthor());
    ui->lb_price->setText(m_bookInfo.getPrice());
    ui->lb_type->setText(m_bookInfo.getTypde());
    ui->TE->setText(m_bookInfo.getDescription());

}

void DetailedInfoForm::on_pushButton_clicked()
{
    this->close();
}

void DetailedInfoForm::on_pb_shoppingcart_clicked()
{



    if(ui->spinBox->text() == "0")
        QMessageBox::information(NULL,"错误","请输入大于0的数字",QMessageBox::Yes);

    else {

        if(!Global::m_shoppingCartInfoList_g.empty()){
            for(int i = 0 ; i < Global::m_shoppingCartInfoList_g.length() ;i++){
                if(m_bookInfo.getId() == Global::m_shoppingCartInfoList_g.at(i).getBookId()){
                    if(Global::m_shoppingCartInfoList_g.at(i).getCondition()!="未提交"){
                        if(Global::m_shoppingCartInfoList_g.at(i).getCondition() != "已收货"){
                            QMessageBox::information(NULL,"注意","您已购买此商品，请确认收货后再次购买",QMessageBox::Yes);
                            return;
                        }
                        else {
                            ShoppingCart info;
                            info.setBookId(m_bookInfo.getId());
                            info.setBuyerId(Global::m_buyerInfo_g.getID());
                            info.setPrice(m_bookInfo.getPrice());
                            info.setNumber(ui->spinBox->text());
                            QString cond = QString("未提交");
                            info.setCondition(cond);
                            QString time = QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss");
                            info.setTime(time);
                            info.setImage(m_bookInfo.getBookImage());

                            Global::m_shoppingCartInfoList_g.append(info);
                            QMessageBox::information(NULL,"加入成功","加入成功",QMessageBox::Yes);
                            emit shoppingCartInsert(info);
                            return ;
                        }


                    }
                    int num = Global::m_shoppingCartInfoList_g.at(i).getNumber().toInt();

                    int num1 = ui->spinBox->text().toInt();
                    Global::m_shoppingCartInfoList_g[i].setNumber(
                               QString("%1").arg(
                                  num + num1 )
                                );
                    emit shoppingCartUpdate(Global::m_shoppingCartInfoList_g[i]);
                    QMessageBox::information(NULL,"加入成功","加入成功",QMessageBox::Yes);
                    return ;
                }
            }


        }

            ShoppingCart info;
            info.setBookId(m_bookInfo.getId());
            info.setBuyerId(Global::m_buyerInfo_g.getID());
            info.setPrice(m_bookInfo.getPrice());
            info.setNumber(ui->spinBox->text());
            QString cond = QString("未提交");
            info.setCondition(cond);
            QString time = QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss");
            info.setTime(time);
            info.setImage(m_bookInfo.getBookImage());

            Global::m_shoppingCartInfoList_g.append(info);
            QMessageBox::information(NULL,"加入成功","加入成功",QMessageBox::Yes);
            emit shoppingCartInsert(info);
    }
}

void DetailedInfoForm::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::RightButton)
    {
        close();
    }else if(e->button() == Qt::LeftButton)
    {

        p = e->globalPos() - this->frameGeometry().topLeft();
    }


}
void DetailedInfoForm::mouseMoveEvent(QMouseEvent *e)
{

    if(e->buttons() & Qt::LeftButton)
    {

        move(e->globalPos() - p);
    }

}
