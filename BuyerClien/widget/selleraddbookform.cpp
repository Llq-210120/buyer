#include "selleraddbookform.h"
#include "ui_selleraddbookform.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QRegExp>
#include "global.h"
SellerAddBookForm::SellerAddBookForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SellerAddBookForm)
{
    ui->setupUi(this);
    QRegExp  tempPrice("^(([0-9]+\.[0-9]*[1-9][0-9]*)|([0-9]*[1-9][0-9]*\.[0-9]+)|([0-9]*[1-9][0-9]*))$");
    QRegExp  tempId("BK\\-[0-9]{3,10}");

    ui->le_id->setValidator(new QRegExpValidator(tempId, this));
    ui->le_price->setValidator(new QRegExpValidator(tempPrice,this));

    ui->le_author->setPlaceholderText("作者");
    ui->le_id->setPlaceholderText("ID(请以 BK- 开头)");
    ui->le_name->setPlaceholderText("书名");
    ui->le_price->setPlaceholderText("价格");
    ui->le_type->setPlaceholderText("类型");


}

SellerAddBookForm::~SellerAddBookForm()
{
    delete ui;
}

void SellerAddBookForm::on_pushButton_clicked()
{
    this->close();
}

void SellerAddBookForm::on_pb_choseImage_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this
                                  ,"select Image","../../images"
                                  ,"Images(*.png *.jpg)");

    if(!fileName.isEmpty()){
    QImage img(fileName);
    ui->lb_bookImage->setPixmap(QPixmap::fromImage(img));
    m_bookInfo.setBookImage(img);
    }



}

void SellerAddBookForm::on_pb_confirm_clicked()
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
    }else if(ui->le_id->text().isEmpty()){
        QMessageBox::information(NULL,"注意","ID不能为空",QMessageBox::Yes);
        return;
    }else if(ui->TE->toPlainText().isEmpty()){
        QMessageBox::information(NULL,"注意","简介不能为空",QMessageBox::Yes);
        return;
    }else if(ui->le_id->text().length() < 6 ){
        QMessageBox::information(NULL,"注意","ID不能少于6位",QMessageBox::Yes);
        return;
    }else if(Global::m_bookMap_g.find(ui->le_id->text()) != Global::m_bookMap_g.end()){
        QString text = QString("ID与《%1》重复").arg(Global::m_bookMap_g[ui->le_id->text()]);
        QMessageBox::information(NULL,"注意",text,QMessageBox::Yes);
        return;
    }else if(m_bookInfo.getBookImage() == QImage()){
        QMessageBox::information(NULL,"注意","请添加图片",QMessageBox::Yes);
        return;
    }

    m_bookInfo.setAuthor( ui->le_author->text());
    m_bookInfo.setid(ui->le_id->text());
    m_bookInfo.setName(ui->le_name->text());
    m_bookInfo.setPrice(ui->le_price->text());
    m_bookInfo.setType(ui->le_type->text());
    m_bookInfo.setDescription(ui->TE->toPlainText());

    emit addOneBookInfoSignal(m_bookInfo);
    this->close();
}
