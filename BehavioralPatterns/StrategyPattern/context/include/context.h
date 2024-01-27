#ifndef CONTEXT_H
#define CONTEXT_H


class Strategy;

/**
 * @brief Context class
 * 
 */
class Context {

public:

    Context(){}
    ~Context(){};

    void setStrategy(Strategy* strategy);
    float executeStrategy(float a, float b);

private:

    Strategy *_strategy;

};

#endif // context.h