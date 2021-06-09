/********************************************************************************
** Form generated from reading UI file 'userform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERFORM_H
#define UI_USERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserForm
{
public:
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *le_id;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *le_pawd;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *le_role;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *le_date;

    void setupUi(QWidget *UserForm)
    {
        if (UserForm->objectName().isEmpty())
            UserForm->setObjectName(QStringLiteral("UserForm"));
        UserForm->resize(800, 500);
        UserForm->setStyleSheet(QString::fromUtf8("\n"
"\n"
"*{\n"
"	font: normal 20px \342\200\234\345\276\256\350\275\257\351\233\205\351\273\221\342\200\235;\n"
"}\n"
"\n"
"#pushButton{\n"
"QPushButton\n"
"\n"
"{\n"
"\n"
"color: rgb(255, 255, 255);\n"
"    border:none;\n"
"    padding: 5px;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    padding-top: -15px;\n"
"    padding-bottom: -17px;\n"
"}\n"
"\n"
"\n"
"}\n"
"#UserForm{\n"
"	background-color: #818181;\n"
"}\n"
"\n"
"QLineEdit{\n"
"\n"
"    border: 1px solid gray;\n"
"\n"
"    padding: 1px 2px 1px 2px;\n"
"\n"
"}\n"
"\n"
"QLineEdit:hover{\n"
"\n"
"border:1px solid blue;\n"
"\n"
"background-color: #818181;\n"
"\n"
"}\n"
"\n"
""));
        pushButton = new QPushButton(UserForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(550, 270, 101, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/xiugai.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        tableWidget = new QTableWidget(UserForm);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(30, 10, 420, 471));
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
        layoutWidget = new QWidget(UserForm);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(470, 70, 242, 139));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        le_id = new QLineEdit(layoutWidget);
        le_id->setObjectName(QStringLiteral("le_id"));

        horizontalLayout->addWidget(le_id);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        le_pawd = new QLineEdit(layoutWidget);
        le_pawd->setObjectName(QStringLiteral("le_pawd"));

        horizontalLayout_2->addWidget(le_pawd);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        le_role = new QLineEdit(layoutWidget);
        le_role->setObjectName(QStringLiteral("le_role"));

        horizontalLayout_3->addWidget(le_role);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        le_date = new QLineEdit(layoutWidget);
        le_date->setObjectName(QStringLiteral("le_date"));

        horizontalLayout_4->addWidget(le_date);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(UserForm);

        QMetaObject::connectSlotsByName(UserForm);
    } // setupUi

    void retranslateUi(QWidget *UserForm)
    {
        UserForm->setWindowTitle(QApplication::translate("UserForm", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("UserForm", "\344\277\256\346\224\271", Q_NULLPTR));
        label->setText(QApplication::translate("UserForm", "ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("UserForm", "\345\257\206\347\240\201", Q_NULLPTR));
        label_3->setText(QApplication::translate("UserForm", "\350\247\222\350\211\262", Q_NULLPTR));
        le_role->setText(QString());
        label_4->setText(QApplication::translate("UserForm", "\346\263\250\345\206\214\346\227\245\346\234\237", Q_NULLPTR));
        le_date->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserForm: public Ui_UserForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERFORM_H
