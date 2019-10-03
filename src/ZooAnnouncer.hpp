#ifndef ANNOUNCER_HPP
#define ANNOUNCER_HPP
#include "Observers.hpp"
#include <string>
using namespace std;

class ZooAnnouncer: public Observer
{
    public:
        void update(string event);
        void subscribe(Observable subject);
};

#endif
