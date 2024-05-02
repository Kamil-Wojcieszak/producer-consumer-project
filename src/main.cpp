#include "effolkronium/random.hpp"
#include "baker_manager//BakerManager.h"

using Random = effolkronium::random_static;

int main() {
    BakerManager bakerManager;
    bakerManager.addBaker();
    bakerManager.addBaker();
    bakerManager.addBaker();

    bakerManager.startThreads();
    bakerManager.joinThreads();
}
