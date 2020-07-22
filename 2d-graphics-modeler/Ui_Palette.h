
#ifndef UI_PALETTE_H
#define UI_PALETTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_Palette
{
public:
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit;
    QPlainTextEdit *plainTextEdit_2;
    QPlainTextEdit *plainTextEdit_3;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPlainTextEdit *plainTextEdit_5;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPlainTextEdit *plainTextEdit_4;
    QSlider *horizontalSlider_4;
    QPlainTextEdit *plainTextEdit_6;
    QSlider *horizontalSlider_5;
    QSlider *horizontalSlider_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;

    void setupUi(QDialog *Palette)
    {
        if (Palette->objectName().isEmpty())
            Palette->setObjectName(QString::fromUtf8("Palette"));
        Palette->resize(400, 413);
        horizontalSlider = new QSlider(Palette);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(70, 30, 160, 22));
        horizontalSlider->setMaximum(255);
        horizontalSlider->setSliderPosition(255);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QSlider(Palette);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(70, 60, 160, 22));
        horizontalSlider_2->setMaximum(255);
        horizontalSlider_2->setValue(255);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_3 = new QSlider(Palette);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(70, 90, 160, 22));
        horizontalSlider_3->setMaximum(255);
        horizontalSlider_3->setValue(255);
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(Palette);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 60, 16, 21));
        label_3 = new QLabel(Palette);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 30, 16, 21));
        label_4 = new QLabel(Palette);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 90, 16, 21));
        plainTextEdit = new QPlainTextEdit(Palette);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(240, 30, 104, 21));
        plainTextEdit_2 = new QPlainTextEdit(Palette);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(240, 60, 104, 21));
        plainTextEdit_3 = new QPlainTextEdit(Palette);
        plainTextEdit_3->setObjectName(QString::fromUtf8("plainTextEdit_3"));
        plainTextEdit_3->setGeometry(QRect(240, 90, 104, 21));
        label = new QLabel(Palette);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 10, 111, 20));
        pushButton = new QPushButton(Palette);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 120, 93, 28));
        pushButton_2 = new QPushButton(Palette);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 120, 93, 28));
        pushButton_3 = new QPushButton(Palette);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 120, 93, 28));
        pushButton_4 = new QPushButton(Palette);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 160, 93, 28));
        pushButton_5 = new QPushButton(Palette);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(140, 160, 93, 28));
        pushButton_6 = new QPushButton(Palette);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(270, 160, 93, 28));
        plainTextEdit_5 = new QPlainTextEdit(Palette);
        plainTextEdit_5->setObjectName(QString::fromUtf8("plainTextEdit_5"));
        plainTextEdit_5->setGeometry(QRect(230, 300, 104, 21));
        label_5 = new QLabel(Palette);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(150, 250, 71, 20));
        label_6 = new QLabel(Palette);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 300, 16, 21));
        label_7 = new QLabel(Palette);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 330, 16, 21));
        label_8 = new QLabel(Palette);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 270, 16, 21));
        plainTextEdit_4 = new QPlainTextEdit(Palette);
        plainTextEdit_4->setObjectName(QString::fromUtf8("plainTextEdit_4"));
        plainTextEdit_4->setGeometry(QRect(230, 270, 104, 21));
        horizontalSlider_4 = new QSlider(Palette);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setGeometry(QRect(60, 330, 160, 22));
        horizontalSlider_4->setMaximum(255);
        horizontalSlider_4->setValue(0);
        horizontalSlider_4->setOrientation(Qt::Horizontal);
        plainTextEdit_6 = new QPlainTextEdit(Palette);
        plainTextEdit_6->setObjectName(QString::fromUtf8("plainTextEdit_6"));
        plainTextEdit_6->setGeometry(QRect(230, 330, 104, 21));
        horizontalSlider_5 = new QSlider(Palette);
        horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
        horizontalSlider_5->setGeometry(QRect(60, 300, 160, 22));
        horizontalSlider_5->setMaximum(255);
        horizontalSlider_5->setValue(0);
        horizontalSlider_5->setOrientation(Qt::Horizontal);
        horizontalSlider_6 = new QSlider(Palette);
        horizontalSlider_6->setObjectName(QString::fromUtf8("horizontalSlider_6"));
        horizontalSlider_6->setGeometry(QRect(60, 270, 160, 22));
        horizontalSlider_6->setMaximum(255);
        horizontalSlider_6->setValue(0);
        horizontalSlider_6->setOrientation(Qt::Horizontal);
        pushButton_7 = new QPushButton(Palette);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(70, 200, 93, 28));
        pushButton_8 = new QPushButton(Palette);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(210, 200, 93, 28));

        retranslateUi(Palette);

        QMetaObject::connectSlotsByName(Palette);
    } // setupUi

    void retranslateUi(QDialog *Palette)
    {
        Palette->setWindowTitle(QApplication::translate("Palette", "Form", nullptr));
        label_2->setText(QApplication::translate("Palette", "G", nullptr));
        label_3->setText(QApplication::translate("Palette", "R", nullptr));
        label_4->setText(QApplication::translate("Palette", "B", nullptr));
        plainTextEdit->setPlainText(QApplication::translate("Palette", "255", nullptr));
        plainTextEdit_2->setPlainText(QApplication::translate("Palette", "255", nullptr));
        plainTextEdit_3->setPlainText(QApplication::translate("Palette", "255", nullptr));
        label->setText(QApplication::translate("Palette", "Background Color", nullptr));
        pushButton->setText(QApplication::translate("Palette", "Draw Line", nullptr));
        pushButton_2->setText(QApplication::translate("Palette", "Draw Polyline", nullptr));
        pushButton_3->setText(QApplication::translate("Palette", "Draw Polygon", nullptr));
        pushButton_4->setText(QApplication::translate("Palette", "Draw Rectangle", nullptr));
        pushButton_5->setText(QApplication::translate("Palette", "Draw Ellipse", nullptr));
        pushButton_6->setText(QApplication::translate("Palette", "Draw Text", nullptr));
        plainTextEdit_5->setPlainText(QApplication::translate("Palette", "0", nullptr));
        label_5->setText(QApplication::translate("Palette", "Brush Color", nullptr));
        label_6->setText(QApplication::translate("Palette", "G", nullptr));
        label_7->setText(QApplication::translate("Palette", "B", nullptr));
        label_8->setText(QApplication::translate("Palette", "R", nullptr));
        plainTextEdit_4->setPlainText(QApplication::translate("Palette", "0\n"
"\n"
"", nullptr));
        plainTextEdit_6->setPlainText(QApplication::translate("Palette", "0", nullptr));
        pushButton_7->setText(QApplication::translate("Palette", "Draw Circle", nullptr));
        pushButton_8->setText(QApplication::translate("Palette", "Draw Square", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Palette: public Ui_Palette {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PALETTE_H
