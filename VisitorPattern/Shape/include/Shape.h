#ifndef SHAPE_H
#define SHAPE_H

class ShapeVisitor;

class Shape
{
public:

    virtual void accept(ShapeVisitor* v)= 0;

};

#endif //SHAPE_H