#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include <QMessageBox>
#include "renderarea.h"
#include "adminlogin.h"
#include "contact.h"
#include "palette.h"
#include "shapeinfo.h"
#include "ui_mainwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    ShapeBuffer buffer;
    RenderArea *renderArea;
    QTime timeDifference (const QTime&, const QTime&);

private slots:
    void on_actionLogin_triggered();
    void on_actionSave_triggered();
    void on_actionOpen_triggered();
    void on_actionQuit_triggered();

    void on_actionShow_Info_triggered();

    void on_moveButton_clicked();

    void on_actionShow_Area_triggered();

    void on_actionShow_Perimeter_triggered();
      void on_actionOpen_palette_triggered();

    void on_actionLog_Out_triggered();

    void on_actionContact_us_triggered();

    void on_actionAdd_Shape_triggered();

protected:
    void timerEvent (QTimerEvent* event);

private:
    Ui::MainWindow *ui;
    adminLogin *admin;
    contact    *contactInfo;
    Palette    *palette;
    ShapeInfo *shapeInfo;
    QTime initialTime;
};



#endif // MAINWINDOW_H
