#include "dialog.h"
#include "button.h"
#include <iostream>

/**
 * @brief Construct a new Dialog:: Dialog object
 * 
 */
Dialog::Dialog(){}

/**
 * @brief Destroy the Dialog:: Dialog object
 * 
 */
Dialog::~Dialog(){}

/**
 * @brief Rendering
 * 
 */
void Dialog::render()
{
    Button* button = createButton();
    button->onClick([](){
        std::cout << "onClickHandler: closing dialog" << std::endl;
    });

    button->render();
    delete button;

}
