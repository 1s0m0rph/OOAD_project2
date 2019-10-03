#ifndef ZOOKEEPER_HPP
#define ZOOKEEPER_HPP
#include "Observers.hpp"
#include "Animal.hpp"
#include <string>
#include <list>

class Zookeeper : public Observable
{
	public:
		void wakeAnimals(list<Animal*> zoo);
		void rollCallAnimals(list<Animal*> zoo);
		void feedAnimals(list<Animal*> zoo);
		void exerciseAnimals(list<Animal*> zoo);
		void shutDownZoo(list<Animal*> zoo);
};

#endif
