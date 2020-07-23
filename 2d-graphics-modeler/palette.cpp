#include "palette.h"
#include "shape.h"
#include "mainwindow.h"
#include "ui_palette.h"
#include <cstdlib>
#include <Qt>

Palette::Palette(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Palette)
{
    ui->setupUi(this);
    setWindowTitle(tr("Palette"));
}

Palette::~Palette()
{
    delete ui;
}

//Add shape
void Palette::addShape(Shape* shape){
    QColor color;
    color.setRed(shapeR);
    color.setGreen(shapeG);
    color.setBlue(shapeB);
    shape->setBrush(color);
    shape->setPen(color);
    int randX = rand() % 1000;
    int randY = rand() % 500;
    shape->move(randX, randY);
    MainWindow* w = dynamic_cast<MainWindow*>(this->parentWidget());
    w->renderArea->getShapeVector().push_back(shape);
    w->renderArea->update();
}

//Line
void Palette::on_pushButton_clicked()
{
    addShape(new Line());
}

//Polyline
void Palette::on_pushButton_2_clicked()
{
    addShape(new PolyLine());
}

//Polygon
void Palette::on_pushButton_3_clicked()
{
    addShape(new Polygon());
}
//Rectangle
void Palette::on_pushButton_4_clicked()
{
    addShape(new Rectangle());
}
//Elipse
void Palette::on_pushButton_5_clicked()
{
    addShape(new Ellipse());
}
//Text
void Palette::on_pushButton_6_clicked()
{
    addShape(new Text());
}

//Circle
void Palette::on_pushButton_7_clicked()
{
    addShape(new Circle());
}

//Square
void Palette::on_pushButton_8_clicked()
{
    addShape(new Square());
}


void Palette::updateBackground(){
    MainWindow* w = dynamic_cast<MainWindow*>(this->parentWidget());
    w->renderArea->setStyleSheet(QString("background:rgb(%1,%2,%3);").arg(backgroundR).arg(backgroundG).arg(backgroundB));
    this->ui->plainTextEdit->setPlainText(QString("%1").arg(backgroundR));
    this->ui->plainTextEdit_2->setPlainText(QString("%1").arg(backgroundG));
    this->ui->plainTextEdit_3->setPlainText(QString("%1").arg(backgroundB));
    this->ui->plainTextEdit_4->setPlainText(QString("%1").arg(shapeR));
    this->ui->plainTextEdit_5->setPlainText(QString("%1").arg(shapeG));
    this->ui->plainTextEdit_6->setPlainText(QString("%1").arg(shapeB));
}

//Background R
void Palette::on_horizontalSlider_valueChanged(int value)
{
    backgroundR = value;
    updateBackground();

}

//Background G
void Palette::on_horizontalSlider_2_valueChanged(int value)
{
    backgroundG = value;
    updateBackground();
}

//Background B
void Palette::on_horizontalSlider_3_valueChanged(int value)
{
    backgroundB = value;
    updateBackground();
}

//Shape R
void Palette::on_horizontalSlider_6_valueChanged(int value)
{
    shapeR = value;
    updateBackground();
}
//Shape G
void Palette::on_horizontalSlider_5_valueChanged(int value)
{
    shapeG = value;
    updateBackground();
}
//Shape B
void Palette::on_horizontalSlider_4_valueChanged(int value)
{
    shapeB = value;
    updateBackground();
}

