#ifndef STOREFORM_H
#define STOREFORM_H

#include <QWidget>

namespace Ui {
class StoreForm;
}

class StoreForm : public QWidget
{
    Q_OBJECT

public:
    explicit StoreForm(QWidget *parent = 0);
    ~StoreForm();
    void updateTableInfos();

private slots:
    void on_tableWidget_clicked(const QModelIndex &index);

    void on_pushButton_clicked();

private:
    Ui::StoreForm *ui;
};

#endif // STOREFORM_H
