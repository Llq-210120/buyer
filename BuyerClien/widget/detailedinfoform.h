#ifndef DETAILEDINFOFORM_H
#define DETAILEDINFOFORM_H

#include <QWidget>
#include "bookinfo.h"
#include "shoppingcart.h"
namespace Ui {
class DetailedInfoForm;
}

class DetailedInfoForm : public QWidget
{
    Q_OBJECT

public:
    explicit DetailedInfoForm(BookInfo info,QWidget *parent = 0);
    ~DetailedInfoForm();
    void updateDetailedInfoForm();

    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);

signals:
    void shoppingCartInsert(ShoppingCart info);
    void shoppingCartUpdate(ShoppingCart info);
private slots:
    void on_pushButton_clicked();

    void on_pb_shoppingcart_clicked();

private:
    Ui::DetailedInfoForm *ui;
    BookInfo m_bookInfo;
    QPoint p;
};

#endif // DETAILEDINFOFORM_H
