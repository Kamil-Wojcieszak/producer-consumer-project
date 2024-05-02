#include "effolkronium/random.hpp"
#include "person_manager/PersonManager.h"

using Random = effolkronium::random_static;

int main() {
    PersonManager pm;
    pm.addPerson(Random::get(0,10), Random::get(0,3));
    pm.addPerson(Random::get(0,10), Random::get(0,3));
    pm.addPerson(Random::get(0,10), Random::get(0,3));

    pm.startThreads();
    pm.joinThreads();
}
