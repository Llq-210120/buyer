#ifndef BUYERINFOFORM_H
#define BUYERINFOFORM_H

#include <QWidget>

namespace Ui {
class BuyerInfoForm;
}

class BuyerInfoForm : public QWidget
{
    Q_OBJECT

public:
    explicit BuyerInfoForm(QWidget *parent = 0);
    ~BuyerInfoForm();

     void updateBuyerInfoForm();

signals:
     void buyerLogout();
     void signalChangeBuyerInfo();
     void signalChangeBuyerPawd(QString msg);
private slots:

     void on_pb_backImage_clicked();

     void on_pb_info_clicked();

     void on_pb_pawd_clicked();

     void on_pb_logout_clicked();

     void on_pb_info_clicked(bool checked);

     void on_pb_pawd_clicked(bool checked);

private:
    Ui::BuyerInfoForm *ui;
};

#endif // BUYERINFOFORM_H
