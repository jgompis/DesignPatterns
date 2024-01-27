#ifndef TRANSPORT_H
#define TRANSPORT_H

/**
 * @brief Transport base class
 * 
 */
class Transport
{
public:

    Transport();
    virtual ~Transport();

    virtual void deliver() = 0;


};

#endif // TRANSPORT_H