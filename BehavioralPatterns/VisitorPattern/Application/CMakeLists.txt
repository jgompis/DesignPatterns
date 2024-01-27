add_library(Application Application.cpp)

target_include_directories(Application PUBLIC include)

target_link_libraries(Application PRIVATE Shape)