#include "effolkronium/random.hpp"
#include "baker_manager/BakerManager.h"
#include <iostream>



#include <thread>
#include <mutex>
#include <semaphore>

std::counting_semaphore<N> number_of_queueing_portions{0};
std::counting_semaphore<N> number_of_empty_positions{N};
std::mutex buffer_manipulation;

void producer() {
    for (;;) {
        Portion portion = produce_next_portion();
        number_of_empty_positions.acquire();
        {
            std::lock_guard<std::mutex> g(buffer_manipulation);
            add_portion_to_buffer(portion);
        }
        number_of_queueing_portions.release();
    }
}

void consumer() {
    for (;;) {
        number_of_queueing_portions.acquire();
        Portion portion;
        {
            std::lock_guard<std::mutex> g(buffer_manipulation);
            portion = take_portion_from_buffer();
        }
        number_of_empty_positions.release();
        process_portion_taken(portion);
    }
}

int main() {
    std::thread t1(producer);
    std::thread t2(consumer);
    t1.join();
    t2.join();
}
//using Random = effolkronium::random_static;
//
//int main() {
//    BakerManager bakerManager;
//    bakerManager.addBaker();
//    bakerManager.addBaker();
//    bakerManager.startThreads();
//    while (true) {
//
//    }
//
//
//}
