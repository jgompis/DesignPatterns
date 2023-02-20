#include "AreaCalculator.h"
#include "Rectangle.h"
#include "Circle.h"
#include "math.h"
#include <iostream>
#include <string>

AreaCalculator::AreaCalculator(){}

AreaCalculator::~AreaCalculator(){}

void AreaCalculator::visit(Rectangle* rectangle){
    // Calculates area for a rectangle
    double area= rectangle->width() * rectangle->height();
    std::cout << "Rectangle area: " << area << "m2" << std::endl;
}

void AreaCalculator::visit(Circle* circle){
    // Calculates area for a circle
    double area= pow(circle->radius(), 2) * M_PI;
    std::cout << "Circle area: " << area << "m2" << std::endl;
}