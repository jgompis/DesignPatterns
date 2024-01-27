#include "windowsbutton.h"
#include <iostream>

/**
 * @brief Construct a new Windows Button:: Windows Button object
 * 
 */
WindowsButton::WindowsButton()
{
    std::cout << "Creating Windows button" << std::endl;
}

/**
 * @brief Destroy the Windows Button:: Windows Button object
 * 
 */
WindowsButton::~WindowsButton(){}

/**
 * @brief 
 * 
 * @param handler 
 */
void WindowsButton::onClick(std::function<void(void)> handler)
{
   std::cout << "Windows button clicked" << std::endl;
   handler(); 
}

/**
 * @brief render function
 * 
 */
void WindowsButton::render()
{
    std::cout << "rendering WindowsButton" << std::endl;
}