/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionImport_Company_Data;
    QAction *actionExport_Company_Data;
    QAction *actionPrint_Packing_Slip;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tabMain;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_companyData;
    QGridLayout *gridLayout_customer;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_orderID;
    QHBoxLayout *horizontalLayout_cityStateZip;
    QLineEdit *lineEdit_cCity;
    QLineEdit *lineEdit_cState;
    QLineEdit *lineEdit_cZip;
    QLabel *label_3;
    QLineEdit *lineEdit_cNumber;
    QLineEdit *lineEdit_cName;
    QLineEdit *lineEdit_cCountry;
    QLabel *label_4;
    QLineEdit *lineEdit_cStreet;
    QDateEdit *dateEdit;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QLabel *label_orderData;
    QWidget *tabItemEditor;
    QMenuBar *menubar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        actionImport_Company_Data = new QAction(MainWindow);
        actionImport_Company_Data->setObjectName("actionImport_Company_Data");
        actionExport_Company_Data = new QAction(MainWindow);
        actionExport_Company_Data->setObjectName("actionExport_Company_Data");
        actionPrint_Packing_Slip = new QAction(MainWindow);
        actionPrint_Packing_Slip->setObjectName("actionPrint_Packing_Slip");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 801, 581));
        tabMain = new QWidget();
        tabMain->setObjectName("tabMain");
        verticalLayoutWidget = new QWidget(tabMain);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 771, 531));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_companyData = new QLabel(verticalLayoutWidget);
        label_companyData->setObjectName("label_companyData");
        label_companyData->setMinimumSize(QSize(0, 150));
        QFont font;
        font.setFamilies({QString::fromUtf8("Consolas")});
        label_companyData->setFont(font);
        label_companyData->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        verticalLayout->addWidget(label_companyData);

        gridLayout_customer = new QGridLayout();
        gridLayout_customer->setObjectName("gridLayout_customer");
        gridLayout_customer->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout_customer->addWidget(label_2, 0, 1, 1, 1);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMaximumSize(QSize(16777215, 35));

        gridLayout_customer->addWidget(label, 0, 0, 1, 1);

        lineEdit_orderID = new QLineEdit(verticalLayoutWidget);
        lineEdit_orderID->setObjectName("lineEdit_orderID");

        gridLayout_customer->addWidget(lineEdit_orderID, 5, 1, 1, 1);

        horizontalLayout_cityStateZip = new QHBoxLayout();
        horizontalLayout_cityStateZip->setObjectName("horizontalLayout_cityStateZip");
        lineEdit_cCity = new QLineEdit(verticalLayoutWidget);
        lineEdit_cCity->setObjectName("lineEdit_cCity");

        horizontalLayout_cityStateZip->addWidget(lineEdit_cCity);

        lineEdit_cState = new QLineEdit(verticalLayoutWidget);
        lineEdit_cState->setObjectName("lineEdit_cState");

        horizontalLayout_cityStateZip->addWidget(lineEdit_cState);

        lineEdit_cZip = new QLineEdit(verticalLayoutWidget);
        lineEdit_cZip->setObjectName("lineEdit_cZip");

        horizontalLayout_cityStateZip->addWidget(lineEdit_cZip);


        gridLayout_customer->addLayout(horizontalLayout_cityStateZip, 2, 1, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout_customer->addWidget(label_3, 4, 1, 1, 1);

        lineEdit_cNumber = new QLineEdit(verticalLayoutWidget);
        lineEdit_cNumber->setObjectName("lineEdit_cNumber");

        gridLayout_customer->addWidget(lineEdit_cNumber, 3, 0, 1, 1);

        lineEdit_cName = new QLineEdit(verticalLayoutWidget);
        lineEdit_cName->setObjectName("lineEdit_cName");

        gridLayout_customer->addWidget(lineEdit_cName, 1, 0, 1, 1);

        lineEdit_cCountry = new QLineEdit(verticalLayoutWidget);
        lineEdit_cCountry->setObjectName("lineEdit_cCountry");

        gridLayout_customer->addWidget(lineEdit_cCountry, 3, 1, 1, 1);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout_customer->addWidget(label_4, 4, 0, 1, 1);

        lineEdit_cStreet = new QLineEdit(verticalLayoutWidget);
        lineEdit_cStreet->setObjectName("lineEdit_cStreet");

        gridLayout_customer->addWidget(lineEdit_cStreet, 1, 1, 1, 1);

        dateEdit = new QDateEdit(verticalLayoutWidget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setCalendarPopup(true);
        dateEdit->setTimeSpec(Qt::TimeSpec::LocalTime);

        gridLayout_customer->addWidget(dateEdit, 5, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_customer);

        scrollArea = new QScrollArea(verticalLayoutWidget);
        scrollArea->setObjectName("scrollArea");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy2);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 767, 194));
        label_orderData = new QLabel(scrollAreaWidgetContents_2);
        label_orderData->setObjectName("label_orderData");
        label_orderData->setGeometry(QRect(0, 0, 799, 181));
        label_orderData->setFont(font);
        label_orderData->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        label_orderData->setScaledContents(false);
        label_orderData->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        label_orderData->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextSelectableByKeyboard|Qt::TextInteractionFlag::TextSelectableByMouse);
        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea);

        tabWidget->addTab(tabMain, QString());
        tabItemEditor = new QWidget();
        tabItemEditor->setObjectName("tabItemEditor");
        tabWidget->addTab(tabItemEditor, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);
        QWidget::setTabOrder(lineEdit_cName, lineEdit_cNumber);
        QWidget::setTabOrder(lineEdit_cNumber, lineEdit_cStreet);
        QWidget::setTabOrder(lineEdit_cStreet, lineEdit_cCity);
        QWidget::setTabOrder(lineEdit_cCity, lineEdit_cState);
        QWidget::setTabOrder(lineEdit_cState, lineEdit_cZip);
        QWidget::setTabOrder(lineEdit_cZip, lineEdit_cCountry);
        QWidget::setTabOrder(lineEdit_cCountry, dateEdit);
        QWidget::setTabOrder(dateEdit, lineEdit_orderID);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionImport_Company_Data);
        menuFile->addAction(actionExport_Company_Data);
        menuFile->addAction(actionPrint_Packing_Slip);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Packing Slip Generator", nullptr));
        actionImport_Company_Data->setText(QCoreApplication::translate("MainWindow", "Import Company Data", nullptr));
        actionExport_Company_Data->setText(QCoreApplication::translate("MainWindow", "Generate Company Data", nullptr));
        actionPrint_Packing_Slip->setText(QCoreApplication::translate("MainWindow", "Print Packing Slip", nullptr));
        label_companyData->setText(QCoreApplication::translate("MainWindow", "Import Company Data Before Generating Label (File -> Import Company Data)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "SHIP TO:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "SOLD TO:", nullptr));
        lineEdit_orderID->setPlaceholderText(QCoreApplication::translate("MainWindow", "Order Number(s)", nullptr));
        lineEdit_cCity->setPlaceholderText(QCoreApplication::translate("MainWindow", "Cityville", nullptr));
        lineEdit_cState->setPlaceholderText(QCoreApplication::translate("MainWindow", "WA", nullptr));
        lineEdit_cZip->setPlaceholderText(QCoreApplication::translate("MainWindow", "12345", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Purchase Order(s):", nullptr));
        lineEdit_cNumber->setPlaceholderText(QCoreApplication::translate("MainWindow", "555-555-5555", nullptr));
        lineEdit_cName->setPlaceholderText(QCoreApplication::translate("MainWindow", "John Doe", nullptr));
        lineEdit_cCountry->setPlaceholderText(QCoreApplication::translate("MainWindow", "United States", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Date:", nullptr));
        lineEdit_cStreet->setPlaceholderText(QCoreApplication::translate("MainWindow", "1234 Streetname Blvd", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("MainWindow", "MMMM dd, yyyy", nullptr));
        label_orderData->setText(QCoreApplication::translate("MainWindow", "Order List\n"
"Example Data Until Complete\n"
"QTY         ITEM\n"
"1           itemOne\n"
"\n"
"            item attribute", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabMain), QCoreApplication::translate("MainWindow", "Overview", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabItemEditor), QCoreApplication::translate("MainWindow", "Item Editor", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
