#ifndef OBSERVERS_HPP
#define OBSERVERS_HPP
#include <string>
#include <list>
#include <iostream>
using namespace std;

class Observable;
class Observer
{
    public:
        virtual void update(string msg) = 0;
        virtual void subscribe(Observable subject) = 0;
};


class Observable
{
    private:
        list<Observer*> observers;

    public:
        void registerObserver(Observer *obj)
        {
            observers.push_back(obj);
        }
        void removeObserver(Observer *obj)
        {
            observers.remove(obj);
        }
        void notifyObservers(string msg)
        {
            /* range-based for-loops elucidated by:
             * https://stackoverflow.com/questions/22269435/how-to-iterate-through-a-list-of-objects-in-c
             */
            for (auto obs : observers) 
                obs->update(msg);
        }
};



#endif
