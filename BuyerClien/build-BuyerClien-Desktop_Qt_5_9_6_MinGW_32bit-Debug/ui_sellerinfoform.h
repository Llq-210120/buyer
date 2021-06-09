/********************************************************************************
** Form generated from reading UI file 'sellerinfoform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELLERINFOFORM_H
#define UI_SELLERINFOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SellerInfoForm
{
public:
    QLabel *label_headPic;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_name;
    QLineEdit *le_name;
    QPushButton *pb_create;
    QPushButton *pb_logout;
    QPushButton *pb_info;
    QPushButton *pb_pawd;
    QLineEdit *le_pawdOld;
    QLineEdit *le_pawdNew;
    QLabel *label_pawdNew;
    QLabel *label_pawdOld;
    QSlider *horizontalSlider;
    QLabel *label_id;
    QLineEdit *le_id;
    QLabel *label_sex;
    QLineEdit *le_sex;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_storeId;
    QLineEdit *le_id_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_storeName;
    QLineEdit *le_storeName;

    void setupUi(QWidget *SellerInfoForm)
    {
        if (SellerInfoForm->objectName().isEmpty())
            SellerInfoForm->setObjectName(QStringLiteral("SellerInfoForm"));
        SellerInfoForm->resize(1000, 600);
        label_headPic = new QLabel(SellerInfoForm);
        label_headPic->setObjectName(QStringLiteral("label_headPic"));
        label_headPic->setGeometry(QRect(100, 80, 128, 128));
        layoutWidget_3 = new QWidget(SellerInfoForm);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(330, 130, 270, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_name = new QLabel(layoutWidget_3);
        label_name->setObjectName(QStringLiteral("label_name"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(18);
        label_name->setFont(font);

        horizontalLayout_2->addWidget(label_name);

        le_name = new QLineEdit(layoutWidget_3);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setEnabled(false);

        horizontalLayout_2->addWidget(le_name);

        pb_create = new QPushButton(SellerInfoForm);
        pb_create->setObjectName(QStringLiteral("pb_create"));
        pb_create->setGeometry(QRect(670, 440, 93, 28));
        pb_create->setStyleSheet(QLatin1String("*{\n"
"	font-size:20px;\n"
"	background-image: url(:/images/loginpushButton.png);\n"
" 	background-position: center ;\n"
"\n"
"}"));
        pb_logout = new QPushButton(SellerInfoForm);
        pb_logout->setObjectName(QStringLiteral("pb_logout"));
        pb_logout->setGeometry(QRect(0, 0, 93, 28));
        pb_logout->setStyleSheet(QLatin1String("*{\n"
"	font-size:20px;\n"
"	background-image: url(:/images/loginpushButton.png);\n"
" 	background-position: center ;\n"
"\n"
"}"));
        pb_info = new QPushButton(SellerInfoForm);
        pb_info->setObjectName(QStringLiteral("pb_info"));
        pb_info->setGeometry(QRect(670, 180, 93, 28));
        pb_info->setStyleSheet(QLatin1String("*{\n"
"	font-size:20px;\n"
"	background-image: url(:/images/loginpushButton.png);\n"
" 	background-position: center ;\n"
"\n"
"}"));
        pb_info->setCheckable(true);
        pb_pawd = new QPushButton(SellerInfoForm);
        pb_pawd->setObjectName(QStringLiteral("pb_pawd"));
        pb_pawd->setGeometry(QRect(670, 270, 93, 29));
        pb_pawd->setStyleSheet(QLatin1String("*{\n"
"	font-size:20px;\n"
"	background-image: url(:/images/loginpushButton.png);\n"
" 	background-position: center ;\n"
"\n"
"}"));
        pb_pawd->setCheckable(true);
        le_pawdOld = new QLineEdit(SellerInfoForm);
        le_pawdOld->setObjectName(QStringLiteral("le_pawdOld"));
        le_pawdOld->setEnabled(true);
        le_pawdOld->setGeometry(QRect(447, 269, 151, 21));
        le_pawdNew = new QLineEdit(SellerInfoForm);
        le_pawdNew->setObjectName(QStringLiteral("le_pawdNew"));
        le_pawdNew->setEnabled(true);
        le_pawdNew->setGeometry(QRect(446, 318, 151, 21));
        label_pawdNew = new QLabel(SellerInfoForm);
        label_pawdNew->setObjectName(QStringLiteral("label_pawdNew"));
        label_pawdNew->setGeometry(QRect(319, 309, 120, 39));
        label_pawdNew->setFont(font);
        label_pawdOld = new QLabel(SellerInfoForm);
        label_pawdOld->setObjectName(QStringLiteral("label_pawdOld"));
        label_pawdOld->setGeometry(QRect(320, 260, 120, 39));
        label_pawdOld->setFont(font);
        horizontalSlider = new QSlider(SellerInfoForm);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(-10, 360, 1021, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_id = new QLabel(SellerInfoForm);
        label_id->setObjectName(QStringLiteral("label_id"));
        label_id->setGeometry(QRect(328, 82, 71, 39));
        label_id->setFont(font);
        le_id = new QLineEdit(SellerInfoForm);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setEnabled(false);
        le_id->setGeometry(QRect(406, 91, 191, 21));
        label_sex = new QLabel(SellerInfoForm);
        label_sex->setObjectName(QStringLiteral("label_sex"));
        label_sex->setGeometry(QRect(331, 181, 90, 39));
        label_sex->setFont(font);
        le_sex = new QLineEdit(SellerInfoForm);
        le_sex->setObjectName(QStringLiteral("le_sex"));
        le_sex->setEnabled(false);
        le_sex->setGeometry(QRect(408, 190, 191, 21));
        widget = new QWidget(SellerInfoForm);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(230, 438, 332, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_storeId = new QLabel(widget);
        label_storeId->setObjectName(QStringLiteral("label_storeId"));
        label_storeId->setFont(font);

        horizontalLayout->addWidget(label_storeId);

        le_id_2 = new QLineEdit(widget);
        le_id_2->setObjectName(QStringLiteral("le_id_2"));
        le_id_2->setEnabled(false);
        le_id_2->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(le_id_2);

        widget1 = new QWidget(SellerInfoForm);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(300, 490, 265, 41));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_storeName = new QLabel(widget1);
        label_storeName->setObjectName(QStringLiteral("label_storeName"));
        label_storeName->setFont(font);

        horizontalLayout_3->addWidget(label_storeName);

        le_storeName = new QLineEdit(widget1);
        le_storeName->setObjectName(QStringLiteral("le_storeName"));
        le_storeName->setEnabled(false);

        horizontalLayout_3->addWidget(le_storeName);


        retranslateUi(SellerInfoForm);

        QMetaObject::connectSlotsByName(SellerInfoForm);
    } // setupUi

    void retranslateUi(QWidget *SellerInfoForm)
    {
        SellerInfoForm->setWindowTitle(QApplication::translate("SellerInfoForm", "Form", Q_NULLPTR));
        label_headPic->setText(QApplication::translate("SellerInfoForm", "TextLabel", Q_NULLPTR));
        label_name->setText(QApplication::translate("SellerInfoForm", "\345\220\215\345\255\227:", Q_NULLPTR));
        pb_create->setText(QApplication::translate("SellerInfoForm", "\345\210\233\345\273\272\344\271\246\345\272\227", Q_NULLPTR));
        pb_logout->setText(QApplication::translate("SellerInfoForm", "\346\263\250\351\224\200", Q_NULLPTR));
        pb_info->setText(QApplication::translate("SellerInfoForm", "\344\277\256\346\224\271\344\277\241\346\201\257", Q_NULLPTR));
        pb_pawd->setText(QApplication::translate("SellerInfoForm", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        label_pawdNew->setText(QApplication::translate("SellerInfoForm", "\346\226\260\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_pawdOld->setText(QApplication::translate("SellerInfoForm", "\346\227\247\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_id->setText(QApplication::translate("SellerInfoForm", "ID   :", Q_NULLPTR));
        label_sex->setText(QApplication::translate("SellerInfoForm", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        label_storeId->setText(QApplication::translate("SellerInfoForm", "STOREID  :", Q_NULLPTR));
        label_storeName->setText(QApplication::translate("SellerInfoForm", "\345\272\227\345\220\215  :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SellerInfoForm: public Ui_SellerInfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELLERINFOFORM_H
