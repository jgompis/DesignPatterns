#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

class Publisher;

class Subscriber {

public:

    Subscriber();
    virtual ~Subscriber();

    virtual void update() = 0; // pure virtual function

private:

    friend class Publisher;

    Publisher *_publisher;

};

#endif //SUBSCRIBER_H