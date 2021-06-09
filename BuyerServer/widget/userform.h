#ifndef USERFORM_H
#define USERFORM_H

#include <QWidget>

namespace Ui {
class UserForm;
}

class UserForm : public QWidget
{
    Q_OBJECT

public:
    explicit UserForm(QWidget *parent = 0);
    ~UserForm();

    enum Search_Condition{
        Search_None = 0,
        Search_ID,
        Search_Role,
        Search_Date
    };

    void updateTableInfos(void);

private slots:
    void on_tableWidget_clicked(const QModelIndex &index);

    void on_pushButton_clicked();

private:
    Ui::UserForm *ui;
};

#endif // USERFORM_H
