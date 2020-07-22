#include "adminlogin.h"
#include "QMessageBox"
#include "mainwindow.h"
#include "ui_adminlogin.h"
#include <QPixmap>

adminLogin::adminLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminLogin)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    ui -> Username -> setEnabled(false);
    ui -> Password -> setEnabled(false);
}

adminLogin::~adminLogin()
{
    delete ui;
}

void adminLogin::on_loginButton_clicked()
{
    QString username = ui -> Username -> text();
    QString password = ui -> Password -> text();

    if(username == "Admin" && password == "Admin")
    {
        QMessageBox::information(this, "Login", "Welcome back, Admin!");
        close();
        MainWindow* w = dynamic_cast<MainWindow*>(this->parentWidget());
        w->renderArea->enableAdmin();

    }
    else
    {
        QMessageBox::warning(this, "Login", "Username or Password you've entered is incorrect!");
    }
}

void adminLogin::mousePressEvent(QMouseEvent *e)
{
    if(e->buttons() == Qt::LeftButton)
    {
        ui -> Username -> setEnabled(true);
        ui -> Password -> setEnabled(true);
        ui -> Username -> setFocus();
    }
}

