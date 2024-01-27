#include "Subscriber.h"
#include "Publisher.h"
#include <iostream>

Subscriber::Subscriber(){}

Subscriber::~Subscriber(){

    std::cout << "[Subscriber::~Subscriber] -> " << "Unsubscribing" <<  std::endl;
    // Para que se elimine de la lista
    if(_publisher){
        _publisher->unsubscribe(this);
    }

    std::cout << "[Subscriber::~Subscriber] -> " << "Destroying" <<  std::endl;
}

void Subscriber::update(){
    std::cout << "[Subscriber::update] -> " << "Subscriber updated" << std::endl;
}


