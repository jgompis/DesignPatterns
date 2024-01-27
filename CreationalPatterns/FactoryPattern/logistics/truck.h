#ifndef TRUCK_H
#define TRUCK_H

#include "transport.h"

/**
 * @brief Truck class
 * 
 */
class Truck : public Transport
{
public:
    Truck();
    ~Truck();

    void deliver() override;
};


#endif // TRUCK_H