/********************************************************************************
** Form generated from reading UI file 'registerform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERFORM_H
#define UI_REGISTERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterForm
{
public:
    QPushButton *pushButton;
    QPushButton *pb_close;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QRadioButton *rb_buyer;
    QRadioButton *rb_seller;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *le_id;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *le_name;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *le_sex;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *le_pawd;

    void setupUi(QWidget *RegisterForm)
    {
        if (RegisterForm->objectName().isEmpty())
            RegisterForm->setObjectName(QStringLiteral("RegisterForm"));
        RegisterForm->resize(573, 362);
        RegisterForm->setStyleSheet(QString::fromUtf8("\n"
"*{\n"
"	font: normal 20px \342\200\234\345\276\256\350\275\257\351\233\205\351\273\221\342\200\235;\n"
"	color:rgb(25, 19, 158);\n"
"	font-weight:800;\n"
"}\n"
"QWidget{\n"
"    background-color : rgb(200,200,169);\n"
"\n"
"}\n"
"QLineEdit{\n"
"	background-color:rgb(255,255,255);\n"
"}"));
        pushButton = new QPushButton(RegisterForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 290, 93, 28));
        pb_close = new QPushButton(RegisterForm);
        pb_close->setObjectName(QStringLiteral("pb_close"));
        pb_close->setGeometry(QRect(542, 0, 31, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_close->setIcon(icon);
        layoutWidget = new QWidget(RegisterForm);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 50, 370, 56));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        rb_buyer = new QRadioButton(layoutWidget);
        rb_buyer->setObjectName(QStringLiteral("rb_buyer"));

        horizontalLayout_5->addWidget(rb_buyer);

        rb_seller = new QRadioButton(layoutWidget);
        rb_seller->setObjectName(QStringLiteral("rb_seller"));

        horizontalLayout_5->addWidget(rb_seller);

        layoutWidget1 = new QWidget(RegisterForm);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 130, 497, 65));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        le_id = new QLineEdit(layoutWidget1);
        le_id->setObjectName(QStringLiteral("le_id"));

        horizontalLayout_4->addWidget(le_id);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        le_name = new QLineEdit(layoutWidget1);
        le_name->setObjectName(QStringLiteral("le_name"));

        horizontalLayout_3->addWidget(le_name);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        layoutWidget2 = new QWidget(RegisterForm);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 200, 517, 65));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        le_sex = new QLineEdit(layoutWidget2);
        le_sex->setObjectName(QStringLiteral("le_sex"));

        horizontalLayout_2->addWidget(le_sex);


        horizontalLayout_7->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        le_pawd = new QLineEdit(layoutWidget2);
        le_pawd->setObjectName(QStringLiteral("le_pawd"));

        horizontalLayout->addWidget(le_pawd);


        horizontalLayout_7->addLayout(horizontalLayout);


        retranslateUi(RegisterForm);

        QMetaObject::connectSlotsByName(RegisterForm);
    } // setupUi

    void retranslateUi(QWidget *RegisterForm)
    {
        RegisterForm->setWindowTitle(QApplication::translate("RegisterForm", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("RegisterForm", "\347\241\256\345\256\232", Q_NULLPTR));
        pb_close->setText(QString());
        label_5->setText(QApplication::translate("RegisterForm", "\350\247\222\350\211\262", Q_NULLPTR));
        rb_buyer->setText(QApplication::translate("RegisterForm", "\351\241\276\345\256\242", Q_NULLPTR));
        rb_seller->setText(QApplication::translate("RegisterForm", "\345\272\227\351\225\277", Q_NULLPTR));
        label_3->setText(QApplication::translate("RegisterForm", "ID", Q_NULLPTR));
        le_id->setText(QString());
        label->setText(QApplication::translate("RegisterForm", "\345\220\215\345\255\227", Q_NULLPTR));
        label_2->setText(QApplication::translate("RegisterForm", "\346\200\247\345\210\253", Q_NULLPTR));
        label_4->setText(QApplication::translate("RegisterForm", "\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RegisterForm: public Ui_RegisterForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERFORM_H
