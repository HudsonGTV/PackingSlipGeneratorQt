#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "entitycompany.h"

QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

private:
    Ui::MainWindow *ui;
    EntityCompany *m_company = nullptr;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void refreshCompanyData();

private slots:
    void on_actionExport_Company_Data_triggered();
};
#endif // MAINWINDOW_H
