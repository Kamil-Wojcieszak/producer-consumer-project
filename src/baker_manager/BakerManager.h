//
// Created by kamil on 26.04.24.
//

#pragma once

#include <vector>
#include <thread>
#include "baker/Baker.h"

class BakerManager {
private:
    std::vector<Baker> bakers;
    std::vector<std::thread> threads;

public:
    void addBaker();

    void startThreads();

    void joinThreads();
};


