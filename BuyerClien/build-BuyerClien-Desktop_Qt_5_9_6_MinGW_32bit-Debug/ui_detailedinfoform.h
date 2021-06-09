/********************************************************************************
** Form generated from reading UI file 'detailedinfoform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILEDINFOFORM_H
#define UI_DETAILEDINFOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DetailedInfoForm
{
public:
    QPushButton *pushButton;
    QLabel *lb_bookImage;
    QLabel *lb_bookName;
    QLabel *lb_price;
    QLabel *lb_author;
    QLabel *lb_type;
    QTextEdit *TE;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pb_shoppingcart;
    QSpinBox *spinBox;

    void setupUi(QWidget *DetailedInfoForm)
    {
        if (DetailedInfoForm->objectName().isEmpty())
            DetailedInfoForm->setObjectName(QStringLiteral("DetailedInfoForm"));
        DetailedInfoForm->resize(800, 600);
        DetailedInfoForm->setStyleSheet(QLatin1String("\n"
"#DetailedInfoForm{\n"
"	 background-color: #84AF9B;\n"
"	\n"
"	\n"
"}\n"
""));
        pushButton = new QPushButton(DetailedInfoForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 41, 31));
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"\n"
"	border:1px solid blue;\n"
"	background-color: #FFFFFF;\n"
"\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        lb_bookImage = new QLabel(DetailedInfoForm);
        lb_bookImage->setObjectName(QStringLiteral("lb_bookImage"));
        lb_bookImage->setGeometry(QRect(20, 140, 211, 341));
        lb_bookName = new QLabel(DetailedInfoForm);
        lb_bookName->setObjectName(QStringLiteral("lb_bookName"));
        lb_bookName->setEnabled(false);
        lb_bookName->setGeometry(QRect(311, 51, 441, 66));
        QFont font;
        font.setBold(true);
        font.setWeight(99);
        lb_bookName->setFont(font);
        lb_bookName->setStyleSheet(QLatin1String("*{\n"
"	color : rgb(32,36,46);\n"
"	font-size: 50px;\n"
"	font-weight:800; \n"
"}"));
        lb_price = new QLabel(DetailedInfoForm);
        lb_price->setObjectName(QStringLiteral("lb_price"));
        lb_price->setEnabled(false);
        lb_price->setGeometry(QRect(381, 154, 291, 25));
        lb_price->setStyleSheet(QLatin1String("*{\n"
"	color : rgb(197,31,31);\n"
"	font-size: 25px;\n"
"	font-weight:800; \n"
"}"));
        lb_author = new QLabel(DetailedInfoForm);
        lb_author->setObjectName(QStringLiteral("lb_author"));
        lb_author->setEnabled(false);
        lb_author->setGeometry(QRect(371, 126, 271, 19));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\345\205\211\347\273\206\345\234\206_CNKI"));
        font1.setPointSize(10);
        lb_author->setFont(font1);
        lb_type = new QLabel(DetailedInfoForm);
        lb_type->setObjectName(QStringLiteral("lb_type"));
        lb_type->setEnabled(false);
        lb_type->setGeometry(QRect(90, 60, 121, 41));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(87);
        lb_type->setFont(font2);
        lb_type->setStyleSheet(QLatin1String("*{\n"
"	 \n"
"	color : rgb(31,36,46);;\n"
"	font-size: 40px;\n"
"	font-weight:700; \n"
"}"));
        TE = new QTextEdit(DetailedInfoForm);
        TE->setObjectName(QStringLiteral("TE"));
        TE->setEnabled(false);
        TE->setGeometry(QRect(320, 220, 461, 361));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font3.setPointSize(10);
        TE->setFont(font3);
        TE->setStyleSheet(QLatin1String("#TE{\n"
"\n"
"\n"
"\n"
"}"));
        label = new QLabel(DetailedInfoForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(313, 154, 61, 22));
        QFont font4;
        font4.setFamily(QStringLiteral("Agency FB"));
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        label->setFont(font4);
        label_2 = new QLabel(DetailedInfoForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(313, 126, 51, 19));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\215\216\345\205\211\347\273\206\351\273\221_CNKI"));
        font5.setPointSize(10);
        label_2->setFont(font5);
        pb_shoppingcart = new QPushButton(DetailedInfoForm);
        pb_shoppingcart->setObjectName(QStringLiteral("pb_shoppingcart"));
        pb_shoppingcart->setGeometry(QRect(150, 530, 93, 28));
        pb_shoppingcart->setStyleSheet(QLatin1String("QPushButton{\n"
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
        spinBox = new QSpinBox(DetailedInfoForm);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(60, 530, 46, 22));
        spinBox->setValue(1);

        retranslateUi(DetailedInfoForm);

        QMetaObject::connectSlotsByName(DetailedInfoForm);
    } // setupUi

    void retranslateUi(QWidget *DetailedInfoForm)
    {
        DetailedInfoForm->setWindowTitle(QApplication::translate("DetailedInfoForm", "Form", Q_NULLPTR));
        pushButton->setText(QString());
        lb_bookImage->setText(QApplication::translate("DetailedInfoForm", "\345\233\276\345\203\217", Q_NULLPTR));
        lb_bookName->setText(QApplication::translate("DetailedInfoForm", "\345\220\215\345\255\227", Q_NULLPTR));
        lb_price->setText(QApplication::translate("DetailedInfoForm", "\344\273\267\346\240\274", Q_NULLPTR));
        lb_author->setText(QApplication::translate("DetailedInfoForm", "\344\275\234\350\200\205", Q_NULLPTR));
        lb_type->setText(QApplication::translate("DetailedInfoForm", "\347\261\273\345\236\213", Q_NULLPTR));
        label->setText(QApplication::translate("DetailedInfoForm", "\344\273\267\346\240\274 \357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("DetailedInfoForm", "\344\275\234\350\200\205\357\274\232", Q_NULLPTR));
        pb_shoppingcart->setText(QApplication::translate("DetailedInfoForm", "\345\212\240\345\205\245\350\264\255\347\211\251\350\275\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DetailedInfoForm: public Ui_DetailedInfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILEDINFOFORM_H
