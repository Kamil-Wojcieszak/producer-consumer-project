//
// Created by kamil on 26.04.24.
//

#pragma once

#include <vector>
#include <thread>
#include "person/Person.h"

class PersonManager {
private:
    std::vector<Person> persons;
    std::vector<std::thread> threads;

public:
    void addPerson(int speed, int floor);

    void startThreads();

    void joinThreads();
};


