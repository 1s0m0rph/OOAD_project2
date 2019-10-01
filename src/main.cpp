#include "Animal.hpp"
#include "Zookeeper.hpp"
#include "ZooAnnouncer.hpp"
using namespace std;

int main() {
    Dog duke("Duke");
    duke.setRoamBehavior(HouseBeast());
    duke.roam();
    HouseCat harry("Harry");
    harry.setRoamBehavior(HouseBeastEvil());
    harry.setEatBehavior(Carnivore());
    harry.roam();
    harry.eat();
    harry.makeNoise();
    duke.makeNoise();

    Rhino ross("Ross");
    ross.makeNoise();
}
