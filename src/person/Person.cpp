//
// Created by kamil on 26.04.24.
//

#include <cstdlib>
#include <iostream>
#include "Person.h"
#include "effolkronium/random.hpp"

using Random = effolkronium::random_static;

void Person::go() {
    std::cout<<speed<<std::endl;
}

int Person::getYPosition() const {
    return yPosition;
}

void Person::setYPosition(int yPosition) {
    Person::yPosition = yPosition;
}

int Person::getXPosition() const {
    return xPosition;
}

void Person::setXPosition(int xPosition) {
    Person::xPosition = xPosition;
}

Person::Person(int speed, int floor) : speed(speed), floor(floor) {
    xPosition=0;
    yPosition=0;
    this->speed=speed;
    this->floor=floor;
}
