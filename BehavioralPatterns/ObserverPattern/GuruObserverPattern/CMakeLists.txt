set(TARGET_NAME "GuruObserverPattern")

add_library(${TARGET_NAME} Editor.cpp EmailAlertsListener.cpp EventManager.cpp LoggingListener.cpp)

target_include_directories(${TARGET_NAME} PUBLIC include)
