#ifndef SELLERFORM_H
#define SELLERFORM_H

#include <QWidget>

namespace Ui {
class SellerForm;
}

class SellerForm : public QWidget
{
    Q_OBJECT

public:
    explicit SellerForm(QWidget *parent = 0);
    ~SellerForm();

    void updateTableInfos(void);

private slots:
    void on_tableWidget_clicked(const QModelIndex &index);

    void on_pushButton_clicked();

private:
    Ui::SellerForm *ui;
};

#endif // SELLERFORM_H
