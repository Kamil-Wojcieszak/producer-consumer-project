cmake_minimum_required(VERSION 3.25)
project(Threading)

include_directories(src)
include_directories(include)

set(CMAKE_CXX_STANDARD 17)

add_executable(Threading src/main.cpp
        src/consumer/Consumer.cpp
        src/consumer/Consumer.h
        src/baker_manager/BakerManager.cpp
        src/baker_manager/BakerManager.h
        src/baker/Baker.cpp
        src/baker/Baker.h


        src/bread/Bread.cpp)
