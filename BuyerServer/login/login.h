#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT
signals:
    void signalUserLogin(QString id, QString pswd);
    void loginSuccess();
public:
    explicit Login(QWidget *parent = 0);
    ~Login();

protected:
    void paintEvent(QPaintEvent *);

    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
private slots:
    void on_pb_login_clicked();

    void on_pushButton_clicked();

private:
    Ui::Login *ui;
    QPoint p;
};

#endif // LOGIN_H
