#ifndef MULTIPLY_STRATEGY_H
#define MULTIPLY_STRATEGY_H

#include "strategy.h"

class MultiplyStrategy : public Strategy
{

public:

    MultiplyStrategy(){};
    ~MultiplyStrategy(){};


    float execute(float a, float b) override;

private:


};

#endif // multiply_strategy.h