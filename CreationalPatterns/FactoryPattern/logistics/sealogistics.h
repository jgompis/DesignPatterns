#ifndef SEALOGISTICS_H
#define SEALOGISTICS_H

#include "logistics.h"

/**
 * @brief SeaLogistics class
 * 
 */
class SeaLogistics : public Logistics
{
public:

    SeaLogistics();
    ~SeaLogistics();

    Transport* createTransport() override;

};

#endif // SEALOGISTICS_H