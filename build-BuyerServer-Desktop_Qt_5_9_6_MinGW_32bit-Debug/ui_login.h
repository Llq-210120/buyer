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
#include <QtWidgets/QHBoxLayout>
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
    QLabel *label_4;
    QPushButton *pb_login;
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *le_name;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *le_pswd;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(650, 400);
        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 650, 400));
        QFont font;
        font.setFamily(QStringLiteral("Bahnschrift SemiLight SemiConde"));
        font.setPointSize(26);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(Login);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(400, 110, 231, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(26);
        label_4->setFont(font1);
        label_4->setStyleSheet(QLatin1String("*{\n"
"	background-color:transparent;\n"
"}\n"
""));
        pb_login = new QPushButton(Login);
        pb_login->setObjectName(QStringLiteral("pb_login"));
        pb_login->setGeometry(QRect(470, 310, 101, 51));
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
"	background-color: #FFFFFF;\n"
"\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/loginbut.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_login->setIcon(icon);
        pb_login->setIconSize(QSize(140, 40));
        pushButton = new QPushButton(Login);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(592, 0, 61, 41));
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
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/close2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(40, 40));
        widget = new QWidget(Login);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(393, 184, 246, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(label_2);

        le_name = new QLineEdit(widget);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setStyleSheet(QString::fromUtf8("\n"
"*{\n"
"	font: normal 20px \342\200\234\345\276\256\350\275\257\351\233\205\351\273\221\342\200\235;\n"
"}"));

        horizontalLayout->addWidget(le_name);

        widget1 = new QWidget(Login);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(382, 228, 259, 29));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font2);

        horizontalLayout_2->addWidget(label_3);

        le_pswd = new QLineEdit(widget1);
        le_pswd->setObjectName(QStringLiteral("le_pswd"));
        le_pswd->setStyleSheet(QString::fromUtf8("\n"
"*{\n"
"	font: normal 20px \342\200\234\345\276\256\350\275\257\351\233\205\351\273\221\342\200\235;\n"
"}"));

        horizontalLayout_2->addWidget(le_pswd);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Form", Q_NULLPTR));
        label->setText(QString());
        label_4->setText(QApplication::translate("Login", "book store", Q_NULLPTR));
        pb_login->setText(QString());
        pushButton->setText(QString());
        label_2->setText(QApplication::translate("Login", "I D:", Q_NULLPTR));
        le_name->setText(QApplication::translate("Login", "AD-101", Q_NULLPTR));
        label_3->setText(QApplication::translate("Login", "\345\257\206\347\240\201:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        le_pswd->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        le_pswd->setText(QApplication::translate("Login", "123456", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
