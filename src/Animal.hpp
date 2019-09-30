using namespace std;
#include "EatBehavior.hpp"//strategy
#include "RoamBehavior.hpp"//strategy
#include <cassert>
#include <string>
#include <iostream>

class Animal
{
	public:
		Animal(string name, string type)
		{
			this->name = name;
			this->type = type;

			assert(type.at(0) == name.at(0));//make sure the animals' names start with the same character their type starts with

			isAsleep = true;
		}

		void setRoamBehavior(RoamBehavior behavior)
		{
			roamer = behavior;
		}
		void setEatBehavior(EatBehavior behavior)
		{
			eater = behavior;
		}

		void roam()
		{
			string roamstr = roamer.roam();
			cout << name << " the " << type << roamstr << endl;
		}
		void eat()
		{
			string food = eater.eat();
			cout << name << " the " << type << " consumes " << food << endl;
		}

		void wakeUp()
		{
			isAsleep = false;
			cout << "What's this? " << name << ", a " << type << " is waking up!\n";
		}

		void goToSleep()
		{
			isAsleep = true;
			cout << "Bedtime for the " << type << " " << name << endl;
		}

		virtual void makeNoise();


	private:
		string name, type;
		bool isAsleep;
		RoamBehavior roamer;
		EatBehavior eater;

	protected:
		/*
		Define this so we don't need to redo the same method for all of the subclasses
		*/
		void makeNoise(string noise)
		{
			cout << name << " the " << type << " " << noise << endl;
		}
};

class Pachyderm:public Animal
{
	public:
		Pachyderm(string name, string type) : Animal(name,type) { }
};

class Elephant:public Pachyderm
{
	public:
		Elephant(String name)
		{
			__super::Pachyderm(name,"Elephant");
		}

		void makeNoise()
		{
			makeNoise("trumpets");
		}
};

class Rhino:public Pachyderm
{
	public:
		Rhino(String name)
		{
			__super::Pachyderm(name,"Rhino");
		}

		void makeNoise()
		{
			makeNoise("galumphs");
		}
};

class Hippo:public Pachyderm
{
	public:
		Hippo(String name)
		{
			__super::Pachyderm(name,"Hippo");
		}

		void makeNoise()
		{
			makeNoise("splooshes");
		}
};

class Feline:public Animal
{
	public:
		Feline(string name, string type)
		{
			__super::Animal(name,type);
		}
};

class Lion:public Feline
{
	public:
		Lion(string name)
		{
			__super::Feline(name,"Lion");
		}

		void makeNoise()
		{
			makeNoise("roars");
		}
};

class Tiger:public Feline
{
	public:
		Tiger(string name)
		{
			__super::Feline(name,"Tiger");
		}

		void makeNoise()
		{
			makeNoise("growls");
		}
};

class HouseCat:public Feline
{
	public:
		HouseCat(string name)
		{
			__super::Feline(name,"HouseCat");
		}

		void makeNoise()
		{
			makeNoise("meows");
		}
};

class Canine:public Animal
{
	public:
		Canine(string name, string type)
		{
			__super::Animal(name,type);
		}
};

class Wolf:public Canine
{
	public:
		Wolf(string name)
		{
			__super::Canine(name,"Wolf");
		}

		void makeNoise()
		{
			makeNoise("howls");
		}
};

class Dog:public Canine
{
	public:
		Dog(string name)
		{
			__super::Canine(name,"Dog");
		}

		void makeNoise()
		{
			makeNoise("barks");
		}
};
