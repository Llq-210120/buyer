#ifndef SELLERBOOKINFOFORM_H
#define SELLERBOOKINFOFORM_H

#include <QWidget>
#include "bookinfo.h"
namespace Ui {
class SellerBookInfoForm;
}

class SellerBookInfoForm : public QWidget
{
    Q_OBJECT

public:
    explicit SellerBookInfoForm(BookInfo info, QWidget *parent = 0);
    ~SellerBookInfoForm();
    void updateSellerBookInfoForm();
signals:
    void addOneBookInfoSignal(BookInfo info);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pb_confirm_clicked();

private:
    Ui::SellerBookInfoForm *ui;
    BookInfo m_bookInfo;
};

#endif // SELLERBOOKINFOFORM_H
