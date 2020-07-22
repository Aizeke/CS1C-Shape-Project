#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QDialog>
#include <QMouseEvent>

namespace Ui {
class adminLogin;
}

class adminLogin : public QDialog
{
    Q_OBJECT

public:
    explicit adminLogin(QWidget *parent = nullptr);
    ~adminLogin();

private slots:
    void on_loginButton_clicked();
    virtual void mousePressEvent(QMouseEvent *);

private:
    Ui::adminLogin *ui;
};

#endif // ADMINLOGIN_H

