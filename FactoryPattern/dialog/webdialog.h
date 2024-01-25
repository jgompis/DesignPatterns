#ifndef WEBDIALOG_H
#define WEBDIALOG_H

#include "dialog.h"

class WebDialog : public Dialog
{
public:

    WebDialog();
    ~WebDialog();

    Button* createButton() override;

};

#endif // WEBDIALOG_H