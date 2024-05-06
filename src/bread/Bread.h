//
// Created by Kamil Wojcieszak on 05/05/2024.
//

#pragma once


class Bread {
    std::binary_semaphore
            smphSignalMainToThread{0},
            smphSignalThreadToMain{0};


};
