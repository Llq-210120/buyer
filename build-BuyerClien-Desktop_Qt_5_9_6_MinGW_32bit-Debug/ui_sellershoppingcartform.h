/********************************************************************************
** Form generated from reading UI file 'sellershoppingcartform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELLERSHOPPINGCARTFORM_H
#define UI_SELLERSHOPPINGCARTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SellerShoppingCartForm
{
public:
    QTableWidget *tableWidget;

    void setupUi(QWidget *SellerShoppingCartForm)
    {
        if (SellerShoppingCartForm->objectName().isEmpty())
            SellerShoppingCartForm->setObjectName(QStringLiteral("SellerShoppingCartForm"));
        SellerShoppingCartForm->resize(1000, 600);
        tableWidget = new QTableWidget(SellerShoppingCartForm);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 70, 1000, 500));
        tableWidget->horizontalHeader()->setDefaultSectionSize(1000);
        tableWidget->verticalHeader()->setDefaultSectionSize(250);

        retranslateUi(SellerShoppingCartForm);

        QMetaObject::connectSlotsByName(SellerShoppingCartForm);
    } // setupUi

    void retranslateUi(QWidget *SellerShoppingCartForm)
    {
        SellerShoppingCartForm->setWindowTitle(QApplication::translate("SellerShoppingCartForm", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SellerShoppingCartForm: public Ui_SellerShoppingCartForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELLERSHOPPINGCARTFORM_H
