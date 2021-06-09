#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "login.h"
#include "userform.h"
#include "buyerform.h"
#include "sellerform.h"
#include "bookform.h"
#include "storeform.h"


#include "msgserver.h"
namespace Ui {
class MainWindow;
}

class Login;
class MainWindow : public QMainWindow
{
    Q_OBJECT
public slots:
    void slotUserLogin(QString id, QString pswd);

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionseller_triggered();

    void on_actionbuyer_triggered();

    void on_actionuser_triggered();

    void on_actionstore_triggered();

    void on_actionbook_triggered();


private:
    Ui::MainWindow *ui;
    Login *m_loginForm;
    UserForm *m_userForm;
    BuyerForm *m_buyerForm;
    SellerForm *m_sellerForm;
    BookForm *m_bookForm;
    StoreForm *m_storeForm;

    MsgServer *m_server;
};

#endif // MAINWINDOW_H
