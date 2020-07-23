#include "shapebuffer.h"

ShapeBuffer::ShapeBuffer()
{
    shape=LINE;
}

void ShapeBuffer::readIn(QTextStream& is)
{
        is.read(1);
        QString s = is.read(9);
        QString myString = is.read(1);

        if(myString.isEmpty())
            throw MyException();
        shapeID = setInt(myString);
        is.read(1);
        s = is.read(11);
        if (shapeID == 1 || shapeID == 8)
            myString = is.read(4);
        else if (shapeID == 2)
            myString = is.read(8);
        else if (shapeID == 3 || shapeID == 6)
            myString = is.read(7);
        else if (shapeID == 4)
            myString = is.read(9);
        else if (shapeID == 5 || shapeID == 7)
            myString = is.read(6);
        shape = setShape(myString);
        is.read(1);
    switch (toupper(shape)) {
        case LINE:
        {
            s = is.read(17);
            myString = is.read(15);
            setLineDimensions(myString, one, two);
            is.read(1);
            s = is.read(10);
            myString = is.read(4);
            pen.setColor(setColor(myString));
            is.read(1);
            s = is.read(10);
            myString = is.read(1);
            pen.setWidth(setInt(myString));
            is.read(1);
            s = is.read(10);
            myString = is.read(11);
            pen.setStyle(setPenStyle(myString));
            is.read(1);
            s = is.read(13);
            myString = is.read(7);
            pen.setCapStyle(setPenCapStyle(myString));
            is.read(1);
            s = is.read(14);
            myString = is.read(9);
            pen.setJoinStyle(setPenJoinStyle(myString));
            brush.setStyle(Qt::NoBrush);
        } break;
        case POLYLINE:{
           s = is.read(17);
           myString = is.read(34);
           qPolygon = setPolygonDimensions(myString);
           is.read(1);
           s = is.read(10);
           myString = is.read(5);
           pen.setColor(setColor(myString));
           is.read(1);
           s = is.read(10);
           myString = is.read(1);
           pen.setWidth(setInt(myString));
           is.read(1);
           s = is.read(10);
           myString = is.read(9);
           pen.setStyle(setPenStyle(myString));
           is.read(1);
           s = is.read(13);
           myString = is.read(7);
           pen.setCapStyle(setPenCapStyle(myString));
           is.read(1);
           s = is.read(14);
           myString = is.read(9);
           pen.setJoinStyle(setPenJoinStyle(myString));
           brush.setStyle(Qt::NoBrush);


        } break;
        case POLYGON:{

            s = is.read(17);
            myString = is.read(34);
            qPolygon = setPolygonDimensions(myString);
            is.read(1);
            s = is.read(10);
            myString = is.read(4);
            pen.setColor(setColor(myString));
            is.read(1);
            s = is.read(10);
            myString = is.read(1);
            pen.setWidth(setInt(myString));
            is.read(1);
            s = is.read(10);
            myString = is.read(14);
            pen.setStyle(setPenStyle(myString));
            is.read(1);
            s = is.read(13);
            myString = is.read(7);
            pen.setCapStyle(setPenCapStyle(myString));
            is.read(1);
            s = is.read(14);
            myString = is.read(9);
            pen.setJoinStyle(setPenJoinStyle(myString));
            is.read(1);
            s = is.read(12);
            myString = is.read(6);
            brush.setColor(setColor(myString));
            is.read(1);
            s = is.read(12);
            myString = is.read(12);
            brush.setStyle(setBrushStyle(myString));
        } break;
        case ELLIPSE: {
            s = is.read(17);
            myString = is.read(18);
            qRect = setEllipseOrSquare(myString);
            is.read(1);
            s = is.read(10);
            myString = is.read(5);
            pen.setColor(setColor(myString));
            is.read(1);
            s = is.read(10);
            myString = is.read(2);
            pen.setWidth(setInt(myString));
            is.read(1);
            s = is.read(10);
            myString = is.read(9);
            pen.setStyle(setPenStyle(myString));
            is.read(1);
            s = is.read(13);
            myString = is.read(7);
            pen.setCapStyle(setPenCapStyle(myString));
            is.read(1);
            s = is.read(14);
            myString = is.read(9);
            pen.setJoinStyle(setPenJoinStyle(myString));
            is.read(1);
            s = is.read(12);
            myString = is.read(5);
            brush.setColor(setColor(myString));
            is.read(1);
            s = is.read(12);
            myString = is.read(7);
            brush.setStyle(setBrushStyle(myString));
        } break;
        case RECTANGLE:
        {
            s = is.read(17);
            myString = is.read(17);
            qRect = setEllipseOrSquare(myString);
            is.read(1);
            s = is.read(10);
            myString = is.read(4);
            pen.setColor(setColor(myString));
            is.read(1);
            s = is.read(10);
            myString = is.read(1);
            pen.setWidth(setInt(myString));
            is.read(1);
            s = is.read(10);
            myString = is.read(8);
            pen.setStyle(setPenStyle(myString));
            is.read(1);
            s = is.read(13);
            myString = is.read(8);
            pen.setCapStyle(setPenCapStyle(myString));
            is.read(1);
            s = is.read(14);
            myString = is.read(9);
            pen.setJoinStyle(setPenJoinStyle(myString));
            is.read(1);
            s = is.read(12);
            myString = is.read(3);
            brush.setColor(setColor(myString));
            is.read(1);
            s = is.read(12);
            myString = is.read(10);
            brush.setStyle(setBrushStyle(myString));
        }break;
        case SQUARE:
        {
            s = is.read(17);
            myString = is.read(13);
            qRect = setEllipseOrSquare(myString);
            is.read(1);
            s = is.read(10);
            myString = is.read(3);
            pen.setColor(setColor(myString));
            is.read(1);
            s = is.read(10);
            myString = is.read(1);
            pen.setWidth(setInt(myString));
            is.read(1);
            s = is.read(10);
            myString = is.read(9);
            pen.setStyle(setPenStyle(myString));
            is.read(1);
            s = is.read(13);
            myString = is.read(8);
            pen.setCapStyle(setPenCapStyle(myString));
            is.read(1);
            s = is.read(14);
            myString = is.read(9);
            pen.setJoinStyle(setPenJoinStyle(myString));
            is.read(1);
            s = is.read(12);
            myString = is.read(4);
            brush.setColor(setColor(myString));
            is.read(1);
            s = is.read(12);
            myString = is.read(10);
            brush.setStyle(setBrushStyle(myString));

        } break;
        case CIRCLE:
        {
            s = is.read(17);
            myString = is.read(13);
            qRect = setEllipseOrSquare(myString);
            is.read(1);
            s = is.read(10);
            myString = is.read(5);
            pen.setColor(setColor(myString));
            is.read(1);
            s = is.read(10);
            myString = is.read(2);
            pen.setWidth(setInt(myString));
            is.read(1);
            s = is.read(10);
            myString = is.read(9);
            pen.setStyle(setPenStyle(myString));
            is.read(1);
            s = is.read(13);
            myString = is.read(7);
            pen.setCapStyle(setPenCapStyle(myString));
            is.read(1);
            s = is.read(14);
            myString = is.read(9);
            pen.setJoinStyle(setPenJoinStyle(myString));
            is.read(1);
            s = is.read(12);
            myString = is.read(7);
            brush.setColor(setColor(myString));
            is.read(1);
            s = is.read(12);
            myString = is.read(12);
            brush.setStyle(setBrushStyle(myString));
        } break;
        case TEXT:
        {
            s = is.read(17);
            myString = is.read(17);
            qRect = setQRect(myString);
            is.read(1);
            s = is.read(12);
            myString = is.read(37);
            qStringText = setQStringText(myString);
            is.read(1);
            s = is.read(11);
            myString = is.read(4);
            pen.setColor(setColor(myString));
            is.read(1);
            s = is.read(15);
            myString = is.read(11);
            alignFlag = setTextAlignment(myString);
            is.read(1);
            s = is.read(15);
            myString = is.read(2);
            font.setPointSize(setInt(myString));
            is.read(1);
            s = is.read(16);
            myString = is.read(13);
            font.setFamily(setQStringText(myString));
            is.read(1);
            s = is.read(15);
            myString = is.read(11);
            font.setStyle(setTextFontStyle(myString));
            is.read(1);
            s = is.read(16);
            myString = is.read(6);
            font.setWeight(setTextFontWeight(myString));
        } break;
    }//end switch block
}

