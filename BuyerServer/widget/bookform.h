#ifndef BOOKFORM_H
#define BOOKFORM_H

#include <QWidget>

namespace Ui {
class BookForm;
}

class BookForm : public QWidget
{
    Q_OBJECT

public:
    explicit BookForm(QWidget *parent = 0);
    ~BookForm();

    void updateTableInfos();


private slots:
    void on_tableWidget_clicked(const QModelIndex &index);

    void on_pushButton_clicked();

    //void on_textEdit_textChanged();

private:
    Ui::BookForm *ui;
};

#endif // BOOKFORM_H
