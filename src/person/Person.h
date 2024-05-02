//
// Created by kamil on 26.04.24.
//

#pragma once

class Person {
private:
    int xPosition;
    int yPosition;
    int speed;
    int floor;


public:
    Person(int speed, int floor);

    void go();

    int getYPosition() const;

    void setYPosition(int yPosition);

    int getXPosition() const;

    void setXPosition(int xPosition);
};

