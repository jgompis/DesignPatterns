#ifndef DIALOG_H
#define DIALOG_H

class Button;

class Dialog 
{
public:
    Dialog();
    virtual ~Dialog();

    virtual Button* createButton() = 0;

    void render();

};

#endif // DIALOG_H