/********************************************************************************
** Form generated from reading UI file 'shoppingcartitemform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPPINGCARTITEMFORM_H
#define UI_SHOPPINGCARTITEMFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShoppingCartItemForm
{
public:
    QLabel *lb_bookImage;
    QLabel *lb_bookName;
    QLabel *lb_time;
    QLabel *label_3;
    QLabel *lb_condition;
    QCheckBox *checkBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QLabel *lb_number;
    QPushButton *pushButton_2;
    QLabel *lb_price;
    QLabel *label;

    void setupUi(QWidget *ShoppingCartItemForm)
    {
        if (ShoppingCartItemForm->objectName().isEmpty())
            ShoppingCartItemForm->setObjectName(QStringLiteral("ShoppingCartItemForm"));
        ShoppingCartItemForm->resize(1000, 180);
        lb_bookImage = new QLabel(ShoppingCartItemForm);
        lb_bookImage->setObjectName(QStringLiteral("lb_bookImage"));
        lb_bookImage->setGeometry(QRect(40, 30, 100, 120));
        lb_bookName = new QLabel(ShoppingCartItemForm);
        lb_bookName->setObjectName(QStringLiteral("lb_bookName"));
        lb_bookName->setGeometry(QRect(170, 10, 491, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\345\205\211\346\240\207\351\242\230\345\256\213_CNKI"));
        font.setPointSize(20);
        lb_bookName->setFont(font);
        lb_time = new QLabel(ShoppingCartItemForm);
        lb_time->setObjectName(QStringLiteral("lb_time"));
        lb_time->setGeometry(QRect(440, 150, 281, 21));
        label_3 = new QLabel(ShoppingCartItemForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(830, 70, 91, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font1.setPointSize(12);
        label_3->setFont(font1);
        lb_condition = new QLabel(ShoppingCartItemForm);
        lb_condition->setObjectName(QStringLiteral("lb_condition"));
        lb_condition->setGeometry(QRect(840, 110, 141, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\271\346\255\243\345\247\232\344\275\223"));
        font2.setPointSize(12);
        lb_condition->setFont(font2);
        checkBox = new QCheckBox(ShoppingCartItemForm);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 5, 141, 21));
        layoutWidget = new QWidget(ShoppingCartItemForm);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(600, 50, 120, 89));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial Rounded MT Bold"));
        font3.setPointSize(16);
        label_2->setFont(font3);

        horizontalLayout_2->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
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

        verticalLayout->addWidget(pushButton);

        lb_number = new QLabel(layoutWidget);
        lb_number->setObjectName(QStringLiteral("lb_number"));

        verticalLayout->addWidget(lb_number);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
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

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout_2->addLayout(verticalLayout);

        lb_price = new QLabel(ShoppingCartItemForm);
        lb_price->setObjectName(QStringLiteral("lb_price"));
        lb_price->setGeometry(QRect(268, 101, 61, 16));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        lb_price->setFont(font4);
        label = new QLabel(ShoppingCartItemForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(201, 101, 60, 21));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\226\260\351\255\217"));
        font5.setPointSize(12);
        label->setFont(font5);

        retranslateUi(ShoppingCartItemForm);

        QMetaObject::connectSlotsByName(ShoppingCartItemForm);
    } // setupUi

    void retranslateUi(QWidget *ShoppingCartItemForm)
    {
        ShoppingCartItemForm->setWindowTitle(QApplication::translate("ShoppingCartItemForm", "Form", Q_NULLPTR));
        lb_bookImage->setText(QApplication::translate("ShoppingCartItemForm", "TextLabel", Q_NULLPTR));
        lb_bookName->setText(QApplication::translate("ShoppingCartItemForm", "\344\271\246\345\220\215", Q_NULLPTR));
        lb_time->setText(QApplication::translate("ShoppingCartItemForm", "\346\227\266\351\227\264", Q_NULLPTR));
        label_3->setText(QApplication::translate("ShoppingCartItemForm", "\350\256\242\345\215\225\357\274\232", Q_NULLPTR));
        lb_condition->setText(QApplication::translate("ShoppingCartItemForm", "\347\212\266\346\200\201", Q_NULLPTR));
        checkBox->setText(QString());
        label_2->setText(QApplication::translate("ShoppingCartItemForm", "X", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ShoppingCartItemForm", "+", Q_NULLPTR));
        lb_number->setText(QApplication::translate("ShoppingCartItemForm", "\346\225\260\351\207\217", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ShoppingCartItemForm", "-", Q_NULLPTR));
        lb_price->setText(QApplication::translate("ShoppingCartItemForm", "\345\215\225\344\273\267", Q_NULLPTR));
        label->setText(QApplication::translate("ShoppingCartItemForm", "\345\215\225\344\273\267\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShoppingCartItemForm: public Ui_ShoppingCartItemForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPPINGCARTITEMFORM_H
