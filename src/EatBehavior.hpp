#ifndef EAT_HPP
#define EAT_HPP
using namespace std;
#include <string>
#include <iostream>

class EatBehavior
{
	public:
		/*
		This has to return a string as opposed to just telling everyone what's going on since it doesn't know anything about what class it's operating for
		*/
		virtual string eat();

	protected:
		string eatFoodFromListRandom(string foods[], double probs[], int len);
};

class Carnivore:public EatBehavior
{
	public:
		string eat();
};

class Herbivore:public EatBehavior
{
	public:
		string eat();
};

class PickyCarnivore:public EatBehavior
{
	public:
		string eat();
};

class PickyHerbivore:public EatBehavior
{
	public:
		string eat();
};

#endif
