#ifndef SELLERSHOPPINGCARTFORM_H
#define SELLERSHOPPINGCARTFORM_H

#include <QWidget>

namespace Ui {
class SellerShoppingCartForm;
}

class SellerShoppingCartForm : public QWidget
{
    Q_OBJECT

public:
    explicit SellerShoppingCartForm(QWidget *parent = 0);
    ~SellerShoppingCartForm();
    void updataSellerShoppingCartForm();
signals:
    void shoppingCartDeliverSignal(int index);
    void shoppingCartGoodsSignal(int index);

private slots:
    void show_menu(QPoint pos);

private:
    Ui::SellerShoppingCartForm *ui;
    int in;

};

#endif // SELLERSHOPPINGCARTFORM_H
