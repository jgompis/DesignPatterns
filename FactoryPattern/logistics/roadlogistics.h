#ifndef ROADLOGISTICS_H
#define ROADLOGISTICS_H

#include "logistics.h"

/**
 * @brief RoadLogistics class
 * 
 */
class RoadLogistics : public Logistics
{
public:

    RoadLogistics();
    ~RoadLogistics();

    Transport* createTransport() override;

};

#endif // LOGISTICS_H