/********************************************************************************
** Form generated from reading UI file 'waitingform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAITINGFORM_H
#define UI_WAITINGFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WaitingForm
{
public:
    QLabel *label;

    void setupUi(QWidget *WaitingForm)
    {
        if (WaitingForm->objectName().isEmpty())
            WaitingForm->setObjectName(QStringLiteral("WaitingForm"));
        WaitingForm->resize(400, 300);
        label = new QLabel(WaitingForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 240, 241, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\220\245\347\217\200"));
        font.setPointSize(26);
        label->setFont(font);

        retranslateUi(WaitingForm);

        QMetaObject::connectSlotsByName(WaitingForm);
    } // setupUi

    void retranslateUi(QWidget *WaitingForm)
    {
        WaitingForm->setWindowTitle(QApplication::translate("WaitingForm", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("WaitingForm", "\346\255\243\345\234\250\345\210\235\345\247\213\345\214\226", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WaitingForm: public Ui_WaitingForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAITINGFORM_H
