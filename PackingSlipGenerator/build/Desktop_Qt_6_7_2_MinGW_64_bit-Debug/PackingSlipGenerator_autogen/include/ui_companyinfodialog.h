/********************************************************************************
** Form generated from reading UI file 'companyinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPANYINFODIALOG_H
#define UI_COMPANYINFODIALOG_H

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

class Ui_CompanyInfoDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *companyName;
    QLabel *label_cName;
    QLineEdit *lineEdit_companyName;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *telephone;
    QLabel *label_number;
    QLabel *label_5;
    QLineEdit *lineEdit_companyTeleArea;
    QLabel *label_4;
    QLineEdit *lineEdit_companyTelePrefix;
    QLabel *label_3;
    QLineEdit *lineEdit_companyTeleNumber;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *website;
    QLabel *label_url;
    QLineEdit *lineEdit_companyWebsite;
    QLabel *label_addr;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *street;
    QLabel *label_street;
    QLineEdit *lineEdit_companyAddrStreet;
    QWidget *gridLayoutWidget;
    QGridLayout *cityState;
    QLabel *label_city;
    QLineEdit *lineEdit_companyAddrCity;
    QLabel *label_state;
    QLineEdit *lineEdit_companyAddrState;
    QWidget *gridLayoutWidget_2;
    QGridLayout *zipCountry;
    QLineEdit *lineEdit_companyAddrZip;
    QLineEdit *lineEdit_companyAddrCountry;
    QLabel *label_zip;
    QLabel *label_country;
    QLabel *label_info;

    void setupUi(QDialog *CompanyInfoDialog)
    {
        if (CompanyInfoDialog->objectName().isEmpty())
            CompanyInfoDialog->setObjectName("CompanyInfoDialog");
        CompanyInfoDialog->resize(400, 400);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CompanyInfoDialog->sizePolicy().hasHeightForWidth());
        CompanyInfoDialog->setSizePolicy(sizePolicy);
        CompanyInfoDialog->setMinimumSize(QSize(400, 400));
        CompanyInfoDialog->setMaximumSize(QSize(400, 400));
        buttonBox = new QDialogButtonBox(CompanyInfoDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 350, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        horizontalLayoutWidget = new QWidget(CompanyInfoDialog);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(20, 20, 361, 41));
        companyName = new QHBoxLayout(horizontalLayoutWidget);
        companyName->setObjectName("companyName");
        companyName->setContentsMargins(0, 0, 0, 0);
        label_cName = new QLabel(horizontalLayoutWidget);
        label_cName->setObjectName("label_cName");

        companyName->addWidget(label_cName);

        lineEdit_companyName = new QLineEdit(horizontalLayoutWidget);
        lineEdit_companyName->setObjectName("lineEdit_companyName");
        lineEdit_companyName->setMaxLength(80);

        companyName->addWidget(lineEdit_companyName);

        horizontalLayoutWidget_2 = new QWidget(CompanyInfoDialog);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(20, 60, 361, 41));
        telephone = new QHBoxLayout(horizontalLayoutWidget_2);
        telephone->setObjectName("telephone");
        telephone->setContentsMargins(0, 0, 0, 0);
        label_number = new QLabel(horizontalLayoutWidget_2);
        label_number->setObjectName("label_number");

        telephone->addWidget(label_number);

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
        lineEdit_companyTeleNumber->setMaxLength(4);

        telephone->addWidget(lineEdit_companyTeleNumber);

        horizontalLayoutWidget_3 = new QWidget(CompanyInfoDialog);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(20, 100, 361, 41));
        website = new QHBoxLayout(horizontalLayoutWidget_3);
        website->setObjectName("website");
        website->setContentsMargins(0, 0, 0, 0);
        label_url = new QLabel(horizontalLayoutWidget_3);
        label_url->setObjectName("label_url");

        website->addWidget(label_url);

        lineEdit_companyWebsite = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit_companyWebsite->setObjectName("lineEdit_companyWebsite");
        lineEdit_companyWebsite->setMaxLength(80);

        website->addWidget(lineEdit_companyWebsite);

        label_addr = new QLabel(CompanyInfoDialog);
        label_addr->setObjectName("label_addr");
        label_addr->setGeometry(QRect(10, 150, 51, 20));
        verticalLayoutWidget = new QWidget(CompanyInfoDialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 170, 361, 51));
        street = new QVBoxLayout(verticalLayoutWidget);
        street->setObjectName("street");
        street->setContentsMargins(0, 0, 0, 0);
        label_street = new QLabel(verticalLayoutWidget);
        label_street->setObjectName("label_street");

        street->addWidget(label_street);

        lineEdit_companyAddrStreet = new QLineEdit(verticalLayoutWidget);
        lineEdit_companyAddrStreet->setObjectName("lineEdit_companyAddrStreet");

        street->addWidget(lineEdit_companyAddrStreet);

        gridLayoutWidget = new QWidget(CompanyInfoDialog);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 220, 361, 51));
        cityState = new QGridLayout(gridLayoutWidget);
        cityState->setObjectName("cityState");
        cityState->setContentsMargins(0, 0, 0, 0);
        label_city = new QLabel(gridLayoutWidget);
        label_city->setObjectName("label_city");

        cityState->addWidget(label_city, 0, 0, 1, 1);

        lineEdit_companyAddrCity = new QLineEdit(gridLayoutWidget);
        lineEdit_companyAddrCity->setObjectName("lineEdit_companyAddrCity");
        lineEdit_companyAddrCity->setMinimumSize(QSize(0, 0));

        cityState->addWidget(lineEdit_companyAddrCity, 1, 0, 1, 1);

        label_state = new QLabel(gridLayoutWidget);
        label_state->setObjectName("label_state");

        cityState->addWidget(label_state, 0, 1, 1, 1);

        lineEdit_companyAddrState = new QLineEdit(gridLayoutWidget);
        lineEdit_companyAddrState->setObjectName("lineEdit_companyAddrState");
        lineEdit_companyAddrState->setMaximumSize(QSize(75, 16777215));
        lineEdit_companyAddrState->setMaxLength(2);

        cityState->addWidget(lineEdit_companyAddrState, 1, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(CompanyInfoDialog);
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

        label_zip = new QLabel(gridLayoutWidget_2);
        label_zip->setObjectName("label_zip");

        zipCountry->addWidget(label_zip, 0, 0, 1, 1);

        label_country = new QLabel(gridLayoutWidget_2);
        label_country->setObjectName("label_country");

        zipCountry->addWidget(label_country, 0, 1, 1, 1);

        label_info = new QLabel(CompanyInfoDialog);
        label_info->setObjectName("label_info");
        label_info->setGeometry(QRect(10, 0, 91, 20));

        retranslateUi(CompanyInfoDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CompanyInfoDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CompanyInfoDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CompanyInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *CompanyInfoDialog)
    {
        CompanyInfoDialog->setWindowTitle(QCoreApplication::translate("CompanyInfoDialog", "Company Information", nullptr));
        label_cName->setText(QCoreApplication::translate("CompanyInfoDialog", "Company Name: ", nullptr));
        label_number->setText(QCoreApplication::translate("CompanyInfoDialog", "Telephone Number: ", nullptr));
        label_5->setText(QCoreApplication::translate("CompanyInfoDialog", " (", nullptr));
        label_4->setText(QCoreApplication::translate("CompanyInfoDialog", ") ", nullptr));
        label_3->setText(QCoreApplication::translate("CompanyInfoDialog", "-", nullptr));
        label_url->setText(QCoreApplication::translate("CompanyInfoDialog", "Website Address: ", nullptr));
        label_addr->setText(QCoreApplication::translate("CompanyInfoDialog", "Address:", nullptr));
        label_street->setText(QCoreApplication::translate("CompanyInfoDialog", "Street:", nullptr));
        label_city->setText(QCoreApplication::translate("CompanyInfoDialog", "City:", nullptr));
        label_state->setText(QCoreApplication::translate("CompanyInfoDialog", "State Code", nullptr));
        lineEdit_companyAddrZip->setText(QString());
        lineEdit_companyAddrCountry->setText(QCoreApplication::translate("CompanyInfoDialog", "United States", nullptr));
        label_zip->setText(QCoreApplication::translate("CompanyInfoDialog", "Zip Code", nullptr));
        label_country->setText(QCoreApplication::translate("CompanyInfoDialog", "Country", nullptr));
        label_info->setText(QCoreApplication::translate("CompanyInfoDialog", "Company Info:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CompanyInfoDialog: public Ui_CompanyInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPANYINFODIALOG_H
