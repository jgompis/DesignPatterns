#ifndef AREACALCULATOR_H
#define AREACALCULATOR_H

#include "ShapeVisitor.h"

class AreaCalculator : public ShapeVisitor 
{
public:

    AreaCalculator();
    virtual ~AreaCalculator();

    virtual void visit(Rectangle* rectangle);
    virtual void visit(Circle* circle);
    
private:

    double _totalArea;

};

#endif //AREACALCULATOR_H