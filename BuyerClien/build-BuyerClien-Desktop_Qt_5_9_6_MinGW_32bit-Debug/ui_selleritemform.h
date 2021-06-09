/********************************************************************************
** Form generated from reading UI file 'selleritemform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELLERITEMFORM_H
#define UI_SELLERITEMFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SellerItemForm
{
public:
    QLabel *lb_bookAuthor;
    QLabel *lb_bookName;
    QLabel *lb_bookImage;
    QPushButton *pushButton;

    void setupUi(QWidget *SellerItemForm)
    {
        if (SellerItemForm->objectName().isEmpty())
            SellerItemForm->setObjectName(QStringLiteral("SellerItemForm"));
        SellerItemForm->resize(300, 250);
        SellerItemForm->setStyleSheet(QLatin1String("*{\n"
"	color:rgb(255,255,255);\n"
"}"));
        lb_bookAuthor = new QLabel(SellerItemForm);
        lb_bookAuthor->setObjectName(QStringLiteral("lb_bookAuthor"));
        lb_bookAuthor->setGeometry(QRect(150, 120, 141, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        lb_bookAuthor->setFont(font);
        lb_bookName = new QLabel(SellerItemForm);
        lb_bookName->setObjectName(QStringLiteral("lb_bookName"));
        lb_bookName->setGeometry(QRect(150, 30, 141, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        lb_bookName->setFont(font1);
        lb_bookImage = new QLabel(SellerItemForm);
        lb_bookImage->setObjectName(QStringLiteral("lb_bookImage"));
        lb_bookImage->setGeometry(QRect(30, 30, 111, 131));
        pushButton = new QPushButton(SellerItemForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 190, 93, 28));
        pushButton->setStyleSheet(QLatin1String("*{	\n"
"	background-color:rgb(0, 0, 0);\n"
"	border-top-left-radius : 15px;\n"
"\n"
"	border-bottom-right-radius : 15px;\n"
"}\n"
"QPushButton{\n"
"\n"
"    \n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"\n"
"	border:1px solid blue;\n"
"	background-color: rgb(0,118,143);\n"
"\n"
"}"));

        retranslateUi(SellerItemForm);

        QMetaObject::connectSlotsByName(SellerItemForm);
    } // setupUi

    void retranslateUi(QWidget *SellerItemForm)
    {
        SellerItemForm->setWindowTitle(QApplication::translate("SellerItemForm", "Form", Q_NULLPTR));
        lb_bookAuthor->setText(QApplication::translate("SellerItemForm", "bookAuthor", Q_NULLPTR));
        lb_bookName->setText(QApplication::translate("SellerItemForm", "bookName", Q_NULLPTR));
        lb_bookImage->setText(QApplication::translate("SellerItemForm", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SellerItemForm", "\344\277\256\346\224\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SellerItemForm: public Ui_SellerItemForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELLERITEMFORM_H
