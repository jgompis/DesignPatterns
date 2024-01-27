#ifndef SHAPE_VISITOR_H
#define SHAPE_VISITOR_H

class Rectangle;
class Circle;

class ShapeVisitor {

public:

    ShapeVisitor(){};
    virtual ~ShapeVisitor(){};

    virtual void visit(Rectangle *rectangle)= 0;
    virtual void visit(Circle *circle)= 0;

};

#endif