void ShapeBuffer::readOut(QTextStream & os)
{
    os << "ShapeId: " << getShapeID() << endl;
    os << "ShapeType: " << printShapeType() << endl;
    os << "ShapeDimensions: " << printShapeDimensions() << endl;

    switch(shape)
    {
        case LINE: os << printPen() << endl << printBrush(); break;
        case POLYLINE: os<< printPen() << endl << printBrush(); break;
        case POLYGON: os<< printPen() << endl << printBrush(); break;
        case RECTANGLE: os<< printPen() << endl << printBrush(); break;
        case SQUARE: os<< printPen() << endl << printBrush(); break;
        case ELLIPSE: os<< printPen() << endl << printBrush(); break;
        case CIRCLE: os<< printPen() << endl << printBrush(); break;
        case TEXT: {
                os << "TextString: " << qStringText <<endl;
                os << "TextColor: " << printGobalColor(pen.color()) << endl;
                os << "TextAlignment: " << printAlign() << endl;
                os << printFont() << endl;
            } break;
    }
}

int ShapeBuffer::setInt(QString& arg)const
{
    //QStringList myList = arg.split(' ');
    return arg.toInt();
}
ShapeType ShapeBuffer::setShape(QString& string3)const
{    if (string3.contains("Polyline"))
    return POLYLINE;
else if (string3.contains("Line"))
    return LINE;
else if (string3.contains("Polygon"))
    return POLYGON;
else if (string3.contains("Square"))
    return SQUARE;
else if (string3.contains("Rectangle"))
    return RECTANGLE;
else if (string3.contains("Ellipse"))
    return ELLIPSE;
else if (string3.contains("Circle"))
    return CIRCLE;
else if (string3.contains("Text"))
    return TEXT;
else
    throw MyException();
}

