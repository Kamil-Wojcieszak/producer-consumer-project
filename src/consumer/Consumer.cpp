//
// Created by kamil on 26.04.24.
//

#include <cstdlib>
#include <iostream>
#include "Consumer.h"
#include "effolkronium/random.hpp"

using Random = effolkronium::random_static;

void Consumer::go() {
    std::cout<<speed<<std::endl;
}

int Consumer::getYPosition() const {
    return yPosition;
}

void Consumer::setYPosition(int yPosition) {
    Consumer::yPosition = yPosition;
}

int Consumer::getXPosition() const {
    return xPosition;
}

void Consumer::setXPosition(int xPosition) {
    Consumer::xPosition = xPosition;
}

Consumer::Consumer(int speed, int floor) : speed(speed), floor(floor) {
    xPosition=0;
    yPosition=0;
    this->speed=speed;
    this->floor=floor;
}
