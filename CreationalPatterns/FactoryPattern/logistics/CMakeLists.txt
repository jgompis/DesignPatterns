add_library(logistics logistics.cpp roadlogistics.cpp sealogistics.cpp transport.cpp truck.cpp ship.cpp)

target_include_directories(logistics PUBLIC .)