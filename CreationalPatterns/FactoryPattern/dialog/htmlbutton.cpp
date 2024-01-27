#include "htmlbutton.h"
#include <iostream>

/**
 * @brief Construct a new HTMLButton::HTMLButton object
 * 
 */
HTMLButton::HTMLButton()
{
    std::cout << "Creating HTML button" << std::endl;
}

/**
 * @brief Destroy the HTMLButton::HTMLButton object
 * 
 */
HTMLButton::~HTMLButton(){}

/**
 * @brief 
 * 
 * @param handler 
 */
void HTMLButton::onClick(std::function<void(void)> handler)
{
   std::cout << "HTML button clicked" << std::endl;
   handler(); 
}

/**
 * @brief render function
 * 
 */
void HTMLButton::render()
{
    std::cout << "rendering HTML button" << std::endl;
}
