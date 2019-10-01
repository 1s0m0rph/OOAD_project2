//using namespace std;
#include "Animal.hpp"

Animal::Animal(string name, string type)
{
    this->name = name;
    this->type = type;

    //make sure the animals' names start with the same character their type starts with
    if(type.at(0) != name.at(0))
    {
    	cout << "ERROR: " << name << " has name that does not start with the correct character (should be " << type.at(0) << " as in " << type << ")\n";
    	exit(1);
    }

    isAsleep = true;
}

void Animal::setRoamBehavior(RoamBehavior *behavior)
{
    roamer = behavior;
}
void Animal::setEatBehavior(EatBehavior *behavior)
{
    eater = behavior;
}

void Animal::roam()
{
    string roamstr = roamer->roam();
    cout << name << " the " << type << " " << roamstr << endl;
}
void Animal::eat()
{
    string food = eater->eat();
    cout << name << " the " << type << " consumes " << food << endl;
}

void Animal::wakeUp()
{
    isAsleep = false;
    cout << "What's this? " << name << ", a " << type << " is waking up!\n";
}

void Animal::goToSleep()
{
    isAsleep = true;
    cout << "Bedtime for the " << type << " " << name << endl;
}


/*
Define this so we don't need to redo the same method for all of the subclasses
*/
void Animal::makeNoise_internal(string noise)
{
    cout << name << " the " << type << " " << noise << endl;
}


/* Elephant implementation */
void Elephant::makeNoise()
{
    makeNoise_internal("trumpets");
}

/* Rhino implementation */
void Rhino::makeNoise()
{
    makeNoise_internal("galumphs");
}

/* Hippo implementation */
void Hippo::makeNoise()
{
    makeNoise_internal("splooshes");
}

/* Lion implementation */
void Lion::makeNoise()
{
    makeNoise_internal("roars");
}

/* Tiger implementation */
void Tiger::makeNoise()
{
    makeNoise_internal("growls");
}

/* HouseCat implementation */
void HouseCat::makeNoise()
{
    makeNoise_internal("meows");
}

/* Wolf implementation */
void Wolf::makeNoise()
{
    makeNoise_internal("howls");
}

/* Dog implementation */
void Dog::makeNoise()
{
    makeNoise_internal("barks");
}
