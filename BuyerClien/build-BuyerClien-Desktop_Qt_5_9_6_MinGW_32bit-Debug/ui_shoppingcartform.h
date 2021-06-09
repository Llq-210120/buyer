/********************************************************************************
** Form generated from reading UI file 'shoppingcartform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPPINGCARTFORM_H
#define UI_SHOPPINGCARTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShoppingCartForm
{
public:
    QTableWidget *tableWidget;
    QTabWidget *tabWidget;
    QWidget *tab_0;
    QTableWidget *tableWidget_0;
    QPushButton *pb_submit;
    QCheckBox *checkBox;
    QLabel *label;
    QLabel *lb_checkNum;
    QLabel *label_2;
    QLabel *lb_sum;
    QWidget *tab_1;
    QTableWidget *tableWidget_1;
    QLabel *label_3;
    QWidget *tab_2;
    QTableWidget *tableWidget_2;
    QWidget *tab_4;
    QTableWidget *tableWidget_3;

    void setupUi(QWidget *ShoppingCartForm)
    {
        if (ShoppingCartForm->objectName().isEmpty())
            ShoppingCartForm->setObjectName(QStringLiteral("ShoppingCartForm"));
        ShoppingCartForm->resize(1000, 600);
        tableWidget = new QTableWidget(ShoppingCartForm);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 1000, 601));
        tableWidget->horizontalHeader()->setDefaultSectionSize(1000);
        tableWidget->verticalHeader()->setDefaultSectionSize(180);
        tabWidget = new QTabWidget(ShoppingCartForm);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1000, 600));
        tabWidget->setStyleSheet(QString::fromUtf8("*{\n"
"font-family:\"Microsoft Yahei\";\n"
"\n"
"}\n"
"\n"
"QTabWidget::pane{\n"
"\n"
"border-width:1px;\n"
"\n"
"border-style:solid;\n"
"\n"
"border-color:rgb(1, 124, 217);\n"
"\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
"QTabWidget::tab-bar{\n"
"\n"
"    alignment:left;\n"
"\n"
"}\n"
"\n"
"QTabBar::tab{\n"
"\n"
"/*background-color: rgb(1, 124, 217); */ /*\346\265\205\350\223\235\350\211\262*/\n"
"\n"
"background-color: rgb(4, 116, 191);  /*\346\267\261\350\223\235\350\211\262*/\n"
"\n"
"color:white;\n"
"\n"
"min-width:30px;\n"
"\n"
"min-height:10px;\n"
"\n"
"border: 0px;\n"
"\n"
"padding:5px;\n"
"\n"
"}\n"
"\n"
"QTabBar::tab:selected{\n"
"\n"
"border-color: white;\n"
"\n"
"background-color: rgb(238, 159, 0); /*\346\251\230\351\273\204\350\211\262*/\n"
"\n"
"color:white;\n"
"\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"\n"
"margin-top: 5px;\n"
"\n"
"}\n"
"\n"
""));
        tab_0 = new QWidget();
        tab_0->setObjectName(QStringLiteral("tab_0"));
        tableWidget_0 = new QTableWidget(tab_0);
        tableWidget_0->setObjectName(QStringLiteral("tableWidget_0"));
        tableWidget_0->setGeometry(QRect(10, 10, 960, 391));
        tableWidget_0->horizontalHeader()->setDefaultSectionSize(1000);
        tableWidget_0->verticalHeader()->setDefaultSectionSize(180);
        pb_submit = new QPushButton(tab_0);
        pb_submit->setObjectName(QStringLiteral("pb_submit"));
        pb_submit->setGeometry(QRect(810, 450, 121, 61));
        pb_submit->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: gray;\n"
"	background-color:#DCDCDC;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"\n"
"\n"
"color:#FFFFF0;\n"
"background-color: rgb(174, 16, 39);\n"
"\n"
"}"));
        checkBox = new QCheckBox(tab_0);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(50, 410, 91, 41));
        label = new QLabel(tab_0);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(63, 461, 34, 20));
        lb_checkNum = new QLabel(tab_0);
        lb_checkNum->setObjectName(QStringLiteral("lb_checkNum"));
        lb_checkNum->setGeometry(QRect(110, 460, 41, 27));
        lb_checkNum->setStyleSheet(QLatin1String("*{\n"
"	color:rgb(255,0,0);\n"
"	font-size:20px;\n"
"	\n"
"\n"
"\n"
"}"));
        label_2 = new QLabel(tab_0);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(414, 461, 16, 20));
        lb_sum = new QLabel(tab_0);
        lb_sum->setObjectName(QStringLiteral("lb_sum"));
        lb_sum->setGeometry(QRect(450, 450, 161, 51));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft Yahei"));
        lb_sum->setFont(font);
        lb_sum->setStyleSheet(QLatin1String("*{\n"
"	color:rgb(255,0,0);\n"
"	font-size:50px;\n"
"	\n"
"}"));
        tabWidget->addTab(tab_0, QString());
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        tableWidget_1 = new QTableWidget(tab_1);
        tableWidget_1->setObjectName(QStringLiteral("tableWidget_1"));
        tableWidget_1->setGeometry(QRect(10, 10, 960, 371));
        tableWidget_1->setFont(font);
        tableWidget_1->horizontalHeader()->setDefaultSectionSize(1000);
        tableWidget_1->verticalHeader()->setDefaultSectionSize(180);
        label_3 = new QLabel(tab_1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 400, 641, 111));
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("*{\n"
"	font-size: 45px;\n"
"}"));
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableWidget_2 = new QTableWidget(tab_2);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(10, 10, 971, 441));
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(1000);
        tableWidget_2->verticalHeader()->setDefaultSectionSize(180);
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableWidget_3 = new QTableWidget(tab_4);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(10, 10, 960, 391));
        tableWidget_3->horizontalHeader()->setDefaultSectionSize(1000);
        tableWidget_3->verticalHeader()->setDefaultSectionSize(180);
        tabWidget->addTab(tab_4, QString());

        retranslateUi(ShoppingCartForm);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ShoppingCartForm);
    } // setupUi

    void retranslateUi(QWidget *ShoppingCartForm)
    {
        ShoppingCartForm->setWindowTitle(QApplication::translate("ShoppingCartForm", "Form", Q_NULLPTR));
        pb_submit->setText(QApplication::translate("ShoppingCartForm", "\347\273\223\347\256\227", Q_NULLPTR));
        checkBox->setText(QApplication::translate("ShoppingCartForm", "\345\205\250\351\200\211", Q_NULLPTR));
        label->setText(QApplication::translate("ShoppingCartForm", "\345\267\262\351\200\211:", Q_NULLPTR));
        lb_checkNum->setText(QApplication::translate("ShoppingCartForm", "0", Q_NULLPTR));
        label_2->setText(QApplication::translate("ShoppingCartForm", "\357\277\245", Q_NULLPTR));
        lb_sum->setText(QApplication::translate("ShoppingCartForm", "0", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_0), QApplication::translate("ShoppingCartForm", "\346\234\252\346\224\257\344\273\230", Q_NULLPTR));
        label_3->setText(QApplication::translate("ShoppingCartForm", "\345\267\262\344\273\230\346\254\276\357\274\214\350\257\267\347\255\211\345\276\205\345\272\227\351\225\277\345\217\221\350\264\247", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("ShoppingCartForm", "\345\267\262\346\224\257\344\273\230", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ShoppingCartForm", "\345\267\262\345\217\221\350\264\247", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("ShoppingCartForm", "\345\267\262\346\224\266\350\264\247", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShoppingCartForm: public Ui_ShoppingCartForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPPINGCARTFORM_H
