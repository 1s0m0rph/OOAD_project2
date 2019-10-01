#include "ZooAnnouncer.hpp"
#include <iostream>
using namespace std;

void ZooAnnouncer::update(string event)
{
    cout << "Attention guests, the Zookeeper is about to " << event << " the animals!" << endl;
}
