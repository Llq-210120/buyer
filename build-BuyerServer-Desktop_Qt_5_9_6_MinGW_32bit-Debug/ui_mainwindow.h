/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionseller;
    QAction *actionstore;
    QAction *actionbook;
    QAction *actionuser;
    QAction *actionbuyer;
    QWidget *centralWidget;
    QWidget *widget;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 570);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(1000, 650));
        MainWindow->setSizeIncrement(QSize(0, 0));
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setStyleSheet(QLatin1String("QMainWindow{\n"
"	\n"
"	border-radius:15px;\n"
"\n"
"}\n"
"\n"
"QWidget{\n"
"	\n"
"}\n"
"QPushButton{\n"
"    text-align: top right;\n"
"    image-position: left center;\n"
"    color:  #FFFFFF;\n"
"    background-color: transparent;\n"
"    text-decoration: underline;\n"
"    border: none;\n"
"    font-family:'Microsoft YaHei';\n"
"    font-size:14px;\n"
"    max-width: 100px;\n"
"    min-width: 75px;\n"
"    min-height: 25px;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"	border:1px solid blue;\n"
"	image-position: right center;\n"
"	background-color: #888888;\n"
"	\n"
"}\n"
""));
        actionseller = new QAction(MainWindow);
        actionseller->setObjectName(QStringLiteral("actionseller"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionseller->setIcon(icon);
        actionstore = new QAction(MainWindow);
        actionstore->setObjectName(QStringLiteral("actionstore"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../images/store2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionstore->setIcon(icon1);
        actionbook = new QAction(MainWindow);
        actionbook->setObjectName(QStringLiteral("actionbook"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionbook->setIcon(icon2);
        actionuser = new QAction(MainWindow);
        actionuser->setObjectName(QStringLiteral("actionuser"));
        actionuser->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/grade.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionuser->setIcon(icon3);
        actionbuyer = new QAction(MainWindow);
        actionbuyer->setObjectName(QStringLiteral("actionbuyer"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/my.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionbuyer->setIcon(icon4);
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(10);
        actionbuyer->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setEnabled(true);
        widget->setGeometry(QRect(0, 0, 800, 500));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(800, 500));
        widget->setMaximumSize(QSize(800, 500));
        QFont font1;
        font1.setKerning(true);
        widget->setFont(font1);
        widget->setCursor(QCursor(Qt::ArrowCursor));
        widget->setStyleSheet(QLatin1String("#widget{\n"
"\n"
"	background-color: #818181;\n"
"\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy2);
        mainToolBar->setLayoutDirection(Qt::LeftToRight);
        mainToolBar->setMovable(false);
        mainToolBar->setOrientation(Qt::Horizontal);
        mainToolBar->setIconSize(QSize(70, 60));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        mainToolBar->setFloatable(true);
        MainWindow->addToolBar(Qt::BottomToolBarArea, mainToolBar);

        mainToolBar->addAction(actionuser);
        mainToolBar->addAction(actionbuyer);
        mainToolBar->addAction(actionseller);
        mainToolBar->addAction(actionstore);
        mainToolBar->addAction(actionbook);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionseller->setText(QApplication::translate("MainWindow", "seller", Q_NULLPTR));
        actionstore->setText(QApplication::translate("MainWindow", "store", Q_NULLPTR));
        actionbook->setText(QApplication::translate("MainWindow", "book", Q_NULLPTR));
        actionuser->setText(QApplication::translate("MainWindow", "user", Q_NULLPTR));
        actionbuyer->setText(QApplication::translate("MainWindow", "buyer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
