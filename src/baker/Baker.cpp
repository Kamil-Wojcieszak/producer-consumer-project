//
// Created by kamil on 02.05.24.
//
#include <thread>
#include <fstream>
#include "iostream"
#include "Baker.h"
#include "effolkronium/random.hpp"
#include<string>

using Random = effolkronium::random_static;

[[noreturn]] void Baker::bake() {
    while (true) {
        for (int i = 1; i <= speed; ++i) {
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        std::cout << "Baking finished by " + name << std::endl;
    }

}

Baker::Baker() {
    speed = Random::get(5, 10);
    name = getRandomName();
}

Baker::~Baker() = default;

std::string Baker::getRandomName() {
    std::ifstream in("../resources/names.txt");

    std::string s;

    int n = Random::get(0, 4944);
    for (int i = 0; i < n; ++i)
        std::getline(in, s);

    std::getline(in, s);
    return s;
}