Qt::PenStyle ShapeBuffer::setPenStyle(QString& x) const
{
    if(x.contains("NoPen"))
        return Qt::NoPen;
    else if(x.contains("SolidLine"))
        return Qt::SolidLine;
    else if(x.contains("DashDotDotLine"))
        return Qt::DashDotDotLine;
    else if(x.contains("DashDotLine"))
        return Qt::DashDotLine;
    else if(x.contains("DotLine"))
        return Qt::DotLine;
    else if(x.contains("DashLine"))
        return Qt::DashLine;
    else
        throw MyException();
}

Qt::PenCapStyle ShapeBuffer::setPenCapStyle(QString& x) const
{
    if(x.contains("FlatCap"))
        return Qt::FlatCap;
    else if(x.contains("SquareCap"))
        return Qt::SquareCap;
    else if(x.contains("RoundCap"))
        return Qt::RoundCap;
    else
        throw MyException();
}

Qt::PenJoinStyle ShapeBuffer::setPenJoinStyle(QString& x) const
{
    if(x.contains("MiterJoin"))
        return Qt::MiterJoin;
    else if(x.contains("BevelJoin"))
        return Qt::BevelJoin;
    else if(x.contains("RoundJoin"))
        return Qt::RoundJoin;
    else
        throw MyException();
}

Qt::GlobalColor ShapeBuffer::setColor(QString& x) const
{
    if(x.contains("white"))
        return Qt::white;
    else if(x.contains("black"))
        return Qt::black;
    else if(x.contains("red"))
        return Qt::red;
    else if(x.contains("green"))
        return Qt::green;
    else if(x.contains("blue"))
        return Qt::blue;
    else if(x.contains("cyan"))
        return Qt::cyan;
    else if(x.contains("magenta"))
        return Qt::magenta;
    else if(x.contains("yellow"))
        return Qt::yellow;
    else if(x.contains("gray"))
        return Qt::gray;
    else
        throw MyException();
}

Qt::BrushStyle ShapeBuffer::setBrushStyle(QString & x) const
{
    if(x.contains("SolidPattern"))
        return Qt::SolidPattern;
    else if(x.contains("HorPattern"))
        return Qt::HorPattern;
    else if(x.contains("VerPattern"))
        return Qt::VerPattern;
    else if(x.contains("NoBrush"))
        return Qt::NoBrush;
    else
        throw MyException();
}

Qt::AlignmentFlag ShapeBuffer::setTextAlignment(QString & x) const
{
    if(x.contains("AlignLeft"))
        return Qt::AlignLeft;
    else if(x.contains("AlignRight"))
        return Qt::AlignRight;
    else if(x.contains("AlignTop"))
        return Qt::AlignTop;
    else if(x.contains("AlignBottom"))
        return Qt::AlignBottom;
    else if(x.contains("AlignCenter"))
        return Qt::AlignCenter;
    else
        throw MyException();

}

QFont::Style ShapeBuffer::setTextFontStyle(QString & x) const
{
    if(x.contains("StyleNormal"))
        return QFont::StyleNormal;
    else if(x.contains("StyleItalic"))
        return QFont::StyleItalic;
    else if(x.contains("StyleOblique"))
        return QFont::StyleOblique;
    else
        throw MyException();
}

