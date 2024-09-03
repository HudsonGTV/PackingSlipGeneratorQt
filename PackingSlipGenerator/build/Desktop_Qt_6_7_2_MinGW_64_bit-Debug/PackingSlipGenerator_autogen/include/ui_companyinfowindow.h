/********************************************************************************
** Form generated from reading UI file 'CompanyInfoWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPANYINFOWINDOW_H
#define UI_COMPANYINFOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CompanyInfoWindow
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *companyName;
    QLabel *label;
    QLineEdit *lineEdit_companyName;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *telephone;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *lineEdit_companyTeleArea;
    QLabel *label_4;
    QLineEdit *lineEdit_companyTelePrefix;
    QLabel *label_3;
    QLineEdit *lineEdit_companyTeleNumber;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *website;
    QLabel *label_6;
    QLineEdit *lineEdit_companyWebsite;
    QLabel *label_addr;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *street;
    QLabel *label_8;
    QLineEdit *lineEdit_companyAddrStreet;
    QWidget *gridLayoutWidget;
    QGridLayout *cityState;
    QLabel *label_9;
    QLineEdit *lineEdit_companyAddrCity;
    QLabel *label_10;
    QLineEdit *lineEdit_companyAddrState;
    QWidget *gridLayoutWidget_2;
    QGridLayout *zipCountry;
    QLineEdit *lineEdit_companyAddrZip;
    QLineEdit *lineEdit_companyAddrCountry;
    QLabel *label_7;
    QLabel *label_11;
    QLabel *label_info;

    void setupUi(QDialog *CompanyInfoWindow)
    {
        if (CompanyInfoWindow->objectName().isEmpty())
            CompanyInfoWindow->setObjectName("CompanyInfoWindow");
        CompanyInfoWindow->resize(400, 400);
        buttonBox = new QDialogButtonBox(CompanyInfoWindow);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 350, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        horizontalLayoutWidget = new QWidget(CompanyInfoWindow);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(20, 20, 361, 41));
        companyName = new QHBoxLayout(horizontalLayoutWidget);
        companyName->setObjectName("companyName");
        companyName->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName("label");

        companyName->addWidget(label);

        lineEdit_companyName = new QLineEdit(horizontalLayoutWidget);
        lineEdit_companyName->setObjectName("lineEdit_companyName");
        lineEdit_companyName->setMaxLength(80);

        companyName->addWidget(lineEdit_companyName);

        horizontalLayoutWidget_2 = new QWidget(CompanyInfoWindow);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(20, 60, 361, 41));
        telephone = new QHBoxLayout(horizontalLayoutWidget_2);
        telephone->setObjectName("telephone");
        telephone->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName("label_2");

        telephone->addWidget(label_2);

        label_5 = new QLabel(horizontalLayoutWidget_2);
        label_5->setObjectName("label_5");

        telephone->addWidget(label_5);

        lineEdit_companyTeleArea = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_companyTeleArea->setObjectName("lineEdit_companyTeleArea");
        lineEdit_companyTeleArea->setMaxLength(3);

        telephone->addWidget(lineEdit_companyTeleArea);

        label_4 = new QLabel(horizontalLayoutWidget_2);
        label_4->setObjectName("label_4");

        telephone->addWidget(label_4);

        lineEdit_companyTelePrefix = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_companyTelePrefix->setObjectName("lineEdit_companyTelePrefix");
        lineEdit_companyTelePrefix->setMaxLength(3);

        telephone->addWidget(lineEdit_companyTelePrefix);

        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName("label_3");

        telephone->addWidget(label_3);

        lineEdit_companyTeleNumber = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_companyTeleNumber->setObjectName("lineEdit_companyTeleNumber");
        lineEdit_companyTeleNumber->setMaxLength(3);

        telephone->addWidget(lineEdit_companyTeleNumber);

        horizontalLayoutWidget_3 = new QWidget(CompanyInfoWindow);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(20, 100, 361, 41));
        website = new QHBoxLayout(horizontalLayoutWidget_3);
        website->setObjectName("website");
        website->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget_3);
        label_6->setObjectName("label_6");

        website->addWidget(label_6);

        lineEdit_companyWebsite = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit_companyWebsite->setObjectName("lineEdit_companyWebsite");
        lineEdit_companyWebsite->setMaxLength(80);

        website->addWidget(lineEdit_companyWebsite);

        label_addr = new QLabel(CompanyInfoWindow);
        label_addr->setObjectName("label_addr");
        label_addr->setGeometry(QRect(10, 150, 51, 20));
        verticalLayoutWidget = new QWidget(CompanyInfoWindow);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 170, 361, 51));
        street = new QVBoxLayout(verticalLayoutWidget);
        street->setObjectName("street");
        street->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName("label_8");

        street->addWidget(label_8);

        lineEdit_companyAddrStreet = new QLineEdit(verticalLayoutWidget);
        lineEdit_companyAddrStreet->setObjectName("lineEdit_companyAddrStreet");

        street->addWidget(lineEdit_companyAddrStreet);

        gridLayoutWidget = new QWidget(CompanyInfoWindow);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 220, 361, 51));
        cityState = new QGridLayout(gridLayoutWidget);
        cityState->setObjectName("cityState");
        cityState->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName("label_9");

        cityState->addWidget(label_9, 0, 0, 1, 1);

        lineEdit_companyAddrCity = new QLineEdit(gridLayoutWidget);
        lineEdit_companyAddrCity->setObjectName("lineEdit_companyAddrCity");
        lineEdit_companyAddrCity->setMinimumSize(QSize(0, 0));

        cityState->addWidget(lineEdit_companyAddrCity, 1, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName("label_10");

        cityState->addWidget(label_10, 0, 1, 1, 1);

        lineEdit_companyAddrState = new QLineEdit(gridLayoutWidget);
        lineEdit_companyAddrState->setObjectName("lineEdit_companyAddrState");
        lineEdit_companyAddrState->setMaximumSize(QSize(75, 16777215));
        lineEdit_companyAddrState->setMaxLength(2);

        cityState->addWidget(lineEdit_companyAddrState, 1, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(CompanyInfoWindow);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(20, 270, 361, 51));
        zipCountry = new QGridLayout(gridLayoutWidget_2);
        zipCountry->setObjectName("zipCountry");
        zipCountry->setContentsMargins(0, 0, 0, 0);
        lineEdit_companyAddrZip = new QLineEdit(gridLayoutWidget_2);
        lineEdit_companyAddrZip->setObjectName("lineEdit_companyAddrZip");
        lineEdit_companyAddrZip->setMaximumSize(QSize(100, 16777215));

        zipCountry->addWidget(lineEdit_companyAddrZip, 1, 0, 1, 1);

        lineEdit_companyAddrCountry = new QLineEdit(gridLayoutWidget_2);
        lineEdit_companyAddrCountry->setObjectName("lineEdit_companyAddrCountry");

        zipCountry->addWidget(lineEdit_companyAddrCountry, 1, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName("label_7");

        zipCountry->addWidget(label_7, 0, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName("label_11");

        zipCountry->addWidget(label_11, 0, 1, 1, 1);

        label_info = new QLabel(CompanyInfoWindow);
        label_info->setObjectName("label_info");
        label_info->setGeometry(QRect(10, 0, 91, 20));

        retranslateUi(CompanyInfoWindow);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CompanyInfoWindow, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CompanyInfoWindow, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CompanyInfoWindow);
    } // setupUi

    void retranslateUi(QDialog *CompanyInfoWindow)
    {
        CompanyInfoWindow->setWindowTitle(QCoreApplication::translate("CompanyInfoWindow", "Company Information", nullptr));
        label->setText(QCoreApplication::translate("CompanyInfoWindow", "Company Name: ", nullptr));
        label_2->setText(QCoreApplication::translate("CompanyInfoWindow", "Telephone Number: ", nullptr));
        label_5->setText(QCoreApplication::translate("CompanyInfoWindow", " (", nullptr));
        label_4->setText(QCoreApplication::translate("CompanyInfoWindow", ") ", nullptr));
        label_3->setText(QCoreApplication::translate("CompanyInfoWindow", "-", nullptr));
        label_6->setText(QCoreApplication::translate("CompanyInfoWindow", "Website Address: ", nullptr));
        label_addr->setText(QCoreApplication::translate("CompanyInfoWindow", "Address:", nullptr));
        label_8->setText(QCoreApplication::translate("CompanyInfoWindow", "Street:", nullptr));
        label_9->setText(QCoreApplication::translate("CompanyInfoWindow", "City:", nullptr));
        label_10->setText(QCoreApplication::translate("CompanyInfoWindow", "State Code", nullptr));
        lineEdit_companyAddrZip->setText(QString());
        lineEdit_companyAddrCountry->setText(QCoreApplication::translate("CompanyInfoWindow", "United States", nullptr));
        label_7->setText(QCoreApplication::translate("CompanyInfoWindow", "Zip Code", nullptr));
        label_11->setText(QCoreApplication::translate("CompanyInfoWindow", "Country", nullptr));
        label_info->setText(QCoreApplication::translate("CompanyInfoWindow", "Company Info:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CompanyInfoWindow: public Ui_CompanyInfoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CompanyInfoWindow_H
