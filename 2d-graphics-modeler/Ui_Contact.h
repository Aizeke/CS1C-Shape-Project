
#ifndef UI_CONTACT_H
#define UI_CONTACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Contact
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Contact)
    {
        if (Contact->objectName().isEmpty())
            Contact->setObjectName(QString::fromUtf8("Contact"));
        Contact->resize(472, 629);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Contact->sizePolicy().hasHeightForWidth());
        Contact->setSizePolicy(sizePolicy);
        Contact->setMinimumSize(QSize(472, 629));
        Contact->setMaximumSize(QSize(472, 629));
        Contact->setBaseSize(QSize(472, 629));
        label = new QLabel(Contact);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 20, 281, 281));
      
        label->setScaledContents(true);
        label_2 = new QLabel(Contact);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 340, 481, 291));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setOpenExternalLinks(true);

        retranslateUi(Contact);

        QMetaObject::connectSlotsByName(Contact);
    } // setupUi

    void retranslateUi(QDialog *Contact)
    {
        Contact->setWindowTitle(QApplication::translate("Contact", "Contact Us", nullptr));
        label->setText(QString());
    
    } // retranslateUi

};

namespace Ui {
    class Contact: public Ui_Contact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACT_H
