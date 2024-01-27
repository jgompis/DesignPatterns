#ifndef CONCRETESUBSCRIBER_H
#define CONCRETESUBSCRIBER_H

#include "Subscriber.h"

class ConcreteSubscriber : public Subscriber 
{
public:

    ConcreteSubscriber();
    ~ConcreteSubscriber();

    virtual void update();

};

#endif //CONCRETESUBSCRIBER_H