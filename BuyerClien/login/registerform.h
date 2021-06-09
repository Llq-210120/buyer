#ifndef REGISTERFORM_H
#define REGISTERFORM_H

#include <QWidget>

namespace Ui {
class RegisterForm;
}

class RegisterForm : public QWidget
{
    Q_OBJECT

public:
    explicit RegisterForm(QWidget *parent = 0);
    ~RegisterForm();
    QString getData();
signals:
    void GatheringInfoSignal();
protected:


    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
private slots:
    void on_pushButton_clicked();

    void on_rb_buyer_clicked();

    void on_rb_seller_clicked();

    void on_pb_close_clicked();

private:
    Ui::RegisterForm *ui;
    QString data;
    QPoint p;
};

#endif // REGISTERFORM_H
