#ifndef WINDOWSBUTTON_H
#define WINDOWSBUTTON_H

#include "button.h"

class WindowsButton : public Button
{
public:

    WindowsButton();
    ~WindowsButton();

    void onClick(std::function<void(void)> handler) override;
    void render() override;
};

#endif // WINDOWSBUTTON_H