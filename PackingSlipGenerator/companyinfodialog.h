#ifndef COMPANYINFODIALOG_H
#define COMPANYINFODIALOG_H

#include <QDialog>

#include "entitycompany.h"

namespace Ui {
    class CompanyInfoDialog;
}

class CompanyInfoDialog : public QDialog {
    Q_OBJECT

private:
    Ui::CompanyInfoDialog *ui;
    EntityCompany *m_companyRef = nullptr;
    bool m_formSubmitted = false;

public:
    explicit CompanyInfoDialog(QWidget *parent = nullptr, EntityCompany *company = nullptr);
    ~CompanyInfoDialog();

    bool validateData(EntityCompany *company, bool dialogOnInvalid = false);
    void displayError(QString error);

    bool isSubmitted();

public slots:
    virtual void accept() override;

private slots:
    void on_lineEdit_companyName_textChanged(const QString &arg1);
    void on_lineEdit_companyTeleArea_textChanged(const QString &arg1);
    void on_lineEdit_companyTelePrefix_textChanged(const QString &arg1);
    void on_lineEdit_companyTeleNumber_textChanged(const QString &arg1);
    void on_lineEdit_companyWebsite_textChanged(const QString &arg1);
    void on_lineEdit_companyAddrStreet_textChanged(const QString &arg1);
    void on_lineEdit_companyAddrCity_textChanged(const QString &arg1);
    void on_lineEdit_companyAddrState_textChanged(const QString &arg1);
    void on_lineEdit_companyAddrZip_textChanged(const QString &arg1);
    void on_lineEdit_companyAddrCountry_textChanged(const QString &arg1);
};

#endif // COMPANYINFODIALOG_H
