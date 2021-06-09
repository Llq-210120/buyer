#ifndef SHOPPINGCARTFORM_H
#define SHOPPINGCARTFORM_H

#include <QWidget>
#include <QVector>
#include "shoppingcart.h"
namespace Ui {
class ShoppingCartForm;
}

class ShoppingCartForm : public QWidget
{
    Q_OBJECT

public:
    explicit ShoppingCartForm(QWidget *parent = 0);
    ~ShoppingCartForm();
    void updateShoppingCartForm();
    void tabUpdate();

signals:
    void shoppingCartSubSignal(int index);    ///提交信号
    void shoppingCartSaveSignal(int index);   ///保存信号
    void shoppingCartConSignal(int index);    ///确认收货信号
    void shoppingCartDelSignal(int index);    ///删除信号

    void signalsSubShoppingCart(ShoppingCart info); //更新信号
    void signalsShoppingCartDel(ShoppingCart info); //删除信号
    void signalsShoppingCartCon(ShoppingCart info); //确认收货信号

public slots:
    void slotCheckShoppingCart(ShoppingCart info);   //shoppingItem::更新信号对应的槽函数
    void slotCheckShoppingCartDel(ShoppingCart info);//shoppingItem::删除信号对应的槽函数
    void slotCheckShoppingCartDel_1(ShoppingCart info); //check取消对勾


private slots:
    void on_tableWidget_clicked(const QModelIndex &index);

    void on_tableWidget_doubleClicked(const QModelIndex &index);

    void show_menu(QPoint pos);
    void show_menu_2(QPoint pos);
    void on_pb_submit_clicked();

private:
    Ui::ShoppingCartForm *ui;
    shoppingCartList m_checkShoppingList;
    int in;
    int in_0;
    QVector<int> tab_notSub;
    QVector<int> tab_con;
};

#endif // SHOPPINGCARTFORM_H
