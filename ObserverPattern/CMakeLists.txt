cmake_minimum_required(VERSION 3.10)

project(ObserverPattern)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(BasicObserverPattern)
target_link_libraries(${PROJECT_NAME} BasicObserverPattern)

add_subdirectory(GuruObserverPattern)
target_link_libraries(${PROJECT_NAME} GuruObserverPattern)
