cmake_minimum_required(VERSION 3.28)
project(Threading)

include_directories(src)
include_directories(include)

set(CMAKE_CXX_STANDARD 17)

add_executable(Threading src/main.cpp
        src/person/Person.cpp
        src/person/Person.h
        src/baker/Elevator.cpp
        src/baker/Elevator.h
        src/person_manager/PersonManager.cpp
        src/person_manager/PersonManager.h
        src/baker/Baker.cpp
        src/baker/Baker.h)
