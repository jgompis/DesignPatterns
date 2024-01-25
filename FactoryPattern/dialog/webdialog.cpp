#include "webdialog.h"
#include "htmlbutton.h"

/**
 * @brief Construct a new Web Dialog:: Web Dialog object
 * 
 */
WebDialog::WebDialog(){}

/**
 * @brief Destroy the Web Dialog:: Web Dialog object
 * 
 */
WebDialog::~WebDialog(){}

/**
 * @brief 
 * 
 * @return Button* 
 */
Button* WebDialog::createButton()
{
    return new HTMLButton();
}