QFont::Weight ShapeBuffer::setTextFontWeight(QString & x) const
{
    if(x.contains("Thin"))
        return QFont::Thin;
    else if(x.contains("Normal"))
        return QFont::Normal;
    else if(x.contains("Bold"))
        return QFont::Bold;
    else
        throw MyException();
}

void ShapeBuffer::setLineDimensions
(QString & x, QPoint& one, QPoint& two)
{
    x.remove(',');
    QStringList myList = x.split(' ');
    one.setX(myList[0].toInt());
    one.setY(myList[1].toInt());
    two.setX(myList[2].toInt());
    two.setY(myList[3].toInt());
}

QPolygon ShapeBuffer::setPolygonDimensions(QString & x) const
{
    int size = 0;
    x.remove(',');
    QStringList myList = x.split(' ');
    QPoint points[4];
    QPolygon temp;
    for (int j = 0; j<myList.size()/2; j++)
    {
            points[j].setX(myList[size].toInt());
            points[j].setY(myList[size + 1].toInt());
            size += 2;
    }
    temp << points[0] << points[1] << points[2] << points[3];

    return temp;
}

QRect ShapeBuffer::setQRect(QString & x) const
{
    x.remove(',');
    QStringList myList = x.split(' ');
    QRect temp;
    temp.setX(myList[0].toInt());
    temp.setY(myList[1].toInt());
    temp.setWidth(myList[2].toInt());
    temp.setHeight(myList[3].toInt());
    //constructor variables
    //(int x, int y, int width, int height)
    return temp;


}

QRect ShapeBuffer::setEllipseOrSquare(QString & x) const
{
    x.remove(',');
    QStringList myList = x.split(' ');
    QRect temp;
    if (myList.size() == 4)
    {
        temp.setX(myList[0].toInt());
        temp.setY(myList[1].toInt());
        temp.setWidth(myList[2].toInt());
        temp.setHeight(myList[3].toInt());
    }
    else
    {
        temp.setX(myList[0].toInt());
        temp.setY(myList[1].toInt());
        temp.setWidth(myList[2].toInt());
        temp.setHeight(myList[2].toInt());
    }
    //constructor variables
    //(int x, int y, int width, int height)
    return temp;
}

QString ShapeBuffer::setQStringText(QString & x) const
{
    QStringList myList = x.split(':');
    QString temp = myList[0];
    return temp.trimmed();
}

QString ShapeBuffer::printShapeType()const
{
    switch(shape)// no need for break. Using return.
    {
    case LINE: return "Line";
    case POLYLINE: return "Polyline";
    case POLYGON: return "Polygon";
    case RECTANGLE: return "Rectangle";
    case SQUARE: return "Square";
    case ELLIPSE: return "Ellipse";
    case CIRCLE: return "Circle";
    case TEXT: return "Text";
    }
}

QString ShapeBuffer::printShapeDimensions() const
{
    QString temp;
    switch(shape)// no need for breaks because of return
    {
    case LINE: {
        temp = QString::number(one.x()) + ", "
                +  QString::number(one.y()) + ", "
                +   QString::number(two.x()) +  ", "
                +   QString::number(two.y());
        return temp;
    }
    case POLYLINE: {

        return temp;
    }
    case POLYGON: {
        for (int i = 0; i <  qPolygon.size(); i++)
        {
            if(i==0)
                temp = QString::number(qPolygon.point(i).x()) + ", "
                        + QString::number(qPolygon.point(i).y());
            else

                temp = temp + ", " +  QString::number(qPolygon.point(i).x()) + ", "
                        + QString::number(qPolygon.point(i).y());
        }
        return temp;
    }
    case SQUARE: {

        return temp;
    }
    case CIRCLE: {
        temp =   QString::number(qRect.x()) + ", "
                + QString::number(qRect.y()) + ", "
                + QString::number(qRect.width());
        return temp;
    }

    case RECTANGLE:
    case ELLIPSE:
    case TEXT:
    {
        temp =   QString::number(qRect.x()) + ", "
                + QString::number(qRect.y()) + ", "
                + QString::number(qRect.width()) + ", "
                + QString::number(qRect.height());
        return temp;
    }
    }
}

