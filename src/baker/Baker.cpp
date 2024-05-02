//
// Created by kamil on 02.05.24.
//
#include <thread>
#include "iostream"
#include "Baker.h"
#include "effolkronium/random.hpp"

using Random = effolkronium::random_static;
void Baker::bake() {

    for (int i = 1; i <= Random::get(5,10); ++i) {
        std::cout << "Baker is baking bread " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout << "Baking finished." << std::endl;


}

Baker::Baker() {

}

Baker::~Baker() {

}
