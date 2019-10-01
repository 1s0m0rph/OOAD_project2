#ifndef ANNOUNCER_HPP
#define ANNOUNCER_HPP
#include "Observer.hpp"
#include <string>
using namespace std;

class ZooAnnouncer: public Observer
{
    public:
        void update(string event);
};

#endif
