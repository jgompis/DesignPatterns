#ifndef PUBLISHER_H
#define PUBLISHER_H

#include <vector>

class Subscriber;

// class with interesting events
class Publisher 
{

public:

    Publisher();
    virtual ~Publisher();

    void subscribe(Subscriber* subscriber);
    void unsubscribe(Subscriber* subscriber);
    void notifySubscribers();

private:

    std::vector<Subscriber*> _subscribers; // suscription list

};

#endif //PUBLISHER_H