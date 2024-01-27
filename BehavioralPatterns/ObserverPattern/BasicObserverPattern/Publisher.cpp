#include "Publisher.h"
#include "Subscriber.h"
#include <iostream>

Publisher::Publisher(){}

Publisher::~Publisher(){
    std::cout << "[Publisher::~Publisher] -> " << "Destroyed"<< std::endl;
}

void Publisher::subscribe(Subscriber* subscriber){
    std::cout << "[Publisher::subscribe] -> " << "Subscriber added: " << subscriber << std::endl;
    if(subscriber != nullptr){
        _subscribers.push_back(subscriber);
        subscriber->_publisher= this;
    }
}

void Publisher::unsubscribe(Subscriber* subscriber){
    std::cout << "[Publisher::unsubscribe] -> " << "Subscriber deleted: " << subscriber << std::endl;

    // Elimina el elemento del arreglo
    for(int i= 0; i < _subscribers.size(); i++){
        if(_subscribers.at(i) == subscriber){
            _subscribers.erase(std::next(_subscribers.begin(), i));
            break;
        }
    }
}

void Publisher::notifySubscribers(){
    std::cout << "[Publisher::notifySubscribers] -> " << "Notifying subscribers" << std::endl;
    for(auto &subscriber: _subscribers){
        subscriber->update(); // actualiza los suscriptores
    }
}