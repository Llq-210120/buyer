#ifndef SELLERITEMFORM_H
#define SELLERITEMFORM_H

#include <QWidget>
#include "bookinfo.h"
namespace Ui {
class SellerItemForm;
}

class SellerItemForm : public QWidget
{
    Q_OBJECT

public:
    explicit SellerItemForm(BookInfo info,QWidget *parent = 0);
    ~SellerItemForm();
    void updataSellerItemForm();
    void addOneBookInfoSlot(BookInfo info);
signals:
    void addOneBookInSignal(BookInfo info);
private slots:
    void on_pushButton_clicked();

private:
    Ui::SellerItemForm *ui;
    BookInfo m_bookInfo;
};

#endif // SELLERITEMFORM_H
