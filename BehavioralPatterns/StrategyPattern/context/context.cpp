#include "include/context.h"
#include "include/strategy.h"

/**
 * @brief Strategy setter
 * 
 * @param strategy 
 */
void Context::setStrategy(Strategy* strategy){
    _strategy= strategy;
}

float Context::executeStrategy(float a, float b){

    float res= 0;

    if(_strategy){
        res= _strategy->execute(a, b);
    }

    return res;
}