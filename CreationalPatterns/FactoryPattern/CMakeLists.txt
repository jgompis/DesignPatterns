cmake_minimum_required(VERSION 3.15)

project(FactoryPattern)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(logistics)
add_subdirectory(dialog)
target_link_libraries(${PROJECT_NAME} logistics)
target_link_libraries(${PROJECT_NAME} dialog)