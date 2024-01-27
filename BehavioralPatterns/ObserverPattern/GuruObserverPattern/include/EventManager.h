#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H

#include <unordered_map>
#include <unordered_set>
#include <string>

class EventListeners;

/**
 * @brief Base Publisher, helper class
 * 
 */
class EventManager
{
public:

    EventManager();
    ~EventManager();

    void subscribe(const std::string &type, EventListeners *listener);
    void unsubscribe(const std::string &type, EventListeners *listener);
    void notify(const std::string &type, const std::string &data); // TODO: modificar

private:

    std::unordered_map<std::string, std::unordered_set<EventListeners*>> _listeners;

};

#endif //EVENTMANAGER_H