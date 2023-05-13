#ifndef ADD_STRATEGY_H
#define ADD_STRATEGY_H

#include "strategy.h"

class AddStrategy : public Strategy
{

public:

    AddStrategy(){};
    ~AddStrategy(){};

    float execute(float a, float b) override;

private:

};

#endif // add_strategy.h