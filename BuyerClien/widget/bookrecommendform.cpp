#include "bookrecommendform.h"
#include "ui_bookrecommendform.h"
#include "tableitemform.h"
#include "global.h"
#include "detailedinfoform.h"
#include <QPixmap>
#include <QLabel>
#include <QMessageBox>
#include <QDebug>
#define cout qDebug() << "[" <<__FILE__ << ":" << __LINE__ << "]"

BookRecommendForm::BookRecommendForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BookRecommendForm)
{
    ui->setupUi(this);
    updateBookRecommendForm(Global::m_bookInfoList_g);
    ui->le_search->setPlaceholderText("请输入书籍名称 ");

}

BookRecommendForm::~BookRecommendForm()
{
    delete ui;

}

void BookRecommendForm::updateBookRecommendForm(bookInfoList list){

    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(3);

    ui->tableWidget->verticalHeader()->setVisible(false);  ///隐藏行号
    ui->tableWidget->horizontalHeader()->setVisible(false);///隐藏表头

    ui->tableWidget->setRowCount(list.length() / 3 +1);

    for(int x = 0 ; x < list.length() / 3 +1; x++){
        for(int y = 0 ; y < 3; y++)
            if(x*3+y < list.length()){
                TableItemForm *item = new TableItemForm(list.at(x*3+y));
                ui->tableWidget->setCellWidget(x,y,item);
                connect(item,&TableItemForm::detailedInfoSignals,this,&BookRecommendForm::detailedInfoSlot);
            } //if

    }//for
}


void BookRecommendForm::on_pb_all_clicked()
{
    updateBookRecommendForm(Global::m_bookInfoList_g);
}

void BookRecommendForm::on_pb_xs_clicked()
{

    bookInfoList list;
    for(int i = 0 ;i < Global::m_bookInfoList_g.length();i++){
        if(Global::m_bookInfoList_g.at(i).getTypde() == "小说"){
            list.append(Global::m_bookInfoList_g.at(i));

        }

    }
    updateBookRecommendForm(list);
}

void BookRecommendForm::on_pb_bc_clicked()
{
    bookInfoList list;

    for(int i = 0 ;i < Global::m_bookInfoList_g.length();i++){
        if(Global::m_bookInfoList_g.at(i).getTypde() == "编程"){
            list.append(Global::m_bookInfoList_g.at(i));
        }
    }
    updateBookRecommendForm(list);

}

void BookRecommendForm::on_pb_F5_clicked()
{
    emit pb_F5_ClickedSignals();
}
void BookRecommendForm::detailedInfoSlot(BookInfo info){

    DetailedInfoForm *deta = new DetailedInfoForm(info);
    deta->show();
    connect(deta,&DetailedInfoForm::shoppingCartInsert,this,&BookRecommendForm::shoppingCartInsertSlot);
    connect(deta,&DetailedInfoForm::shoppingCartUpdate,this,&BookRecommendForm::shoppingCartUpdateSlot);
}
void BookRecommendForm::shoppingCartInsertSlot(ShoppingCart info){
    emit shoppingCartInsert(info);

}
void BookRecommendForm::shoppingCartUpdateSlot(ShoppingCart info){
    emit shoppingCartUpdate(info);
}

void BookRecommendForm::on_pb_search_clicked()
{
    int i;
    bool flag = true;
    for(i = 0; i < Global::m_bookInfoList_g.length();i++){
        if(Global::m_bookMap_g[Global::m_bookInfoList_g.at(i).getId()] == ui->le_search->text()){
            flag = false;
            DetailedInfoForm *deta = new DetailedInfoForm(Global::m_bookInfoList_g.at(i));
            deta->show();
            connect(deta,&DetailedInfoForm::shoppingCartInsert,this,&BookRecommendForm::shoppingCartInsertSlot);
            connect(deta,&DetailedInfoForm::shoppingCartUpdate,this,&BookRecommendForm::shoppingCartUpdateSlot);

        }


    }
        if(flag) {
              QMessageBox::information(NULL,"注意","请检查输入的书名",QMessageBox::Yes);
              return ;
        }


}
