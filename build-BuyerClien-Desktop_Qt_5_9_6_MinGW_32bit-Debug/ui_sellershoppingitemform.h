/********************************************************************************
** Form generated from reading UI file 'sellershoppingitemform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELLERSHOPPINGITEMFORM_H
#define UI_SELLERSHOPPINGITEMFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SellerShoppingitemForm
{
public:
    QLabel *lb_price;
    QLabel *lb_bookName;
    QLabel *label;
    QLabel *lb_condition;
    QLabel *label_2;
    QLabel *lb_time;
    QLabel *lb_number;
    QLabel *lb_bookImage;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *lb_buyerId;

    void setupUi(QWidget *SellerShoppingitemForm)
    {
        if (SellerShoppingitemForm->objectName().isEmpty())
            SellerShoppingitemForm->setObjectName(QStringLiteral("SellerShoppingitemForm"));
        SellerShoppingitemForm->resize(1000, 250);
        lb_price = new QLabel(SellerShoppingitemForm);
        lb_price->setObjectName(QStringLiteral("lb_price"));
        lb_price->setGeometry(QRect(320, 150, 101, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        lb_price->setFont(font);
        lb_bookName = new QLabel(SellerShoppingitemForm);
        lb_bookName->setObjectName(QStringLiteral("lb_bookName"));
        lb_bookName->setGeometry(QRect(330, 50, 401, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\345\205\211\346\240\207\351\242\230\345\256\213_CNKI"));
        font1.setPointSize(20);
        lb_bookName->setFont(font1);
        label = new QLabel(SellerShoppingitemForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 160, 72, 15));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\226\260\351\255\217"));
        font2.setPointSize(12);
        label->setFont(font2);
        lb_condition = new QLabel(SellerShoppingitemForm);
        lb_condition->setObjectName(QStringLiteral("lb_condition"));
        lb_condition->setGeometry(QRect(850, 150, 141, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\226\271\346\255\243\345\247\232\344\275\223"));
        font3.setPointSize(12);
        lb_condition->setFont(font3);
        label_2 = new QLabel(SellerShoppingitemForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(561, 151, 16, 32));
        QFont font4;
        font4.setFamily(QStringLiteral("Arial Rounded MT Bold"));
        font4.setPointSize(16);
        label_2->setFont(font4);
        lb_time = new QLabel(SellerShoppingitemForm);
        lb_time->setObjectName(QStringLiteral("lb_time"));
        lb_time->setGeometry(QRect(680, 220, 281, 21));
        lb_number = new QLabel(SellerShoppingitemForm);
        lb_number->setObjectName(QStringLiteral("lb_number"));
        lb_number->setGeometry(QRect(580, 160, 71, 16));
        lb_number->setStyleSheet(QLatin1String("	font-weight:800; \n"
"color:rgb(255,0,0);\n"
""));
        lb_bookImage = new QLabel(SellerShoppingitemForm);
        lb_bookImage->setObjectName(QStringLiteral("lb_bookImage"));
        lb_bookImage->setGeometry(QRect(50, 30, 150, 200));
        label_3 = new QLabel(SellerShoppingitemForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(800, 100, 91, 41));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font5.setPointSize(12);
        label_3->setFont(font5);
        label_4 = new QLabel(SellerShoppingitemForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(782, 54, 69, 26));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        QFont font6;
        font6.setFamily(QStringLiteral("Baskerville Old Face"));
        font6.setPointSize(14);
        label_4->setFont(font6);
        lb_buyerId = new QLabel(SellerShoppingitemForm);
        lb_buyerId->setObjectName(QStringLiteral("lb_buyerId"));
        lb_buyerId->setGeometry(QRect(858, 51, 111, 33));
        QFont font7;
        font7.setFamily(QStringLiteral("Bahnschrift Light SemiCondensed"));
        font7.setPointSize(16);
        lb_buyerId->setFont(font7);

        retranslateUi(SellerShoppingitemForm);

        QMetaObject::connectSlotsByName(SellerShoppingitemForm);
    } // setupUi

    void retranslateUi(QWidget *SellerShoppingitemForm)
    {
        SellerShoppingitemForm->setWindowTitle(QApplication::translate("SellerShoppingitemForm", "Form", Q_NULLPTR));
        lb_price->setText(QApplication::translate("SellerShoppingitemForm", "\345\215\225\344\273\267", Q_NULLPTR));
        lb_bookName->setText(QApplication::translate("SellerShoppingitemForm", "\344\271\246\345\220\215", Q_NULLPTR));
        label->setText(QApplication::translate("SellerShoppingitemForm", "\345\215\225\344\273\267\357\274\232", Q_NULLPTR));
        lb_condition->setText(QApplication::translate("SellerShoppingitemForm", "\347\212\266\346\200\201", Q_NULLPTR));
        label_2->setText(QApplication::translate("SellerShoppingitemForm", "X", Q_NULLPTR));
        lb_time->setText(QApplication::translate("SellerShoppingitemForm", "\346\227\266\351\227\264", Q_NULLPTR));
        lb_number->setText(QApplication::translate("SellerShoppingitemForm", "\346\225\260\351\207\217", Q_NULLPTR));
        lb_bookImage->setText(QApplication::translate("SellerShoppingitemForm", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("SellerShoppingitemForm", "\350\256\242\345\215\225\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("SellerShoppingitemForm", "\347\224\250\346\210\267\357\274\232", Q_NULLPTR));
        lb_buyerId->setText(QApplication::translate("SellerShoppingitemForm", "ID", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SellerShoppingitemForm: public Ui_SellerShoppingitemForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELLERSHOPPINGITEMFORM_H
