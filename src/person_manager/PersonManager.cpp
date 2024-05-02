//
// Created by kamil on 26.04.24.
//


#include "person/Person.h"
#include "person_manager/PersonManager.h"

void PersonManager::addPerson(int speed, int floor) {
    persons.emplace_back(speed, floor);
}

void PersonManager::startThreads() {
//    while(threads.size()<10)

    for (Person person : persons) {
        threads.emplace_back(&Person::go, &person);
    }
}

// Method to join all threads
void PersonManager::joinThreads() {
    for (auto& thread : threads) {
        thread.join();
    }
}