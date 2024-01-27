cmake_minimum_required(VERSION 3.10)

project(VisitorPattern)

add_executable(${PROJECT_NAME} main.cpp) 
add_subdirectory(Application)
add_subdirectory(Shape)

target_link_libraries(${PROJECT_NAME} Application)