#include "EventManager.h"
#include "EventListeners.h"

EventManager::EventManager(){}

EventManager::~EventManager(){}

void EventManager::subscribe(const std::string& type, EventListeners *listener){
    _listeners[type].insert(listener);
}

void EventManager::unsubscribe(const std::string &type, EventListeners *listener){
    _listeners[type].erase(listener);    
}

void EventManager::notify(const std::string &type, const std::string& data){

    auto &typeListeners= _listeners[type];
    for(auto &listener: typeListeners){
        listener->update(data);
    }
}