#ifndef SHOPPINGCARTITEMFORM_H
#define SHOPPINGCARTITEMFORM_H

#include <QWidget>
#include "shoppingcart.h"
namespace Ui {
class ShoppingCartItemForm;
}

class ShoppingCartItemForm : public QWidget
{
    Q_OBJECT

public:
    explicit ShoppingCartItemForm(ShoppingCart info,QWidget *parent = 0);
    ~ShoppingCartItemForm();
    void updataShoppingCartItemForm();
signals:
    void signalsCheckShoppingCart(ShoppingCart info);
    void signalsCheckShoppingCartDel(ShoppingCart info);
    void signalsCheckShoppingCartDel_1(ShoppingCart info);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_checkBox_clicked(bool checked);

private:
    Ui::ShoppingCartItemForm *ui;
    ShoppingCart m_shoppingInfo;
};

#endif // SHOPPINGCARTITEMFORM_H
