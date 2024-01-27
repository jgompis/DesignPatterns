
set(TARGET_NAME "BasicObserverPattern")

add_library(${TARGET_NAME} Publisher.cpp Subscriber.cpp ConcreteSubscriber.cpp)

target_include_directories(${TARGET_NAME} PUBLIC include)