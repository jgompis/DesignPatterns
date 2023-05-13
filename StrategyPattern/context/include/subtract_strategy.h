#ifndef SUBTRACT_STRATEGY_H
#define SUBTRACT_STRATEGY_H

#include "strategy.h"

class SubtractStrategy : public Strategy
{

public:

    SubtractStrategy(){}
    ~SubtractStrategy(){}

    float execute(float a, float b) override;

private:

};

#endif // subtract_strategy.h