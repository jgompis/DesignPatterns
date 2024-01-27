#ifndef LOGGINGLISTENER_H
#define LOGGINGLISTENER_H

#include "EventListeners.h"
#include <fstream>

/**
 * @brief Concrete subscriber
 * 
 */
class LoggingListener : public EventListeners
{

public:
    LoggingListener(const std::string &logFilename, const std::string &message);
    ~LoggingListener();

    virtual void update(const std::string& filename);

private:

    std::fstream _logFile;
    std::string _message;

};

#endif //LOGGINGLISTENER_H