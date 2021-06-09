/********************************************************************************
** Form generated from reading UI file 'sellerbookinfoform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELLERBOOKINFOFORM_H
#define UI_SELLERBOOKINFOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SellerBookInfoForm
{
public:
    QPushButton *pushButton;
    QLabel *lb_author;
    QLabel *lb_type;
    QTextEdit *TE;
    QLabel *label_2;
    QLabel *lb_bookImage;
    QLabel *lb_bookName;
    QLabel *label;
    QLabel *lb_price;
    QPushButton *pb_confirm;
    QPushButton *pushButton_2;
    QLineEdit *le_price;
    QLineEdit *le_author;
    QLineEdit *le_type;
    QLineEdit *le_name;

    void setupUi(QWidget *SellerBookInfoForm)
    {
        if (SellerBookInfoForm->objectName().isEmpty())
            SellerBookInfoForm->setObjectName(QStringLiteral("SellerBookInfoForm"));
        SellerBookInfoForm->resize(800, 600);
        pushButton = new QPushButton(SellerBookInfoForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 31, 28));
        pushButton->setStyleSheet(QLatin1String("*{\n"
"	font-size:20px;\n"
"	background-image: url(:/images/loginpushButton.png);\n"
" 	background-position: center ;\n"
"\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        lb_author = new QLabel(SellerBookInfoForm);
        lb_author->setObjectName(QStringLiteral("lb_author"));
        lb_author->setGeometry(QRect(370, 150, 101, 19));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\345\205\211\347\273\206\345\234\206_CNKI"));
        font.setPointSize(10);
        lb_author->setFont(font);
        lb_type = new QLabel(SellerBookInfoForm);
        lb_type->setObjectName(QStringLiteral("lb_type"));
        lb_type->setGeometry(QRect(320, 80, 121, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(26);
        lb_type->setFont(font1);
        TE = new QTextEdit(SellerBookInfoForm);
        TE->setObjectName(QStringLiteral("TE"));
        TE->setEnabled(true);
        TE->setGeometry(QRect(320, 220, 461, 361));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font2.setPointSize(10);
        TE->setFont(font2);
        label_2 = new QLabel(SellerBookInfoForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 150, 51, 19));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\215\216\345\205\211\347\273\206\351\273\221_CNKI"));
        font3.setPointSize(10);
        label_2->setFont(font3);
        lb_bookImage = new QLabel(SellerBookInfoForm);
        lb_bookImage->setObjectName(QStringLiteral("lb_bookImage"));
        lb_bookImage->setGeometry(QRect(20, 140, 211, 341));
        lb_bookName = new QLabel(SellerBookInfoForm);
        lb_bookName->setObjectName(QStringLiteral("lb_bookName"));
        lb_bookName->setGeometry(QRect(310, 0, 491, 61));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(20);
        lb_bookName->setFont(font4);
        label = new QLabel(SellerBookInfoForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 185, 53, 21));
        lb_price = new QLabel(SellerBookInfoForm);
        lb_price->setObjectName(QStringLiteral("lb_price"));
        lb_price->setGeometry(QRect(370, 185, 121, 21));
        pb_confirm = new QPushButton(SellerBookInfoForm);
        pb_confirm->setObjectName(QStringLiteral("pb_confirm"));
        pb_confirm->setGeometry(QRect(200, 530, 93, 28));
        pb_confirm->setStyleSheet(QLatin1String("*{\n"
"	font-size:20px;\n"
"	background-image: url(:/images/loginpushButton.png);\n"
" 	background-position: center ;\n"
"\n"
"}"));
        pushButton_2 = new QPushButton(SellerBookInfoForm);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 530, 93, 28));
        pushButton_2->setStyleSheet(QLatin1String("*{\n"
"	font-size:20px;\n"
"	background-image: url(:/images/loginpushButton.png);\n"
" 	background-position: center ;\n"
"\n"
"}"));
        le_price = new QLineEdit(SellerBookInfoForm);
        le_price->setObjectName(QStringLiteral("le_price"));
        le_price->setGeometry(QRect(370, 180, 113, 31));
        le_author = new QLineEdit(SellerBookInfoForm);
        le_author->setObjectName(QStringLiteral("le_author"));
        le_author->setGeometry(QRect(370, 150, 113, 21));
        le_type = new QLineEdit(SellerBookInfoForm);
        le_type->setObjectName(QStringLiteral("le_type"));
        le_type->setGeometry(QRect(310, 80, 261, 51));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font5.setPointSize(18);
        le_type->setFont(font5);
        le_name = new QLineEdit(SellerBookInfoForm);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setGeometry(QRect(310, 0, 351, 61));
        le_name->setFont(font4);

        retranslateUi(SellerBookInfoForm);

        QMetaObject::connectSlotsByName(SellerBookInfoForm);
    } // setupUi

    void retranslateUi(QWidget *SellerBookInfoForm)
    {
        SellerBookInfoForm->setWindowTitle(QApplication::translate("SellerBookInfoForm", "Form", Q_NULLPTR));
        pushButton->setText(QString());
        lb_author->setText(QApplication::translate("SellerBookInfoForm", "\344\275\234\350\200\205", Q_NULLPTR));
        lb_type->setText(QApplication::translate("SellerBookInfoForm", "\347\261\273\345\236\213", Q_NULLPTR));
        label_2->setText(QApplication::translate("SellerBookInfoForm", "\344\275\234\350\200\205\357\274\232", Q_NULLPTR));
        lb_bookImage->setText(QApplication::translate("SellerBookInfoForm", "\345\233\276\345\203\217", Q_NULLPTR));
        lb_bookName->setText(QApplication::translate("SellerBookInfoForm", "\345\220\215\345\255\227", Q_NULLPTR));
        label->setText(QApplication::translate("SellerBookInfoForm", "\344\273\267\346\240\274 \357\274\232", Q_NULLPTR));
        lb_price->setText(QApplication::translate("SellerBookInfoForm", "\344\273\267\346\240\274", Q_NULLPTR));
        pb_confirm->setText(QApplication::translate("SellerBookInfoForm", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SellerBookInfoForm", "\351\200\211\346\213\251\345\233\276\347\211\207", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SellerBookInfoForm: public Ui_SellerBookInfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELLERBOOKINFOFORM_H
