#include "Animal.hpp"
#include "Zookeeper.hpp"
#include "ZooAnnouncer.hpp"
using namespace std;

int main() {
    Dog *duke = new Dog("Duke");
    duke->setRoamBehavior(new HouseBeast());
    duke->roam();
    HouseCat *harry = new HouseCat("Harry");
    harry->setRoamBehavior(new HouseBeastEvil());
    harry->setEatBehavior(new Carnivore());
    harry->roam();
    harry->eat();
}
