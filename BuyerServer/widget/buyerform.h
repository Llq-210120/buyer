#ifndef BUYERFORM_H
#define BUYERFORM_H

#include <QWidget>

namespace Ui {
class BuyerForm;
}

class BuyerForm : public QWidget
{
    Q_OBJECT

public:
    explicit BuyerForm(QWidget *parent = 0);
    ~BuyerForm();

    void updateTableInfos(void);
private slots:
    void on_tableWidget_clicked(const QModelIndex &index);

    void on_pushButton_clicked();

private:
    Ui::BuyerForm *ui;
};

#endif // BUYERFORM_H
