/********************************************************************************
** Form generated from reading UI file 'sellerloadform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELLERLOADFORM_H
#define UI_SELLERLOADFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SellerLoadForm
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton;

    void setupUi(QWidget *SellerLoadForm)
    {
        if (SellerLoadForm->objectName().isEmpty())
            SellerLoadForm->setObjectName(QStringLiteral("SellerLoadForm"));
        SellerLoadForm->resize(1000, 600);
        tableWidget = new QTableWidget(SellerLoadForm);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 100, 1000, 500));
        tableWidget->setStyleSheet(QString::fromUtf8("/*\n"
"tabelwidget*/\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:#444444;\n"
"border:1px solid #242424;\n"
"alternate-background-color:#525252;/*\344\272\244\351\224\231\351\242\234\350\211\262*/\n"
"gridline-color:#242424;\n"
"}\n"
"\n"
"/*\351\200\211\344\270\255item*/\n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #484848,stop:1 #383838);\n"
"}\n"
"\n"
"/*\n"
"\346\202\254\346\265\256item*/\n"
"QTableWidget::item:hover{\n"
"background:#5B5B5B;\n"
"}\n"
"/*\350\241\250\345\244\264*/\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
"\n"
"\n"
"\n"
"/*\350\241\250\345\217\263\344\276\247\347\232\204\346\273\221\346\235\241*/\n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
"\n"
"/*\346\273\221\345\235\227*/\n"
"QScrollBar::ha"
                        "ndle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
"/*\n"
"\346\273\221\345\235\227\346\202\254\346\265\256\357\274\214\346\214\211\344\270\213*/\n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"/*\n"
"\346\273\221\345\235\227\345\267\262\347\273\217\345\210\222\350\277\207\347\232\204\345\214\272\345\237\237*/\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
"\n"
"/*\n"
"\346\273\221\345\235\227\350\277\230\346\262\241\346\234\211\345\210\222\350\277\207\347\232\204\345\214\272\345\237\237*/\n"
"QScrollBar::add-page:vertical{\n"
"background:5B5B5B;\n"
"}\n"
"\n"
"/*\351\241\265\351\235\242\344\270\213\347\247\273\347\232\204\346\214\211\351\222\256*/\n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"/*\351\241\265\351\235\242\344\270\212\347\247\273\347\232\204\346\214\211\351\222\256*/\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}\n"
""));
        tableWidget->horizontalHeader()->setDefaultSectionSize(300);
        tableWidget->verticalHeader()->setDefaultSectionSize(250);
        pushButton = new QPushButton(SellerLoadForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 60, 93, 28));
        pushButton->setStyleSheet(QLatin1String("*{\n"
"	font-size:20px;\n"
"	background-image: url(:/images/loginpushButton.png);\n"
" 	background-position: center ;\n"
"\n"
"}"));

        retranslateUi(SellerLoadForm);

        QMetaObject::connectSlotsByName(SellerLoadForm);
    } // setupUi

    void retranslateUi(QWidget *SellerLoadForm)
    {
        SellerLoadForm->setWindowTitle(QApplication::translate("SellerLoadForm", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SellerLoadForm", "\346\226\260\345\242\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SellerLoadForm: public Ui_SellerLoadForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELLERLOADFORM_H
