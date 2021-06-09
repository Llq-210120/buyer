#ifndef SELLERADDBOOKFORM_H
#define SELLERADDBOOKFORM_H

#include <QWidget>
#include "bookinfo.h"
namespace Ui {
class SellerAddBookForm;
}

class SellerAddBookForm : public QWidget
{
    Q_OBJECT

public:
    explicit SellerAddBookForm(QWidget *parent = 0);
    ~SellerAddBookForm();
signals:
    void addOneBookInfoSignal(BookInfo info);

private slots:
    void on_pushButton_clicked();

    void on_pb_choseImage_clicked();

    void on_pb_confirm_clicked();

private:
    Ui::SellerAddBookForm *ui;
    BookInfo m_bookInfo;
};

#endif // SELLERADDBOOKFORM_H
