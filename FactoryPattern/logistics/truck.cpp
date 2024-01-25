#include "truck.h"
#include <iostream>

/**
 * @brief Construct a new Truck:: Truck object
 * 
 */
Truck::Truck()
{
    std::cout << "Creating truck" << std::endl;
}

/**
 * @brief Destroy the Truck:: Truck object
 * 
 */
Truck::~Truck(){}

/**
 * @brief Transport a product
 * 
 */
void Truck::deliver()
{
    std::cout << "Transporting the product by truck" << std::endl;
}
