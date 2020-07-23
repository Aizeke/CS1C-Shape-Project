#include "renderarea.h"
#include <QStyleOption>
#include <QMouseEvent>
#include <QMessageBox>

const QSize minSize(1000,500);

RenderArea::RenderArea(QWidget *parent) : QWidget(parent)
{
    setMinimumSize(minSize);
    setBackgroundRole(QPalette::Base);
    move(120, 36);
    setStyleSheet("background-color:white;");
    setUpdatesEnabled(true);
    setMouseTracking(true);
}

void RenderArea::mousePressEvent(QMouseEvent *event){
    int x = event->x();
    int y = event->y();
    int index = 0;
    if(indexToChange == -1){
    for (auto it = shapeVector.begin(); it != shapeVector.end(); it++){
        Shape* shape = (*it);
        if(x < shape->getX() + shape->perimeter() / 8 && x > shape->getX() - shape->perimeter() / 8){
            if(y < shape->getY() + shape->perimeter() / 8 && y > shape->getY() - shape->perimeter() / 8){
                indexToChange = index;
            }
        }
        index++;
    }
    }
    if(index == 0 && indexToChange != -1){
        indexToChange = -1;
    }
    repaint();
}


void RenderArea::mouseMoveEvent(QMouseEvent *event){
    if(isAdmin)
    {
    int x = event->x();
    int y = event->y();
    if( indexToChange < shapeVector.size() && indexToChange > -1)
    (*(shapeVector.begin()+indexToChange))->move(x,y);
    repaint();
    }
}

void RenderArea::createShapeBuffer(QTextStream& is)
{
    try {
        if(buffer.size()!=0)
            buffer.resize(0);
        if(shapeVector.size()!=0)
            shapeVector.resize(0);
        while(!is.atEnd())
        {
            ShapeBuffer x;
            x.readIn(is);
            buffer.push_back(x);
            is.readLine();//get rid of the space at BOTTOM
        }
        shapeBufferReady=true;
    }

    catch (MyException) {
        shapeBufferReady=false;
        buffer.resize(0);
        QMessageBox::information(this, "CORRUPT FILE", "Correct the errors in the database or select another file.");

    }
}

custom::vector<Shape*>& RenderArea::getShapeVector(){
    return shapeVector;
}

void RenderArea::transferToShapes()
{
   for(auto sbIt = buffer.begin();sbIt != buffer.end(); sbIt++)
   {
       ShapeType shapeType = sbIt->getShape();
       switch(shapeType)
       {
       case LINE: shapeVector.push_back(new Line(*sbIt));
           break;
       case POLYLINE: shapeVector.push_back(new PolyLine(*sbIt));
           break;
       case POLYGON: shapeVector.push_back(new Polygon(*sbIt));
           break;
       case RECTANGLE: shapeVector.push_back(new Rectangle(*sbIt));
           break;
       case SQUARE: shapeVector.push_back(new Square(*sbIt));
           break;
       case ELLIPSE: shapeVector.push_back(new Ellipse(*sbIt));
           break;
       case CIRCLE:shapeVector.push_back(new Circle(*sbIt));
           break;
       case TEXT: shapeVector.push_back(new Text(*sbIt));
           break;
       }//end of switch

   }// end of for loop
}

void RenderArea::paintEvent(QPaintEvent* event)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    QWidget::paintEvent(event);
    // QPainter painter(this);
    if(shapeBufferReady == true)
    {
          transferToShapes();
          shapeBufferReady=false;
    }

    for (auto it = shapeVector.begin(); it != shapeVector.end(); it++)
    {
            (*it)->passQPainter(&p);
            (*it)->draw();
    }
}

void RenderArea::readOut(QTextStream& os)
{
    for (auto it = shapeVector.begin(); it != shapeVector.end(); it++)
    {
        ShapeBuffer temp;
        (*it)->setShapeBuffer(temp);
        if(it != shapeVector.begin())//ensures space is attached at top
            os<<endl;
        temp.readOut(os);
    }
}

void RenderArea::setIndex(int x)
{
    if(x<=shapeVector.size())
        indexToChange= x-1;
}
