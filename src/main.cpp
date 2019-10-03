#include "Animal.hpp"
#include "Zookeeper.hpp"
#include "ZooAnnouncer.hpp"
#include <list>
using namespace std;

int main() {
	//start by creating the zoo, the zookeeper, and the announcer

	list<Animal*> zoo;
	Animal* tmpA;
	RoamBehavior* tmpRB;
	EatBehavior* tmpEB;

	tmpA = new Dog("Doug");
	tmpRB = new HouseBeast();
	tmpEB = new PickyCarnivore();
	tmpA->setRoamBehavior(tmpRB);
	tmpA->setEatBehavior(tmpEB);
	zoo.push_back(tmpA);

	tmpA = new Dog("Diane");
	tmpRB = new HouseBeastEvil();
	tmpEB = new Carnivore();
	tmpA->setRoamBehavior(tmpRB);
	tmpA->setEatBehavior(tmpEB);
	zoo.push_back(tmpA);

	tmpA = new Elephant("Earl");
	tmpRB = new SavannahBeast();
	tmpEB = new Herbivore();
	tmpA->setRoamBehavior(tmpRB);
	tmpA->setEatBehavior(tmpEB);
	zoo.push_back(tmpA);

	tmpA = new Elephant("Ellie");
	tmpRB = new SavannahBeast();
	tmpEB = new Herbivore();
	tmpA->setRoamBehavior(tmpRB);
	tmpA->setEatBehavior(tmpEB);
	zoo.push_back(tmpA);

	tmpA = new Hippo("Harry");
	tmpRB = new WetlandBeast();
	tmpEB = new PickyHerbivore();
	tmpA->setRoamBehavior(tmpRB);
	tmpA->setEatBehavior(tmpEB);
	zoo.push_back(tmpA);

	tmpA = new Hippo("Helen");
	tmpRB = new WetlandBeast();
	tmpEB = new Herbivore();
	tmpA->setRoamBehavior(tmpRB);
	tmpA->setEatBehavior(tmpEB);
	zoo.push_back(tmpA);

	tmpA = new HouseCat("Hermann");
	tmpRB = new HouseBeastEvil();
	tmpEB = new PickyCarnivore();
	tmpA->setRoamBehavior(tmpRB);
	tmpA->setEatBehavior(tmpEB);
	zoo.push_back(tmpA);

	tmpA = new HouseCat("Heather");
	tmpRB = new HouseBeast();
	tmpEB = new PickyCarnivore();
	tmpA->setRoamBehavior(tmpRB);
	tmpA->setEatBehavior(tmpEB);
	zoo.push_back(tmpA);

	tmpA = new Lion("Luigi");
	tmpRB = new SavannahBeast();
	tmpEB = new Carnivore();
	tmpA->setRoamBehavior(tmpRB);
	tmpA->setEatBehavior(tmpEB);
	zoo.push_back(tmpA);

	tmpA = new Lion("Lavra");
	tmpRB = new SavannahBeast();
	tmpEB = new PickyCarnivore();
	tmpA->setRoamBehavior(tmpRB);
	tmpA->setEatBehavior(tmpEB);
	zoo.push_back(tmpA);

	tmpA = new Rhino("Ryan");
	tmpRB = new SavannahBeast();
	tmpEB = new PickyHerbivore();
	tmpA->setRoamBehavior(tmpRB);
	tmpA->setEatBehavior(tmpEB);
	zoo.push_back(tmpA);

	tmpA = new Rhino("Rachel");
	tmpRB = new SavannahBeast();
	tmpEB = new Herbivore();
	tmpA->setRoamBehavior(tmpRB);
	tmpA->setEatBehavior(tmpEB);
	zoo.push_back(tmpA);

	tmpA = new Tiger("Timmy");
	tmpRB = new ForestJungleBeast();
	tmpEB = new Carnivore();
	tmpA->setRoamBehavior(tmpRB);
	tmpA->setEatBehavior(tmpEB);
	zoo.push_back(tmpA);

	tmpA = new Tiger("Tina");
	tmpRB = new ForestJungleBeast();
	tmpEB = new Carnivore();
	tmpA->setRoamBehavior(tmpRB);
	tmpA->setEatBehavior(tmpEB);
	zoo.push_back(tmpA);

	tmpA = new Wolf("Warren");
	tmpRB = new ForestJungleBeast();
	tmpEB = new Carnivore();
	tmpA->setRoamBehavior(tmpRB);
	tmpA->setEatBehavior(tmpEB);
	zoo.push_back(tmpA);

	tmpA = new Wolf("Whiskey");
	tmpRB = new ForestJungleBeast();
	tmpEB = new PickyCarnivore();
	tmpA->setRoamBehavior(tmpRB);
	tmpA->setEatBehavior(tmpEB);
	zoo.push_back(tmpA);


	//template in case we want more beasties
	// tmpA = new ("");
	// tmpRB = new Beast();
	// tmpEB = new ();
	// tmpA->setRoamBehavior(tmpRB);
	// tmpA->setEatBehavior(tmpEB);
	// zoo.push_back(tmpA);



    Zookeeper zeke;
    ZooAnnouncer dave;
    dave.subscribe(zeke);//here, observer is implemented

    zeke.wakeAnimals(zoo);
    zeke.rollCallAnimals(zoo);
    zeke.feedAnimals(zoo);
    zeke.exerciseAnimals(zoo);
    zeke.shutDownZoo(zoo);

    zeke.removeObserver(&dave);
}
