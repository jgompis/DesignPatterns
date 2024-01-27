#ifndef EMAILALERTSLISTENER_H
#define EMAILALERTSLISTENER_H

#include "EventListeners.h"

class EmailAlertsListener : public EventListeners
{

public:
    EmailAlertsListener(const std::string &email, const std::string &message);
    ~EmailAlertsListener(){}

    virtual void update(const std::string& filename);

private:

    std::string _email;
    std::string _message;

};

#endif //EMAILALERTSLISTENER_H