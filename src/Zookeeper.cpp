#include "Zookeeper.hpp"
using namespace std;

void Zookeeper::wakeAnimals(list<Animal*> zoo)
{
	notifyObservers("wake");//use observer to notify the announcer
	cout << "Waking the animals...\n";

	for(auto animal : zoo)
		animal->wakeUp();

	cout << "Animals are awake.\n";
}

void Zookeeper::rollCallAnimals(list<Animal*> zoo)
{
	notifyObservers("roll call");//use observer to notify the announcer
	cout << "Taking roll call...\n";

	for(auto animal : zoo)
		animal->makeNoise();

	cout << "All present and accounted for!\n";
}

void Zookeeper::feedAnimals(list<Animal*> zoo)
{
	notifyObservers("feed");//use observer to notify the announcer
	cout << "Feeding the animals (more appropriately?)\n";

	for(auto animal : zoo)
		animal->eat();//this part is implemented using strategy so we know the herbivores get plants and the carnivores get meats

	cout << "Consumables consumed.\n";
}

void Zookeeper::exerciseAnimals(list<Animal*> zoo)
{
	notifyObservers("exercise");//use observer to notify the announcer
	cout << "Time for a workout...\n";

	for(auto animal : zoo)
		animal->roam();//this part is implemented using strategy so we know the forest dwellers are in the forest and the house dwellers are in the house

	cout << "All in a day's work.\n";
}

void Zookeeper::shutDownZoo(list<Animal*> zoo)
{
	notifyObservers("put do bed");//use observer to notify the announcer
	cout << "Lights out.\n";

	for(auto animal : zoo)
		animal->goToSleep();
}