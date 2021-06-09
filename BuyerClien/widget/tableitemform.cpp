#include "tableitemform.h"
#include "ui_tableitemform.h"

#include "detailedinfoform.h"
#include <QPixmap>
#include <QDebug>
#define cout qDebug() << "[" <<__FILE__ << ":" << __LINE__ << "]"

TableItemForm::TableItemForm(BookInfo info,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TableItemForm)
{
    ui->setupUi(this);
    m_bookInfo = info;

    updataTableItemForm();
}

TableItemForm::~TableItemForm()
{
    delete ui;
}
void TableItemForm::updataTableItemForm(){

    //QString imagePath = QString("../../bookImages/%1.png").arg(m_bookInfo.getName());
    //ui->lb_bookImage->setPixmap(QPixmap::fromImage(QImage(imagePath)));
    //ui->lb_bookImage->setPixmap(QPixmap(imagePath));


    ui->lb_bookImage->setPixmap( QPixmap::fromImage(m_bookInfo.getBookImage()));
    ui->lb_bookImage->setScaledContents(true);
    ui->lb_bookAuthor->setText(m_bookInfo.getAuthor());
    ui->lb_bookName->setText(m_bookInfo.getName());

}

void TableItemForm::on_pushButton_clicked()
{
    emit detailedInfoSignals(m_bookInfo);
    /*DetailedInfoForm *deta = new DetailedInfoForm(m_bookInfo);
    deta->show();*/
}
