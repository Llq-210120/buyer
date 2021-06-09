/********************************************************************************
** Form generated from reading UI file 'selleraddbookform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELLERADDBOOKFORM_H
#define UI_SELLERADDBOOKFORM_H

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

class Ui_SellerAddBookForm
{
public:
    QLabel *lb_author;
    QLabel *lb_bookImage;
    QPushButton *pb_confirm;
    QLabel *label;
    QLabel *label_2;
    QLabel *lb_bookName;
    QTextEdit *TE;
    QLabel *lb_type;
    QLabel *lb_price;
    QPushButton *pushButton;
    QPushButton *pb_choseImage;
    QLineEdit *le_name;
    QLineEdit *le_type;
    QLineEdit *le_price;
    QLineEdit *le_author;
    QLineEdit *le_id;

    void setupUi(QWidget *SellerAddBookForm)
    {
        if (SellerAddBookForm->objectName().isEmpty())
            SellerAddBookForm->setObjectName(QStringLiteral("SellerAddBookForm"));
        SellerAddBookForm->resize(800, 600);
        lb_author = new QLabel(SellerAddBookForm);
        lb_author->setObjectName(QStringLiteral("lb_author"));
        lb_author->setGeometry(QRect(360, 170, 131, 19));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\345\205\211\347\273\206\345\234\206_CNKI"));
        font.setPointSize(10);
        lb_author->setFont(font);
        lb_bookImage = new QLabel(SellerAddBookForm);
        lb_bookImage->setObjectName(QStringLiteral("lb_bookImage"));
        lb_bookImage->setGeometry(QRect(10, 160, 211, 341));
        pb_confirm = new QPushButton(SellerAddBookForm);
        pb_confirm->setObjectName(QStringLiteral("pb_confirm"));
        pb_confirm->setGeometry(QRect(190, 550, 93, 28));
        pb_confirm->setStyleSheet(QLatin1String("*{\n"
"	font-size:20px;\n"
"	background-image: url(:/images/loginpushButton.png);\n"
" 	background-position: center ;\n"
"\n"
"}"));
        label = new QLabel(SellerAddBookForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 205, 53, 21));
        label_2 = new QLabel(SellerAddBookForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(300, 170, 51, 19));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\345\205\211\347\273\206\351\273\221_CNKI"));
        font1.setPointSize(10);
        label_2->setFont(font1);
        lb_bookName = new QLabel(SellerAddBookForm);
        lb_bookName->setObjectName(QStringLiteral("lb_bookName"));
        lb_bookName->setGeometry(QRect(300, 20, 491, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(20);
        lb_bookName->setFont(font2);
        TE = new QTextEdit(SellerAddBookForm);
        TE->setObjectName(QStringLiteral("TE"));
        TE->setEnabled(true);
        TE->setGeometry(QRect(310, 240, 461, 361));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font3.setPointSize(10);
        TE->setFont(font3);
        lb_type = new QLabel(SellerAddBookForm);
        lb_type->setObjectName(QStringLiteral("lb_type"));
        lb_type->setGeometry(QRect(290, 100, 121, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font4.setPointSize(26);
        lb_type->setFont(font4);
        lb_price = new QLabel(SellerAddBookForm);
        lb_price->setObjectName(QStringLiteral("lb_price"));
        lb_price->setGeometry(QRect(360, 205, 351, 21));
        pushButton = new QPushButton(SellerAddBookForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 40, 93, 28));
        pushButton->setStyleSheet(QLatin1String("*{\n"
"	font-size:20px;\n"
"	background-image: url(:/images/loginpushButton.png);\n"
" 	background-position: center ;\n"
"\n"
"}"));
        pb_choseImage = new QPushButton(SellerAddBookForm);
        pb_choseImage->setObjectName(QStringLiteral("pb_choseImage"));
        pb_choseImage->setGeometry(QRect(20, 550, 93, 28));
        pb_choseImage->setStyleSheet(QLatin1String("*{\n"
"	font-size:20px;\n"
"	background-image: url(:/images/loginpushButton.png);\n"
" 	background-position: center ;\n"
"\n"
"}"));
        le_name = new QLineEdit(SellerAddBookForm);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setGeometry(QRect(290, 20, 351, 61));
        le_name->setFont(font2);
        le_type = new QLineEdit(SellerAddBookForm);
        le_type->setObjectName(QStringLiteral("le_type"));
        le_type->setGeometry(QRect(290, 100, 261, 51));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font5.setPointSize(18);
        le_type->setFont(font5);
        le_price = new QLineEdit(SellerAddBookForm);
        le_price->setObjectName(QStringLiteral("le_price"));
        le_price->setGeometry(QRect(350, 200, 113, 31));
        le_author = new QLineEdit(SellerAddBookForm);
        le_author->setObjectName(QStringLiteral("le_author"));
        le_author->setGeometry(QRect(350, 170, 113, 21));
        le_id = new QLineEdit(SellerAddBookForm);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(600, 100, 181, 51));

        retranslateUi(SellerAddBookForm);

        QMetaObject::connectSlotsByName(SellerAddBookForm);
    } // setupUi

    void retranslateUi(QWidget *SellerAddBookForm)
    {
        SellerAddBookForm->setWindowTitle(QApplication::translate("SellerAddBookForm", "Form", Q_NULLPTR));
        lb_author->setText(QApplication::translate("SellerAddBookForm", "\344\275\234\350\200\205", Q_NULLPTR));
        lb_bookImage->setText(QApplication::translate("SellerAddBookForm", "\345\233\276\345\203\217", Q_NULLPTR));
        pb_confirm->setText(QApplication::translate("SellerAddBookForm", "\347\241\256\345\256\232", Q_NULLPTR));
        label->setText(QApplication::translate("SellerAddBookForm", "\344\273\267\346\240\274 \357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("SellerAddBookForm", "\344\275\234\350\200\205\357\274\232", Q_NULLPTR));
        lb_bookName->setText(QApplication::translate("SellerAddBookForm", "\345\220\215\345\255\227", Q_NULLPTR));
        lb_type->setText(QApplication::translate("SellerAddBookForm", "\347\261\273\345\236\213", Q_NULLPTR));
        lb_price->setText(QApplication::translate("SellerAddBookForm", "\344\273\267\346\240\274", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SellerAddBookForm", "\345\205\263\351\227\255", Q_NULLPTR));
        pb_choseImage->setText(QApplication::translate("SellerAddBookForm", "\351\200\211\346\213\251\345\233\276\347\211\207", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SellerAddBookForm: public Ui_SellerAddBookForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELLERADDBOOKFORM_H
