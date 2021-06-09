#ifndef BOOKRECOMMENDFORM_H
#define BOOKRECOMMENDFORM_H

#include <QWidget>
#include "bookinfo.h"
#include "shoppingcart.h"
namespace Ui {
class BookRecommendForm;
}

class BookRecommendForm : public QWidget
{
    Q_OBJECT

public:
    explicit BookRecommendForm(QWidget *parent = 0);
    ~BookRecommendForm();
    void updateBookRecommendForm(bookInfoList list);

signals:
    void pb_F5_ClickedSignals();
    void shoppingCartInsert(ShoppingCart info);
    void shoppingCartUpdate(ShoppingCart info);
public slots:
    void detailedInfoSlot(BookInfo info);

    void shoppingCartInsertSlot(ShoppingCart info);
    void shoppingCartUpdateSlot(ShoppingCart info);
private slots:
    void on_pb_all_clicked();

    void on_pb_xs_clicked();

    void on_pb_bc_clicked();

    void on_pb_F5_clicked();

    void on_pb_search_clicked();

private:
    Ui::BookRecommendForm *ui;
};

#endif // BOOKRECOMMENDFORM_H
