#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include "EatBehavior.hpp"//strategy
#include "RoamBehavior.hpp"//strategy
#include <string>
#include <iostream>
#include <cstdlib>

class Animal
{
	public:
		Animal(string name, string type);
		void setRoamBehavior(RoamBehavior *behavior);
		void setEatBehavior(EatBehavior *behavior);
		void roam();
		void eat();
		void wakeUp();
		void goToSleep();
		virtual void makeNoise() = 0;

	private:
		string name, type;
		bool isAsleep;
		RoamBehavior *roamer;
		EatBehavior *eater;

	protected:
		/*
		Define this so we don't need to redo the same method for all of the subclasses
		*/
		void makeNoise_internal(string noise);
};

class Pachyderm:public Animal
{
	public:
		Pachyderm(string name, string type) : Animal(name,type) { }
};

class Elephant:public Pachyderm
{
	public:
		Elephant(string name) : Pachyderm(name,"Elephant") {}
		void makeNoise();
};

class Rhino:public Pachyderm
{
	public:
		Rhino(string name) : Pachyderm(name,"Rhino") {}
		void makeNoise();
};

class Hippo:public Pachyderm
{
	public:
		Hippo(string name) : Pachyderm(name,"Hippo") {}

		void makeNoise();
};

class Feline:public Animal
{
	public:
		Feline(string name, string type) : Animal(name,type) {}
};

class Lion:public Feline
{
	public:
		Lion(string name) : Feline(name,"Lion") {}

		void makeNoise();
};

class Tiger:public Feline
{
	public:
		Tiger(string name) : Feline(name,"Tiger") {}

		void makeNoise();
};

class HouseCat:public Feline
{
	public:
		HouseCat(string name) : Feline(name,"HouseCat") {}

		void makeNoise();
};

class Canine:public Animal
{
	public:
		Canine(string name, string type) : Animal(name,type) {}
};

class Wolf:public Canine
{
	public:
		Wolf(string name) : Canine(name,"Wolf") {}

		void makeNoise();
};

class Dog:public Canine
{
	public:
		Dog(string name) : Canine(name,"Dog") {}

		void makeNoise();
};

#endif
