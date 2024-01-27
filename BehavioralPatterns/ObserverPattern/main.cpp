#include <iostream>

#include "Publisher.h"
#include "ConcreteSubscriber.h"

#include "Editor.h"
#include "EventManager.h"
#include "LoggingListener.h"
#include "EmailAlertsListener.h"

#define BASIC   0
#define GURU    1

int main(int argc, char *argv[]){

#if BASIC

    // BasicObserverPattern
    Publisher publisher;
    ConcreteSubscriber suscriber;
    ConcreteSubscriber suscriber2;
    publisher.subscribe(&suscriber);
    publisher.subscribe(&suscriber2); 
    publisher.notifySubscribers();

#endif

#if GURU

    //GuruObserverPattern
    Editor *editor= new Editor();
    LoggingListener *loggingListener= new LoggingListener(
        "log.txt",
        "Someone has opened the file: %s");
    editor->events.get()->subscribe("open", loggingListener);

    EmailAlertsListener *emailAlertsListener= new EmailAlertsListener(
        "jgompis@gmail.com", 
        "Someone has changed the file: %s");
    editor->events.get()->subscribe("save", emailAlertsListener);
    editor->openFile("aFile.txt");
    editor->saveFile();
    delete loggingListener;
    delete emailAlertsListener;
    delete editor;

#endif

    return 0;
}