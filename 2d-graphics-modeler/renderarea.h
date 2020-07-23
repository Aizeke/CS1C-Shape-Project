#ifndef renderarea_h
#define renderarea_h

#include <QObject>
#include <QWidget>
#include "shape.h"
#include "line.h"
#include "polyLine.h"
#include "polygon.h"
#include "rectangle.h"
#include "circle.h"
#include "ellipse.h"
#include "square.h"
#include "vector.h"
#include "text.h"
#include "selection_sort.h"

class RenderArea : public QWidget
{
    Q_OBJECT
public:
    explicit RenderArea(QWidget *parent = nullptr);
    void createShapeBuffer(QTextStream&);
    custom::vector<Shape*>& getShapeVector();
    void readOut(QTextStream&);
    void setIndex(int);
    void enableAdmin(){isAdmin=true;}
    void disableAdmin(){isAdmin=false;}
protected:
    void transferToShapes();
    void paintEvent(QPaintEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
signals:

public slots:
private:
    custom::vector<ShapeBuffer> buffer;
    custom::vector<Shape*> shapeVector;
    bool isAdmin = false;
    bool shapeBufferReady = false;
    int indexToChange = -1;
};



#endif /* renderarea_h */
