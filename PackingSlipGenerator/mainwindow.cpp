/**
 * Author: Hudson Green
 *
**/

#include <QDebug>

#include "mainwindow.h"
#include "companyinfodialog.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    // make tab the main widget
    this->setCentralWidget(ui->tabWidget);

    // Set date field to current date
    ui->dateEdit->setDate(QDate::currentDate());

}

MainWindow::~MainWindow() {
    delete ui;
    // this should be deleted by user
    //delete m_company;
}

void MainWindow::refreshCompanyData() {

    // Check if no company data present
    if(!m_company) {
        ui->label_companyData->setText("Please Import Company Data");
        return;
    }

    QString buffer = "                                                  PACKING LIST\n";

    Address addr = m_company->address;
    buffer += m_company->getName() + "\n";
    buffer += addr.street.toUpper() + "\n";
    buffer += addr.city.toUpper() + ", " + addr.stateCode + " " + addr.zipCode + "\n";
    buffer += "TEL: " + m_company->getTelephone() + "\n";
    buffer += "WWW: " + m_company->getWebsite();

    ui->label_companyData->setText(buffer);
}

/**
 * Called when user wants to create a company data file - should prompt user for info on company
 */
void MainWindow::on_actionExport_Company_Data_triggered() {

    // Create an object to contain company data
    EntityCompany *newCompany = new EntityCompany();

    // Display Company Info Dialog
    CompanyInfoDialog *info = new CompanyInfoDialog(this, newCompany);
    // show dialog (exec() will WAIT until dialog is destroyed before continuing)
    // where show() will continue program while showing window
    info->exec();

    // Get submission status
    bool submissionStatus = info->isSubmitted();

    // Delete dialog box at end as no longer needed
    if(info != nullptr)
        delete info;

    // check if user cancelled export
    if(!submissionStatus) {
        // delete the company we created
        delete newCompany;
    } else {

        /* user wants data at this point */

        // ensure we delete old company class info
        if(m_company != nullptr)
            delete m_company;

        // set to new company we made
        m_company = newCompany;

        // debug print company data
        qDebug() << "Name: " << m_company->getName();
        qDebug() << "Telephone: " << m_company->getTelephone();
        qDebug() << "Website: " << m_company->getWebsite();

        // debug print address
        qDebug() << "Address:\n" << m_company->address.street;
        qDebug() << m_company->address.city << ", " << m_company->address.stateCode << m_company->address.zipCode;
        qDebug() << m_company->address.country;

        refreshCompanyData();

    }

}

