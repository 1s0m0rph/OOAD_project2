#include "Animal.hpp"
#include "Zookeeper.hpp"
#include "ZooAnnouncer.hpp"
using namespace std;

int main() {
    Observable zeke;
    ZooAnnouncer dave;
    zeke.registerObserver(&dave);
    zeke.notifyObservers("wake");
    zeke.notifyObservers("sleep");
    zeke.removeObserver(&dave);
}
