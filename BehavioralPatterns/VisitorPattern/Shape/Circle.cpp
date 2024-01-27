#include "Circle.h"
#include "ShapeVisitor.h"

Circle::Circle(double radius):
    _radius(radius)
{}

void Circle::accept(ShapeVisitor *v){
    v->visit(this);
}

double Circle::radius() const {return _radius;}

void Circle::setRadius(double value){
    if(_radius != value){
        _radius= value;
    }
}
