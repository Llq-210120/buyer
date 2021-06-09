#ifndef WAITINGFORM_H
#define WAITINGFORM_H

#include <QWidget>

namespace Ui {
class WaitingForm;
}

class WaitingForm : public QWidget
{
    Q_OBJECT

public:
    explicit WaitingForm(QWidget *parent = 0);
    ~WaitingForm();
protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);

private:
    Ui::WaitingForm *ui;
    QPoint p;
};

#endif // WAITINGFORM_H
