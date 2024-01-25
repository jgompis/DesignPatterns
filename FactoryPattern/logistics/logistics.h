#ifndef LOGISTICS_H
#define LOGISTICS_H

// forward declaration
class Transport;

// Abstract class
class Logistics
{
public:
    Logistics();
    ~Logistics();

    virtual Transport* createTransport() = 0;

};

#endif // TRANSPORT_H