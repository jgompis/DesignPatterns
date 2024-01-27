#ifndef EVENTLISTENERS_H
#define EVENTLISTENERS_H

#include <string>


/**
 * @brief Subscriber interface
 * 
 */
class EventListeners
{

public:
    EventListeners(){}
    virtual ~EventListeners(){};

    virtual void update(const std::string &filename)= 0;
};



#endif //EVENTLISTENERS_H