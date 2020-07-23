
#ifndef PALETTE_H
#define PALETTE_H
#include <QDialog>
#include "shape.h"

namespace Ui {
class Palette;
}

class Palette : public QDialog
{
    Q_OBJECT

public:
    explicit Palette(QWidget *parent = nullptr);
    ~Palette();

private slots:
    //Draws shape
    void addShape(Shape* shape);
    //Line
    void on_pushButton_clicked();
    //Polyline
    void on_pushButton_2_clicked();
    //Polygon
    void on_pushButton_3_clicked();
    //Rectangle
    void on_pushButton_4_clicked();
    //Elipse
    void on_pushButton_5_clicked();
    //Text
    void on_pushButton_6_clicked();
    //Circle
    void on_pushButton_7_clicked();
    //Square
    void on_pushButton_8_clicked();
    //Background R
    void on_horizontalSlider_valueChanged(int value);
    //Background G
    void on_horizontalSlider_2_valueChanged(int value);
    //Background B
    void on_horizontalSlider_3_valueChanged(int value);
    //Shape R
    void on_horizontalSlider_6_valueChanged(int value);
    //Shape G
    void on_horizontalSlider_5_valueChanged(int value);
    //Shape B
    void on_horizontalSlider_4_valueChanged(int value);


private:
    Ui::Palette *ui;
    int backgroundR = 255;
    int backgroundG = 255;
    int backgroundB = 255;
    int shapeR = 0;
    int shapeG = 0;
    int shapeB = 0;
    void updateBackground();
};

#endif // PALETTE_H

