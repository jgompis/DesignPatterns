#include "windowsdialog.h"
#include "windowsbutton.h"

/**
 * @brief Construct a new Windows Dialog:: Windows Dialog object
 * 
 */
WindowsDialog::WindowsDialog(){}

/**
 * @brief Destroy the Windows Dialog:: Windows Dialog object
 * 
 */
WindowsDialog::~WindowsDialog(){}

/**
 * @brief factory method
 * 
 * @return Button* 
 */
Button* WindowsDialog::createButton()
{
    return new WindowsButton();
}