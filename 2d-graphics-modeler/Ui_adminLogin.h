
#ifndef UI_ADMINLOGIN_H
#define UI_ADMINLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminLogin
{
public:
    QGroupBox *groupBox;
    QLineEdit *Username;
    QLineEdit *Password;
    QPushButton *loginButton;
    QLabel *usernameLabel;
    QLabel *passwordLabel;
    QLabel *Logo;
    QLabel *label;

    void setupUi(QDialog *adminLogin)
    {
        if (adminLogin->objectName().isEmpty())
            adminLogin->setObjectName(QString::fromUtf8("adminLogin"));
        adminLogin->resize(431, 591);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(adminLogin->sizePolicy().hasHeightForWidth());
        adminLogin->setSizePolicy(sizePolicy);
        adminLogin->setMinimumSize(QSize(431, 591));
        adminLogin->setMaximumSize(QSize(431, 591));
        adminLogin->setSizeGripEnabled(true);
        adminLogin->setModal(true);
        groupBox = new QGroupBox(adminLogin);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 220, 411, 361));
        Username = new QLineEdit(groupBox);
        Username->setObjectName(QString::fromUtf8("Username"));
        Username->setGeometry(QRect(10, 40, 391, 61));
        QFont font;
        font.setPointSize(12);
        Username->setFont(font);
        Username->setFocusPolicy(Qt::StrongFocus);
        Username->setCursorPosition(0);
        Password = new QLineEdit(groupBox);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setGeometry(QRect(10, 140, 391, 61));
        Password->setFont(font);
        Password->setEchoMode(QLineEdit::Password);
        loginButton = new QPushButton(groupBox);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(10, 270, 391, 61));
        loginButton->setFont(font);
        usernameLabel = new QLabel(groupBox);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        usernameLabel->setGeometry(QRect(20, 40, 381, 61));
        passwordLabel = new QLabel(groupBox);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setGeometry(QRect(20, 140, 381, 61));
        Logo = new QLabel(adminLogin);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setGeometry(QRect(140, 40, 211, 141));
        label = new QLabel(adminLogin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 391, 181));

        retranslateUi(adminLogin);

        QMetaObject::connectSlotsByName(adminLogin);
    } // setupUi

    void retranslateUi(QDialog *adminLogin)
    {
        adminLogin->setWindowTitle(QApplication::translate("adminLogin", "Admin Login", nullptr));
        groupBox->setTitle(QApplication::translate("adminLogin", "Login", nullptr));
        Username->setInputMask(QString());
        Username->setText(QString());
        Username->setPlaceholderText(QString());
        Password->setText(QString());
        Password->setPlaceholderText(QString());
        loginButton->setText(QApplication::translate("adminLogin", "Login", nullptr));
        usernameLabel->setText(QApplication::translate("adminLogin", "<html><head/><body><p><span style=\" font-size:12pt; color:#818181;\">username</span></p></body></html>", nullptr));
        passwordLabel->setText(QApplication::translate("adminLogin", "<html><head/><body><p><span style=\" font-size:12pt; color:#818181;\">password</span></p></body></html>", nullptr));
        Logo->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adminLogin: public Ui_adminLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGIN_H
