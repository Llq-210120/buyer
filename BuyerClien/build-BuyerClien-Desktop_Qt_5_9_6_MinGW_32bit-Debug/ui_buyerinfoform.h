/********************************************************************************
** Form generated from reading UI file 'buyerinfoform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUYERINFOFORM_H
#define UI_BUYERINFOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BuyerInfoForm
{
public:
    QLabel *label_headPic;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_name;
    QLineEdit *le_name;
    QFrame *line_1;
    QLabel *lb_backImage;
    QPushButton *pb_backImage;
    QPushButton *pb_info;
    QPushButton *pb_logout;
    QLabel *label_pawdNew;
    QLineEdit *le_pawdNew;
    QPushButton *pb_pawd;
    QLabel *label_pawdOld;
    QLineEdit *le_pawdOld;
    QLineEdit *le_sex;
    QLabel *label_sex;
    QLineEdit *le_id;
    QLabel *label_id;

    void setupUi(QWidget *BuyerInfoForm)
    {
        if (BuyerInfoForm->objectName().isEmpty())
            BuyerInfoForm->setObjectName(QStringLiteral("BuyerInfoForm"));
        BuyerInfoForm->resize(1000, 600);
        BuyerInfoForm->setStyleSheet(QLatin1String("#BuyerInfoForm{\n"
"	\n"
"	background-color: rgb(255, 245, 247);\n"
"}"));
        label_headPic = new QLabel(BuyerInfoForm);
        label_headPic->setObjectName(QStringLiteral("label_headPic"));
        label_headPic->setGeometry(QRect(200, 30, 128, 128));
        layoutWidget = new QWidget(BuyerInfoForm);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 240, 270, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_name = new QLabel(layoutWidget);
        label_name->setObjectName(QStringLiteral("label_name"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(18);
        label_name->setFont(font);

        horizontalLayout_2->addWidget(label_name);

        le_name = new QLineEdit(layoutWidget);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setEnabled(true);

        horizontalLayout_2->addWidget(le_name);

        line_1 = new QFrame(BuyerInfoForm);
        line_1->setObjectName(QStringLiteral("line_1"));
        line_1->setGeometry(QRect(520, 0, 30, 600));
        line_1->setFrameShape(QFrame::VLine);
        line_1->setFrameShadow(QFrame::Sunken);
        lb_backImage = new QLabel(BuyerInfoForm);
        lb_backImage->setObjectName(QStringLiteral("lb_backImage"));
        lb_backImage->setGeometry(QRect(540, 0, 450, 601));
        pb_backImage = new QPushButton(BuyerInfoForm);
        pb_backImage->setObjectName(QStringLiteral("pb_backImage"));
        pb_backImage->setGeometry(QRect(910, 0, 93, 28));
        pb_backImage->setStyleSheet(QLatin1String("*{\n"
"	color:rgb(255,255,255);\n"
"}"));
        pb_info = new QPushButton(BuyerInfoForm);
        pb_info->setObjectName(QStringLiteral("pb_info"));
        pb_info->setGeometry(QRect(420, 300, 93, 28));
        pb_info->setStyleSheet(QLatin1String("*{\n"
"	font-size:20px;\n"
"	background-image: url(:/images/loginpushButton.png);\n"
" 	background-position: center ;\n"
"\n"
"}"));
        pb_info->setCheckable(true);
        pb_logout = new QPushButton(BuyerInfoForm);
        pb_logout->setObjectName(QStringLiteral("pb_logout"));
        pb_logout->setGeometry(QRect(0, 0, 93, 28));
        pb_logout->setStyleSheet(QLatin1String("*{\n"
"	color:rgb(0,0,0);\n"
"}"));
        label_pawdNew = new QLabel(BuyerInfoForm);
        label_pawdNew->setObjectName(QStringLiteral("label_pawdNew"));
        label_pawdNew->setGeometry(QRect(124, 412, 120, 39));
        label_pawdNew->setFont(font);
        le_pawdNew = new QLineEdit(BuyerInfoForm);
        le_pawdNew->setObjectName(QStringLiteral("le_pawdNew"));
        le_pawdNew->setEnabled(true);
        le_pawdNew->setGeometry(QRect(251, 421, 151, 21));
        pb_pawd = new QPushButton(BuyerInfoForm);
        pb_pawd->setObjectName(QStringLiteral("pb_pawd"));
        pb_pawd->setGeometry(QRect(420, 370, 93, 29));
        pb_pawd->setStyleSheet(QLatin1String("*{\n"
"	font-size:20px;\n"
"	background-image: url(:/images/loginpushButton.png);\n"
" 	background-position: center ;\n"
"\n"
"}"));
        pb_pawd->setCheckable(true);
        label_pawdOld = new QLabel(BuyerInfoForm);
        label_pawdOld->setObjectName(QStringLiteral("label_pawdOld"));
        label_pawdOld->setGeometry(QRect(125, 363, 120, 39));
        label_pawdOld->setFont(font);
        le_pawdOld = new QLineEdit(BuyerInfoForm);
        le_pawdOld->setObjectName(QStringLiteral("le_pawdOld"));
        le_pawdOld->setEnabled(true);
        le_pawdOld->setGeometry(QRect(252, 372, 151, 21));
        le_sex = new QLineEdit(BuyerInfoForm);
        le_sex->setObjectName(QStringLiteral("le_sex"));
        le_sex->setEnabled(true);
        le_sex->setGeometry(QRect(208, 300, 191, 21));
        label_sex = new QLabel(BuyerInfoForm);
        label_sex->setObjectName(QStringLiteral("label_sex"));
        label_sex->setGeometry(QRect(131, 291, 90, 39));
        label_sex->setFont(font);
        le_id = new QLineEdit(BuyerInfoForm);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setEnabled(false);
        le_id->setGeometry(QRect(205, 200, 191, 21));
        label_id = new QLabel(BuyerInfoForm);
        label_id->setObjectName(QStringLiteral("label_id"));
        label_id->setGeometry(QRect(131, 191, 71, 39));
        label_id->setFont(font);

        retranslateUi(BuyerInfoForm);

        QMetaObject::connectSlotsByName(BuyerInfoForm);
    } // setupUi

    void retranslateUi(QWidget *BuyerInfoForm)
    {
        BuyerInfoForm->setWindowTitle(QApplication::translate("BuyerInfoForm", "Form", Q_NULLPTR));
        label_headPic->setText(QApplication::translate("BuyerInfoForm", "TextLabel", Q_NULLPTR));
        label_name->setText(QApplication::translate("BuyerInfoForm", "\345\220\215\345\255\227:", Q_NULLPTR));
        lb_backImage->setText(QApplication::translate("BuyerInfoForm", "TextLabel", Q_NULLPTR));
        pb_backImage->setText(QApplication::translate("BuyerInfoForm", "\346\233\264\346\215\242\345\260\201\351\235\242", Q_NULLPTR));
        pb_info->setText(QApplication::translate("BuyerInfoForm", "\344\277\256\346\224\271\344\277\241\346\201\257", Q_NULLPTR));
        pb_logout->setText(QApplication::translate("BuyerInfoForm", "\346\263\250\351\224\200", Q_NULLPTR));
        label_pawdNew->setText(QApplication::translate("BuyerInfoForm", "\346\226\260\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        pb_pawd->setText(QApplication::translate("BuyerInfoForm", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        label_pawdOld->setText(QApplication::translate("BuyerInfoForm", "\346\227\247\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_sex->setText(QApplication::translate("BuyerInfoForm", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        label_id->setText(QApplication::translate("BuyerInfoForm", "ID   :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BuyerInfoForm: public Ui_BuyerInfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUYERINFOFORM_H
