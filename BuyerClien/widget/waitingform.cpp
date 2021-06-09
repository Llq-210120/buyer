#include "waitingform.h"
#include "ui_waitingform.h"

#include <QPainter>
#include <QPixmap>
#include <QDebug>
#include <QMouseEvent>
WaitingForm::WaitingForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WaitingForm)
{
    ui->setupUi(this);

    setWindowFlags(Qt::FramelessWindowHint | windowFlags());

    setAttribute(Qt::WA_TranslucentBackground);
}

WaitingForm::~WaitingForm()
{
    delete ui;
}
void WaitingForm::paintEvent(QPaintEvent *event)
{

    QPainter p;
    p.begin(this);

    p.drawPixmap(0,0,width(),height(),QPixmap("../../images/sp.png"));
    p.end();

}
void WaitingForm::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::RightButton)
    {
        close();
    }else if(e->button() == Qt::LeftButton)
    {

        p = e->globalPos() - this->frameGeometry().topLeft();
    }


}
void WaitingForm::mouseMoveEvent(QMouseEvent *e)
{

    if(e->buttons() & Qt::LeftButton)
    {

        move(e->globalPos() - p);
    }

}
