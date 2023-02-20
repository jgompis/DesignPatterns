#include "Rectangle.h"
#include "ShapeVisitor.h"

Rectangle::Rectangle(double width, double height):
    _width(width), _height(height)
{}

void Rectangle::accept(ShapeVisitor *v){
    v->visit(this);
}

double Rectangle::width() const {return _width;}

double Rectangle::height() const {return _height;}

void Rectangle::setWidth(double value){
    if(_width != value){
        _width= value;
    }
}

void Rectangle::setHeight(double value){
    if(_height != value){
        _height= value;
    }
}
