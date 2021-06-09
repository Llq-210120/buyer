#ifndef TABLEITEMFORM_H
#define TABLEITEMFORM_H

#include <QWidget>
#include "bookinfo.h"
namespace Ui {
class TableItemForm;
}

class TableItemForm : public QWidget
{
    Q_OBJECT

public:
    explicit TableItemForm(BookInfo info,QWidget *parent = 0);
    ~TableItemForm();
    void updataTableItemForm();
signals:

    void detailedInfoSignals(BookInfo info);
private slots:
    void on_pushButton_clicked();

private:
    Ui::TableItemForm *ui;
    BookInfo m_bookInfo;
};

#endif // TABLEITEMFORM_H
