#include "sealogistics.h"
#include "ship.h"

/**
 * @brief Construct a new Sea Logistics:: Sea Logistics object
 * 
 */
SeaLogistics::SeaLogistics(){}

/**
 * @brief Destroy the Sea Logistics:: Sea Logistics object
 * 
 */
SeaLogistics::~SeaLogistics(){}

/**
 * @brief SeaLogistics factory method
 * 
 * @return Transport* 
 */
Transport* SeaLogistics::createTransport()
{
    return new Ship();
}