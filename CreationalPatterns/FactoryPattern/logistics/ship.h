#ifndef SHIP_H
#define SHIP_H

#include "transport.h"

class Ship : public Transport
{
public:

    Ship();
    ~Ship();

    void deliver() override;

};

#endif // SHIP_H