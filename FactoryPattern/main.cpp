#include <iostream>
#include "logistics/sealogistics.h"
#include "logistics/transport.h"
#include "dialog/windowsdialog.h"
#include "dialog/button.h"

int main(void)
{
    /*logistics*/

    Logistics *logistics = new SeaLogistics();
    Transport *transport;

    transport = logistics->createTransport();

    transport->deliver();

    delete transport;
    delete logistics;

    /*dialog*/

    Dialog* dialog = new WindowsDialog();

    dialog->render();


    delete dialog;


}