QString ShapeBuffer::printPen() const
{
   QString temp = "PenColor: " + printGobalColor(pen.color()) + '\n';

   temp = temp + "PenWidth: "+ QString::number(pen.width()) + '\n';

   switch(pen.style())
   {
   case Qt::NoPen: temp = temp + "PenStyle: NoPen" + '\n'; break;
   case Qt::SolidLine: temp = temp + "PenStyle: SolidLine" +'\n'; break;
   case Qt::DashDotDotLine: temp = temp + "PenStyle: DashDotDotLine" + '\n'; break;
   case Qt::DashDotLine: temp = temp + "PenStyle: DashDotLine" + '\n'; break;
   case Qt::DotLine: temp = temp + "PenStyle: DotLine" + '\n'; break;
   case Qt::DashLine: temp = temp + "PenStyle: DashLine" + '\n';break;
   default: temp = temp + "PenStyle: SolidLine"+'\n';
   }

   switch(pen.capStyle())
   {
   case Qt::FlatCap:temp = temp  + "PenCapStyle: FlatCap" + '\n';break;
   case Qt::RoundCap:temp = temp + "PenCapStyle: RoundCap" + '\n';break;
   case Qt::SquareCap:temp = temp + "PenCapStyle: SquareCap" + '\n';break;
   case Qt::MPenCapStyle:temp = temp + "PenCapStyle: MPenCapStyle" + '\n';break;
   }

   switch(pen.joinStyle())
   {
   case Qt::MiterJoin: temp = temp + "PenJoinStyle: MiterJoin";break;
   case Qt::BevelJoin: temp = temp + "PenJoinStyle: BevelJoin";break;
   case Qt::RoundJoin: temp = temp + "PenJoinStyle: RoundJoin";break;
   case Qt::MPenJoinStyle: temp = temp + "PenJoinStyle: MPenJoinStyle";break;
   case Qt::SvgMiterJoin: temp = temp + "PenJoinStyle: SvgMiterJoin";break;
   }
   return temp;
}

QString ShapeBuffer::printBrush() const
{
    QString temp = "BrushColor: " + printGobalColor(brush.color()) + '\n';
    switch (brush.style())
    {
    case Qt::NoBrush:temp = temp + "BrushStyle: NoBrush" + '\n';break;
    case Qt::SolidPattern:temp = temp + "BrushStyle: SolidPattern" + '\n';break;
    case Qt::HorPattern: temp = temp + "BrushStyle: HorPattern" + '\n';break;
    case Qt::VerPattern: temp = temp + "BrushStyle: VerPattern" + '\n';break;
    default: temp = temp + "BrushStyle: NoBrush" + '\n';break;
    }
    return temp;
}

QString ShapeBuffer::printAlign() const
{
   switch(alignFlag)
   {
   case Qt::AlignLeft: return "AlignLeft";
   case Qt::AlignRight:return "AlignRight";
   case Qt::AlignTop:return "AlignTop";
   case Qt::AlignBottom:return "AlignBottom";
   case Qt::AlignCenter:return "AlignCenter";
   default: return "AlignLeft";
   }
}

QString ShapeBuffer::printFont() const
{
   QString temp =  "TextPointSize: "+ QString::number(font.pointSize()) + '\n';
   temp = temp + "TextFontFamily: " + QVariant(font.family()).toString() + '\n';
   temp = temp + "TextFontStyle: " + printFontStyle() + '\n';
   temp = temp + "TextFontWeight: " + printFontWeight() ;
   return temp;
}

QString ShapeBuffer::printFontStyle() const
{
    switch(font.style())
    {
    case QFont::StyleNormal: return "StyleNormal";
    case QFont::StyleItalic: return "StyleItalic";
    case QFont::StyleOblique:return "StlyeOblique";
    }
}

QString ShapeBuffer::printFontWeight() const
{
    switch(font.weight())
    {
    case QFont::Thin: return "Thin";
    case QFont::Light: return "Light";
    case QFont::Normal: return "Normal";
    case QFont::Bold: return "Bold";
    default: return "Thin";
    }
}

QString ShapeBuffer::printGobalColor(QColor arg) const
{

    if(arg==Qt::red) return "red";
    if(arg==Qt::black) return "black";
    if(arg==Qt::white) return "white";
    if(arg==Qt::green) return "green";
    if(arg==Qt::blue) return "blue";
    if(arg== Qt::cyan) return "cyan";
    if(arg==Qt::magenta) return "magenta";
    if(arg== Qt::yellow) return "yellow";
    if(arg== Qt::gray) return "gray";
    return "red";
}

