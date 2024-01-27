#include "ConcreteSubscriber.h"
#include <iostream>

ConcreteSubscriber::ConcreteSubscriber(){}

ConcreteSubscriber::~ConcreteSubscriber(){
    std::cout << "[ConcreteSubscriber::~ConcreteSubscriber] -> " << "Destroying" <<  std::endl;
}

void ConcreteSubscriber::update(){
    Subscriber::update();
    std::cout << "[ConcreteSubscriber::update] -> " << "Updated" <<  std::endl;
}