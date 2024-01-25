#ifndef BUTTON_H
#define BUTTON_H

#include <functional>

class Button 
{
public:
    Button();
    virtual ~Button();

    virtual void render() = 0;
    virtual void onClick(std::function<void(void)> handler) = 0;

};

#endif // BUTTON_H