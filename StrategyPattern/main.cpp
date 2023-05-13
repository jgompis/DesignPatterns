#include <iostream>

// includes from the strategy patterns
#include "context/include/context.h"
#include "context/include/add_strategy.h"
#include "context/include/multiply_strategy.h"
#include "context/include/subtract_strategy.h"


int main(int argc, char* argv[]){

    Context ctx;
    AddStrategy addStrategy;
    SubtractStrategy subtractStrategy;
    MultiplyStrategy multiplyStrategy;

    // numbers to be processed by different strategies
    float a= 10.1;
    float b= 14.5;
    
    ctx.setStrategy(&addStrategy);
    std::cout << "addStrategy result: " << ctx.executeStrategy(a, b) << std::endl;
    ctx.setStrategy(&subtractStrategy);
    std::cout << "subtractStrategy result: " << ctx.executeStrategy(a, b) << std::endl;
    ctx.setStrategy(&multiplyStrategy);
    std::cout << "multiplyStrategy result: " << ctx.executeStrategy(a, b) << std::endl;




    return 0;
}