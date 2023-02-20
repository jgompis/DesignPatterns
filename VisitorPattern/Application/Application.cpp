#include "Application.h"
#include "Rectangle.h"
#include "Circle.h"
#include "AreaCalculator.h"

#include <iostream>

Application::Application(){
    // some shapes
    _shapes.push_back(new Rectangle(50, 50));
    _shapes.push_back(new Circle(40));
}

Application::~Application(){
    for(auto &shape: _shapes){
        delete shape;
    }
}

void Application::calculateAreas(){

    AreaCalculator calculator;

    for(auto &shape: _shapes){
        shape->accept(&calculator);
    }
}