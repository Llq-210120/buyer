/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *le_name;
    QLineEdit *le_pswd;
    QLabel *label_4;
    QPushButton *pb_login;
    QPushButton *pb_register;
    QPushButton *pb_close;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(650, 360);
        Login->setStyleSheet(QString::fromUtf8("\n"
"*{\n"
"	font: normal 20px \342\200\234\345\276\256\350\275\257\351\233\205\351\273\221\342\200\235;\n"
"}\n"
""));
        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-11, 0, 711, 360));
        QFont font;
        font.setFamily(QString::fromUtf8("\342\200\234\345\276\256\350\275\257\351\233\205\351\273\221\342\200\235"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("#label{\n"
" background-image: url(:/images/login.jpg); \n"
"\n"
"}\n"
""));
        label->setPixmap(QPixmap(QString::fromUtf8("../../images/login.jpg")));
        label_2 = new QLabel(Login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(339, 119, 43, 24));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("*{\n"
"color: rgb(255,255,255);\n"
"}"));
        label_3 = new QLabel(Login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(339, 159, 43, 24));
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("*{\n"
"color: rgb(255,255,255);\n"
"\n"
"}"));
        le_name = new QLineEdit(Login);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setGeometry(QRect(389, 120, 171, 21));
        le_pswd = new QLineEdit(Login);
        le_pswd->setObjectName(QStringLiteral("le_pswd"));
        le_pswd->setGeometry(QRect(389, 169, 171, 21));
        label_4 = new QLabel(Login);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(310, 10, 371, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\342\200\234\345\276\256\350\275\257\351\233\205\351\273\221\342\200\235"));
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(99);
        label_4->setFont(font1);
        label_4->setStyleSheet(QLatin1String("*{\n"
"\n"
"	background-color:transparent;\n"
"	color: rgb(255,255, 255);\n"
"	font-size : 40px;\n"
"	font-weight:900;\n"
"	\n"
"}\n"
""));
        pb_login = new QPushButton(Login);
        pb_login->setObjectName(QStringLiteral("pb_login"));
        pb_login->setGeometry(QRect(460, 220, 93, 51));
        pb_login->setStyleSheet(QLatin1String("QPushButton{\n"
"\n"
"    \n"
"\n"
"    \n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"\n"
"	border:1px solid blue;\n"
"	background-color: rgb(0,118,143);\n"
"\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/loginbut.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_login->setIcon(icon);
        pb_login->setIconSize(QSize(50, 50));
        pb_register = new QPushButton(Login);
        pb_register->setObjectName(QStringLiteral("pb_register"));
        pb_register->setGeometry(QRect(359, 219, 93, 51));
        pb_register->setStyleSheet(QLatin1String("QPushButton{\n"
"\n"
"    \n"
"\n"
"    \n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"\n"
"	border:1px solid blue;\n"
"	background-color: rgb(0,118,143);\n"
"\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/register.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_register->setIcon(icon1);
        pb_register->setIconSize(QSize(50, 50));
        pb_close = new QPushButton(Login);
        pb_close->setObjectName(QStringLiteral("pb_close"));
        pb_close->setGeometry(QRect(600, 0, 50, 50));
        pb_close->setStyleSheet(QLatin1String("QPushButton{\n"
"\n"
"    \n"
"\n"
"    \n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"\n"
"	border:1px solid blue;\n"
"	background-color: rgb(0,118,143);\n"
"\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/close2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_close->setIcon(icon2);
        pb_close->setIconSize(QSize(50, 50));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Form", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("Login", " ID", Q_NULLPTR));
        label_3->setText(QApplication::translate("Login", "\345\257\206\347\240\201:", Q_NULLPTR));
        le_name->setText(QApplication::translate("Login", "BY-101", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        le_pswd->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        le_pswd->setText(QApplication::translate("Login", "123456", Q_NULLPTR));
        label_4->setText(QApplication::translate("Login", "BOOK   STORE", Q_NULLPTR));
        pb_login->setText(QString());
        pb_register->setText(QString());
        pb_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
