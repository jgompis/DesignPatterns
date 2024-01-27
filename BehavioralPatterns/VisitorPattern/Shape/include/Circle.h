#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class ShapeVisitor;

class Circle : public Shape 
{
public:
    Circle(double radius= 0);

    void accept(ShapeVisitor *v);

    double radius() const;

    void setRadius(double value);

private:

    double _radius;

};

#endif //CIRCLE_H