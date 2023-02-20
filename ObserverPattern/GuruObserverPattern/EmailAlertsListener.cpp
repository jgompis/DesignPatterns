#include "EmailAlertsListener.h"
#include <iostream>

EmailAlertsListener::EmailAlertsListener(const std::string &email, const std::string &message):
    _email(email), _message(message)
{}

void EmailAlertsListener::update(const std::string &filename){

    std::string rep= "%s";
    std::string wData= _message.replace(_message.find(rep), rep.size(), filename);

    std::cout << wData << std::endl;
}