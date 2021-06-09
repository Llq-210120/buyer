#ifndef SELLERLOADFORM_H
#define SELLERLOADFORM_H

#include <QWidget>
#include "bookinfo.h"
namespace Ui {
class SellerLoadForm;
}

class SellerLoadForm : public QWidget
{
    Q_OBJECT

public:
    explicit SellerLoadForm(QWidget *parent = 0);
    ~SellerLoadForm();

    void updataSellerLoadForm(bookInfoList list);
signals:
    void addOneBookSignal(BookInfo info);
    void updataOneBookInSignal(BookInfo info);
private slots:
    void on_pushButton_clicked();
    void addOneBookinfoSlot(BookInfo info);
    void updataOneBookInSlot(BookInfo info);

private:
    Ui::SellerLoadForm *ui;
};

#endif // SELLERLOADFORM_H
