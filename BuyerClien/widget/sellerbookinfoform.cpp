#include "sellerbookinfoform.h"
#include "ui_sellerbookinfoform.h"
#include<QFileDialog>
#include <QMessageBox>
SellerBookInfoForm::SellerBookInfoForm(BookInfo info, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SellerBookInfoForm)
{
    ui->setupUi(this);
    m_bookInfo = info;
    updateSellerBookInfoForm();
}

SellerBookInfoForm::~SellerBookInfoForm()
{
    delete ui;
}
void SellerBookInfoForm::updateSellerBookInfoForm(){

    ui->lb_bookImage->setPixmap(QPixmap::fromImage(m_bookInfo.getBookImage()));
    ui->lb_bookImage->setScaledContents(true);
    ui->lb_bookName->setText(m_bookInfo.getName());
    ui->lb_author->setText(m_bookInfo.getAuthor());
    ui->lb_price->setText(m_bookInfo.getPrice());
    ui->lb_type->setText(m_bookInfo.getTypde());
    ui->TE->setText(m_bookInfo.getDescription());


    ui->le_name->setText(m_bookInfo.getName());
    ui->le_author->setText(m_bookInfo.getAuthor());
    ui->le_price->setText(m_bookInfo.getPrice());
    ui->le_type->setText(m_bookInfo.getTypde());

}

void SellerBookInfoForm::on_pushButton_clicked()
{
   this->close();
}

void SellerBookInfoForm::on_pushButton_2_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this
                                  ,"select Image","../../bookImages"
                                  ,"Images(*.png *.jpg)");

    if(!fileName.isEmpty()){
    QImage img(fileName);
    ui->lb_bookImage->setPixmap(QPixmap::fromImage(img));
    m_bookInfo.setBookImage(img);

    }


}

void SellerBookInfoForm::on_pb_confirm_clicked()
{
    if(ui->le_name->text().isEmpty()){
        QMessageBox::information(NULL,"注意","书名不能为空",QMessageBox::Yes);
        return;
    }else if(ui->le_type->text().isEmpty()){
        QMessageBox::information(NULL,"注意","书名不能为空",QMessageBox::Yes);
        return;
    }else if(ui->le_author->text().isEmpty()){
        QMessageBox::information(NULL,"注意","作者不能为空",QMessageBox::Yes);
        return;
    }else if(ui->le_price->text().isEmpty()){
        QMessageBox::information(NULL,"注意","价格不能为空",QMessageBox::Yes);
        return;
    }else if(ui->TE->toPlainText().isEmpty()){
        QMessageBox::information(NULL,"注意","简介不能为空",QMessageBox::Yes);
        return;
    }else if(m_bookInfo.getBookImage() == QImage()){
        QMessageBox::information(NULL,"注意","请添加图片",QMessageBox::Yes);
        return;
    }

    m_bookInfo.setAuthor(ui->le_author->text());
    m_bookInfo.setName(ui->le_name->text());
    m_bookInfo.setPrice(ui->le_price->text());
    m_bookInfo.setType(ui->le_type->text());
    m_bookInfo.setDescription(ui->TE->toPlainText());

    emit addOneBookInfoSignal(m_bookInfo);

    this->close();
}
