/********************************************************************************
** Form generated from reading UI file 'tableitemform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEITEMFORM_H
#define UI_TABLEITEMFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TableItemForm
{
public:
    QLabel *lb_bookImage;
    QLabel *lb_bookName;
    QLabel *lb_bookAuthor;
    QPushButton *pushButton;

    void setupUi(QWidget *TableItemForm)
    {
        if (TableItemForm->objectName().isEmpty())
            TableItemForm->setObjectName(QStringLiteral("TableItemForm"));
        TableItemForm->resize(300, 250);
        TableItemForm->setStyleSheet(QLatin1String("*{\n"
"	color:rgb(255,255,255);\n"
"}"));
        lb_bookImage = new QLabel(TableItemForm);
        lb_bookImage->setObjectName(QStringLiteral("lb_bookImage"));
        lb_bookImage->setGeometry(QRect(30, 40, 111, 131));
        lb_bookName = new QLabel(TableItemForm);
        lb_bookName->setObjectName(QStringLiteral("lb_bookName"));
        lb_bookName->setGeometry(QRect(150, 40, 141, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        lb_bookName->setFont(font);
        lb_bookAuthor = new QLabel(TableItemForm);
        lb_bookAuthor->setObjectName(QStringLiteral("lb_bookAuthor"));
        lb_bookAuthor->setGeometry(QRect(150, 130, 141, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        lb_bookAuthor->setFont(font1);
        pushButton = new QPushButton(TableItemForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 200, 93, 28));
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

        retranslateUi(TableItemForm);

        QMetaObject::connectSlotsByName(TableItemForm);
    } // setupUi

    void retranslateUi(QWidget *TableItemForm)
    {
        TableItemForm->setWindowTitle(QApplication::translate("TableItemForm", "Form", Q_NULLPTR));
        lb_bookImage->setText(QApplication::translate("TableItemForm", "TextLabel", Q_NULLPTR));
        lb_bookName->setText(QApplication::translate("TableItemForm", "bookName", Q_NULLPTR));
        lb_bookAuthor->setText(QApplication::translate("TableItemForm", "bookAuthor", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TableItemForm", "\350\257\246\347\273\206\344\277\241\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TableItemForm: public Ui_TableItemForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEITEMFORM_H
