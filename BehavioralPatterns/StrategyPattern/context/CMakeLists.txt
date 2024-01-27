add_library(context context.cpp strategy.cpp add_strategy.cpp subtract_strategy.cpp multiply_strategy.cpp)

target_include_directories(context PUBLIC include)
