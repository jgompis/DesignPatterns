cmake_minimum_required(VERSION 3.10)


project(StrategyPattern)


add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(context)
target_link_libraries(${PROJECT_NAME} context)
