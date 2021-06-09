#ifndef SELLERINFOFORM_H
#define SELLERINFOFORM_H

#include <QWidget>
#include "storeinfo.h"
namespace Ui {
class SellerInfoForm;
}

class SellerInfoForm : public QWidget
{
    Q_OBJECT

public:
    explicit SellerInfoForm(QWidget *parent = 0);
    ~SellerInfoForm();

     void updateBuyerInfoForm();
signals:
     void creatStoreSignal(StoreInfo info);
     void sellerLogout();

     void signalChangeSellerInfo();
     void signalChangeSellerPawd(QString msg);
private slots:
     void on_pb_create_clicked();

     void on_pb_logout_clicked();

     void on_pb_info_clicked(bool checked);

     void on_pb_pawd_clicked(bool checked);

private:
    Ui::SellerInfoForm *ui;
};

#endif // SELLERINFOFORM_H
