#ifndef HTMLBUTTON_H
#define HTMLBUTTON_H

#include "button.h"

class HTMLButton : public Button
{
public:

    HTMLButton();
    ~HTMLButton();

    void onClick(std::function<void(void)> handler) override;
    void render() override;

};

#endif // HTMLBUTTON_H