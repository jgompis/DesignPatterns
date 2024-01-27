#ifndef WINDOWSDIALOG_H
#define WINDOWSDIALOG_H

#include "dialog.h"

class WindowsDialog : public Dialog
{
public:

    WindowsDialog();
    ~WindowsDialog();

    Button* createButton() override;
};

#endif // WINDOWSDIALOG_H