//
// Created by kamil on 26.04.24.
//


#include "baker/Baker.h"
#include "baker_manager/BakerManager.h"
#include "baker/Baker.h"
#include "BakerManager.h"
#include <new>

void BakerManager::addBaker() {
    bakers.emplace_back();
}

void BakerManager::startThreads() {

    for (Baker baker: bakers) {
        threads.emplace_back(&Baker::bake, &baker);
    }
}

void BakerManager::joinThreads() {
    for (auto &thread: threads) {
        thread.join();
    }
}