#ifndef SELLERSHOPPINGITEMFORM_H
#define SELLERSHOPPINGITEMFORM_H

#include <QWidget>
#include "shoppingcart.h"
namespace Ui {
class SellerShoppingitemForm;
}

class SellerShoppingitemForm : public QWidget
{
    Q_OBJECT

public:
    explicit SellerShoppingitemForm(ShoppingCart info, QWidget *parent = 0);
    ~SellerShoppingitemForm();
    void updataSellerShoppingitemForm();
private:
    Ui::SellerShoppingitemForm *ui;
    ShoppingCart m_shoppingInfo;
};

#endif // SELLERSHOPPINGITEMFORM_H
