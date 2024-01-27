#include "ship.h"
#include <iostream>

/**
 * @brief Construct a new Ship:: Ship object
 * 
 */
Ship::Ship()
{
    std::cout << "Creating ship" << std::endl;
}

/**
 * @brief Destroy the Ship:: Ship object
 * 
 */
Ship::~Ship(){}

/**
 * @brief Trasnport a product
 * 
 */
void Ship::deliver()
{
    std::cout << "Transporting the product by ship" << std::endl;
}
