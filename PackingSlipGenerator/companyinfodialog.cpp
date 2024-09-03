#include <QIntValidator>
#include <QMessageBox>

#include "companyinfodialog.h"
#include "ui_companyinfodialog.h"

CompanyInfoDialog::CompanyInfoDialog(QWidget *parent, EntityCompany *company)
    : QDialog(parent)
    , ui(new Ui::CompanyInfoDialog)
{

    ui->setupUi(this);

    m_companyRef = company;

    // Regex for letters only
    QRegularExpression regExLetOnly("[a-zA-Z]+");

    // only allow telephone fields to allow pos ints
    ui->lineEdit_companyTeleArea->setValidator(new QIntValidator(0, 999, this));
    ui->lineEdit_companyTelePrefix->setValidator(new QIntValidator(0, 999, this));
    ui->lineEdit_companyTeleNumber->setValidator(new QIntValidator(0, 9999, this));
    // state codes must be letters
    ui->lineEdit_companyAddrState->setValidator(new QRegularExpressionValidator(regExLetOnly, this));

}

CompanyInfoDialog::~CompanyInfoDialog() {
    delete ui;
}

// helper func for CompanyInfoDialog::validateData(...)
bool validateDataInvalidField(QString &errorBuffer, QString errorMsg) {
    errorBuffer += "- " + errorMsg + '\n';
    return true;
}

/**
 * @brief validateData - ensures that data is filled in correctly
 * @param company - company object that holds data
 * @return true if data is valid; false if invalid
 */
bool CompanyInfoDialog::validateData(EntityCompany *company, bool dialogOnInvalid) {

    // return if we don't have an object to put data into
    if(!company) return false;

    bool invalidFieldFound = false;

    /* check all fields for invalid stuff */
    QString errorBuff = "";

    // company name
    if(company->getName().length() == 0)
        invalidFieldFound = validateDataInvalidField(errorBuff, "Missing company name");

    // telephone
    if(
        ui->lineEdit_companyTeleArea->text().length() < 3 ||
        ui->lineEdit_companyTelePrefix->text().length() < 3 ||
        ui->lineEdit_companyTeleNumber->text().length() < 4
    )
        invalidFieldFound = validateDataInvalidField(errorBuff, "Missing/invalid telephone number");

    // website
    if(company->getWebsite().length() == 0)
        invalidFieldFound = validateDataInvalidField(errorBuff, "Missing website URL");

    // address: street
    if(company->address.street.length() == 0)
        invalidFieldFound = validateDataInvalidField(errorBuff, "Missing street address");

    // address: city
    if(company->address.city.length() == 0)
        invalidFieldFound = validateDataInvalidField(errorBuff, "Missing city in address");

    // address: state code
    if(company->address.stateCode.length() != 2)
        invalidFieldFound = validateDataInvalidField(errorBuff, "Missing/invalid state code in address");

    // address: zip code
    if(company->address.zipCode.length() == 0)
        invalidFieldFound = validateDataInvalidField(errorBuff, "Missing zip code in address");

    // address: country
    if(company->address.country.length() == 0)
        invalidFieldFound = validateDataInvalidField(errorBuff, "Missing country in address");

    /* END FIELD CHECK */

    // check if user wants dialog of errors
    if(dialogOnInvalid && invalidFieldFound)
        QMessageBox::warning(this, "Invalid Fields", "There were issues with the following fields:\n" + errorBuff);

    return !invalidFieldFound;

}

void CompanyInfoDialog::displayError(QString error) {
    qDebug() << "Error: " << error;
}

bool CompanyInfoDialog::isSubmitted() {
    return m_formSubmitted;
}

/**
 * @brief CompanyInfoDialog::accept - overrides default behavior unless all fields are filled out
 */
void CompanyInfoDialog::accept() {

    // return if we don't have an object to put data into
    if(!m_companyRef)
        return displayError("Internal error. Could not create company data object.");

    // call original base function if fields are valid
    if(validateData(m_companyRef, true)) {
        // mark form as submitted
        m_formSubmitted = true;
        // default behavior from here
        QDialog::accept();
        return;
    }

    // invalid data in form
    displayError("Invalid data.");

}

/** HANDLE FORM LINEEDIT CHANGES **/

/* COMPANY NAME */
void CompanyInfoDialog::on_lineEdit_companyName_textChanged(const QString &arg1) {
    if(!m_companyRef) return;   // guard against null company reference
    m_companyRef->setName(arg1);
}

/* PHONE NUMBER PARTS */
void CompanyInfoDialog::on_lineEdit_companyTeleArea_textChanged(const QString &arg1) {
    if(!m_companyRef) return;   // guard against null company reference
    m_companyRef->setTelephoneArea(arg1.toInt());
}
void CompanyInfoDialog::on_lineEdit_companyTelePrefix_textChanged(const QString &arg1) {
    if(!m_companyRef) return;   // guard against null company reference
    m_companyRef->setTelephonePrefix(arg1.toInt());
}
void CompanyInfoDialog::on_lineEdit_companyTeleNumber_textChanged(const QString &arg1) {
    if(!m_companyRef) return;   // guard against null company reference
    m_companyRef->setTelephoneNumber(arg1.toInt());
}
/* END PHONE NUMBER PARTS */

/* WEBSITE */
void CompanyInfoDialog::on_lineEdit_companyWebsite_textChanged(const QString &arg1) {
    if(!m_companyRef) return;   // guard against null company reference
    m_companyRef->setWebsite(arg1);
}

/* STREET */
void CompanyInfoDialog::on_lineEdit_companyAddrStreet_textChanged(const QString &arg1) {
    if(!m_companyRef) return;   // guard against null company reference
    m_companyRef->address.street = arg1;
}

/* CITY */
void CompanyInfoDialog::on_lineEdit_companyAddrCity_textChanged(const QString &arg1) {
    if(!m_companyRef) return;   // guard against null company reference
    m_companyRef->address.city = arg1;
}

/* STATE CODE */
void CompanyInfoDialog::on_lineEdit_companyAddrState_textChanged(const QString &arg1) {
    if(!m_companyRef) return;   // guard against null company reference
    // force to uppercase
    ui->lineEdit_companyAddrState->setText(arg1.toUpper());
    m_companyRef->address.stateCode = arg1.toUpper();
}

/* ZIP CODE */
void CompanyInfoDialog::on_lineEdit_companyAddrZip_textChanged(const QString &arg1) {
    if(!m_companyRef) return;   // guard against null company reference
    m_companyRef->address.zipCode = arg1;
}

/* COUNTRY NAME */
void CompanyInfoDialog::on_lineEdit_companyAddrCountry_textChanged(const QString &arg1) {
    if(!m_companyRef) return;   // guard against null company reference
    m_companyRef->address.country = arg1;
}

/** END HANDLE FORM LINEEDIT CHANGES **/

