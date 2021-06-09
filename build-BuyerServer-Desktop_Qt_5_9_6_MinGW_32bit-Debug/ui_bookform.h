/********************************************************************************
** Form generated from reading UI file 'bookform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKFORM_H
#define UI_BOOKFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookForm
{
public:
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QLineEdit *le_bookId;
    QLineEdit *le_bookName;
    QLineEdit *le_bookSotreId;
    QLineEdit *le_author;
    QLineEdit *le_type;
    QLineEdit *le_price;
    QTextEdit *textEdit;

    void setupUi(QWidget *BookForm)
    {
        if (BookForm->objectName().isEmpty())
            BookForm->setObjectName(QStringLiteral("BookForm"));
        BookForm->resize(800, 500);
        BookForm->setStyleSheet(QString::fromUtf8("\n"
"\n"
"*{\n"
"	font: normal 20px \342\200\234\345\276\256\350\275\257\351\233\205\351\273\221\342\200\235;\n"
"}\n"
"\n"
"#pushButton{\n"
"\n"
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
"#BookForm{\n"
"	background-color: #818181;\n"
"}\n"
"\n"
"\n"
"QLineEdit{\n"
"\n"
"    border: 1px solid gray;\n"
"\n"
"    padding: 1px 2px 1px 2px;\n"
"	\n"
"	border-top-left-radius : 15px;\n"
"\n"
"	border-bottom-right-radius : 15px;\n"
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
"\n"
"#textEdit{\n"
"	\n"
"    border: 1px solid gray;\n"
"	\n"
"    padding: 1px 2px 1px 2px;\n"
"	\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        pushButton = new QPushButton(BookForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(620, 290, 100, 30));
        pushButton->setMinimumSize(QSize(0, 0));
        pushButton->setMaximumSize(QSize(16777215, 16777215));
        pushButton->setLayoutDirection(Qt::RightToLeft);
        pushButton->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/xiugai.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        tableWidget = new QTableWidget(BookForm);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 550, 350));
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
        le_bookId = new QLineEdit(BookForm);
        le_bookId->setObjectName(QStringLiteral("le_bookId"));
        le_bookId->setGeometry(QRect(590, 20, 161, 21));
        le_bookName = new QLineEdit(BookForm);
        le_bookName->setObjectName(QStringLiteral("le_bookName"));
        le_bookName->setGeometry(QRect(590, 60, 161, 21));
        le_bookSotreId = new QLineEdit(BookForm);
        le_bookSotreId->setObjectName(QStringLiteral("le_bookSotreId"));
        le_bookSotreId->setGeometry(QRect(590, 100, 161, 21));
        le_author = new QLineEdit(BookForm);
        le_author->setObjectName(QStringLiteral("le_author"));
        le_author->setGeometry(QRect(590, 140, 161, 21));
        le_type = new QLineEdit(BookForm);
        le_type->setObjectName(QStringLiteral("le_type"));
        le_type->setGeometry(QRect(590, 180, 161, 21));
        le_price = new QLineEdit(BookForm);
        le_price->setObjectName(QStringLiteral("le_price"));
        le_price->setGeometry(QRect(590, 220, 161, 21));
        textEdit = new QTextEdit(BookForm);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(true);
        textEdit->setGeometry(QRect(40, 360, 691, 131));

        retranslateUi(BookForm);

        QMetaObject::connectSlotsByName(BookForm);
    } // setupUi

    void retranslateUi(QWidget *BookForm)
    {
        BookForm->setWindowTitle(QApplication::translate("BookForm", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("BookForm", "\344\277\256\346\224\271", Q_NULLPTR));
        le_bookId->setText(QString());
        le_author->setText(QString());
        le_type->setText(QString());
        le_price->setText(QString());
        textEdit->setHtml(QApplication::translate("BookForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\342\200\234\345\276\256\350\275\257\351\233\205\351\273\221\342\200\235'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BookForm: public Ui_BookForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKFORM_H
