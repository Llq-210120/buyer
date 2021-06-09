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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionuserInfo;
    QAction *actionbookRecommend;
    QAction *actionshoppingCart;
    QWidget *centralWidget;
    QWidget *widget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 700);
        MainWindow->setMinimumSize(QSize(1000, 700));
        MainWindow->setMaximumSize(QSize(1000, 700));
        actionuserInfo = new QAction(MainWindow);
        actionuserInfo->setObjectName(QStringLiteral("actionuserInfo"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/userInfo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionuserInfo->setIcon(icon);
        actionbookRecommend = new QAction(MainWindow);
        actionbookRecommend->setObjectName(QStringLiteral("actionbookRecommend"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/store2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionbookRecommend->setIcon(icon1);
        actionshoppingCart = new QAction(MainWindow);
        actionshoppingCart->setObjectName(QStringLiteral("actionshoppingCart"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/shopping.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionshoppingCart->setIcon(icon2);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 1000, 600));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy);
        mainToolBar->setMinimumSize(QSize(0, 0));
        mainToolBar->setMaximumSize(QSize(16777215, 16777215));
        mainToolBar->setMovable(false);
        mainToolBar->setIconSize(QSize(200, 50));
        MainWindow->addToolBar(Qt::BottomToolBarArea, mainToolBar);

        mainToolBar->addAction(actionuserInfo);
        mainToolBar->addAction(actionbookRecommend);
        mainToolBar->addAction(actionshoppingCart);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionuserInfo->setText(QApplication::translate("MainWindow", "userInfo", Q_NULLPTR));
        actionbookRecommend->setText(QApplication::translate("MainWindow", "bookRecommend", Q_NULLPTR));
        actionshoppingCart->setText(QApplication::translate("MainWindow", "shoppingCart", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
