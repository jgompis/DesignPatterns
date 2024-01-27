#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class ShapeVisitor;

class Rectangle : public Shape
{
public:

    Rectangle(double width= 0, double height= 0);

    virtual void accept(ShapeVisitor *v);

    double width() const;
    double height() const;

    void setWidth(double value);
    void setHeight(double value);

private:

    double _width;
    double _height;

};

#endif //RECTANGLE_H