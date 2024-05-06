//
// Created by kamil on 02.05.24.
//

#pragma once

#include<string>

class Baker {
public:
    Baker();

    [[noreturn]] void bake();

    virtual ~Baker();

private:
    int speed;
    std::string name;

    static std::string getRandomName();
};
