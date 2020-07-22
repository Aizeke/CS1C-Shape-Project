
#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLogin;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionContact_Us;
    QAction *actionOpen_palette;
    QAction *actionShow_Area;
    QAction *actionShow_Perimeter;
    QAction *actionShow_Info;
    QAction *actionLog_Out;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLineEdit *moveInput;
    QPushButton *moveButton;
    QMenuBar *menuBar;
    QMenu *menuHome;
    QMenu *menuFile;
    QMenu *menuPalette;
    QMenu *menuShow;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1285, 595);
        actionLogin = new QAction(MainWindow);
        actionLogin->setObjectName(QString::fromUtf8("actionLogin"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionContact_Us = new QAction(MainWindow);
        actionContact_Us->setObjectName(QString::fromUtf8("actionContact_Us"));
        actionOpen_palette = new QAction(MainWindow);
        actionOpen_palette->setObjectName(QString::fromUtf8("actionOpen_palette"));
     
        actionShow_Area = new QAction(MainWindow);
        actionShow_Area->setObjectName(QString::fromUtf8("actionShow_Area"));
        actionShow_Perimeter = new QAction(MainWindow);
        actionShow_Perimeter->setObjectName(QString::fromUtf8("actionShow_Perimeter"));
        actionShow_Info = new QAction(MainWindow);
        actionShow_Info->setObjectName(QString::fromUtf8("actionShow_Info"));
       
        actionLog_Out = new QAction(MainWindow);
        actionLog_Out->setObjectName(QString::fromUtf8("actionLog_Out"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(1100, 0, 120, 81));
        moveInput = new QLineEdit(groupBox);
        moveInput->setObjectName(QString::fromUtf8("moveInput"));
        moveInput->setGeometry(QRect(40, 20, 51, 21));
        moveInput->setInputMethodHints(Qt::ImhNone);
        moveButton = new QPushButton(groupBox);
        moveButton->setObjectName(QString::fromUtf8("moveButton"));
        moveButton->setGeometry(QRect(20, 50, 80, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1285, 21));
        menuHome = new QMenu(menuBar);
        menuHome->setObjectName(QString::fromUtf8("menuHome"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuPalette = new QMenu(menuBar);
        menuPalette->setObjectName(QString::fromUtf8("menuPalette"));
        menuShow = new QMenu(menuBar);
        menuShow->setObjectName(QString::fromUtf8("menuShow"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setEnabled(true);
        MainWindow->addToolBar(Qt::LeftToolBarArea, mainToolBar);

        menuBar->addAction(menuHome->menuAction());
        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuPalette->menuAction());
        menuBar->addAction(menuShow->menuAction());
        menuHome->addAction(actionLogin);
        menuHome->addAction(actionLog_Out);
        menuHome->addAction(actionContact_Us);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionQuit);
        menuPalette->addAction(actionOpen_palette);
        menuShow->addAction(actionShow_Info);
        menuShow->addSeparator();
        menuShow->addAction(actionShow_Area);
        menuShow->addAction(actionShow_Perimeter);
        mainToolBar->addAction(actionOpen_palette);
        mainToolBar->addAction(actionShow_Info);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLogin->setText(QApplication::translate("MainWindow", "Login", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionContact_Us->setText(QApplication::translate("MainWindow", "Contact Us", nullptr));
        actionOpen_palette->setText(QApplication::translate("MainWindow", "Open palette", nullptr));
        actionShow_Area->setText(QApplication::translate("MainWindow", "Show Area", nullptr));
        actionShow_Perimeter->setText(QApplication::translate("MainWindow", "Show Perimeter", nullptr));
        actionShow_Info->setText(QApplication::translate("MainWindow", "Show Info", nullptr));
        actionLog_Out->setText(QApplication::translate("MainWindow", "Log Out", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Shape To Move (ID)", nullptr));
        moveButton->setText(QApplication::translate("MainWindow", "Move", nullptr));
        menuHome->setTitle(QApplication::translate("MainWindow", "Home", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuPalette->setTitle(QApplication::translate("MainWindow", "Palette", nullptr));
        menuShow->setTitle(QApplication::translate("MainWindow", "Show ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
