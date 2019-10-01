#ifndef OBSERVER_HPP
#define OBSERVER_HPP
#include <string>
using namespace std;

class Observer
{
    public:
        virtual void update(string msg) = 0;
};

#endif
