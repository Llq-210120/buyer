#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "login.h"
#include "registerform.h"
#include "buyerinfoform.h"
#include "sellerinfoform.h"
#include "bookrecommendform.h"
#include "detailedinfoform.h"
#include "shoppingcartform.h"
#include "sellerloadform.h"
#include "sellershoppingcartform.h"

#include "waitingform.h"
#include "msgsocket.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:



public slots:
    void slotUserLogin(QString id, QString pswd);
    void slotUserLoginResult(bool result);

    void slotChangeBuyerPawd(QString msg);
    void slotChangeSellerPawd(QString msg);
    void shoppingCartSubSlot(int index);
    void shoppingCartSaveSlot(int index);
    void shoppingCartConSlot(int index);
    void shoppingCartDelSlot(int index);

    void shoppingCartInsertSlot(ShoppingCart info);
    void shoppingCartUpdateSlot(ShoppingCart info);

    void slotSubShoppingCart(ShoppingCart info);
    void slotShoppingCartDel(ShoppingCart info);
    void slotShoppingCartCon(ShoppingCart info);

    void shoppingCartDeliverSlot(int index);
    void shoppingCartGoodsSlot(int index);
    void slotUserRegister(QString data);
    void addOneBookSlot(BookInfo info);
    void updataOneBookInSlot(BookInfo info);
    void creatStoreSlot(StoreInfo info);


private slots:
    void on_actionuserInfo_triggered();

    void on_actionbookRecommend_triggered();

    void on_actionshoppingCart_triggered();

    void pb_F5_ClickedSlot();

private:
    Ui::MainWindow *ui;
    Login *m_loginForm;
    RegisterForm *m_register;
    BuyerInfoForm *m_buyerInfoForm;
    SellerInfoForm *m_sellerInfoForm;
    BookRecommendForm *m_bookRecommendForm;
    DetailedInfoForm *m_detailedInfoForm;
    ShoppingCartForm *m_shoppingCartForm;
    SellerLoadForm *m_sellerLoadForm;
    SellerShoppingCartForm *m_sellerShoppingCartForm;

    MsgSocket * m_msgSocket;
    WaitingForm *m_waitForm;

    QTimer timer;
    QTimer timer_wait;

    QTimer timer_login;
    QTimer timer_addBook;
};

#endif // MAINWINDOW_H
