#include "roadlogistics.h"
#include "truck.h"

/**
 * @brief Construct a new Road Logistics:: Road Logistics object
 * 
 */
RoadLogistics::RoadLogistics(){}

/**
 * @brief Destroy the Road Logistics:: Road Logistics object
 * 
 */
RoadLogistics::~RoadLogistics(){}

/**
 * @brief Factory method to create a new transport
 * 
 * @return Transport* 
 */
Transport* RoadLogistics::createTransport()
{
    return new Truck();
}