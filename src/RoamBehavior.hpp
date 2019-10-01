#ifndef ROAM_HPP
#define ROAM_HPP
using namespace std;
#include <string>
#include <iostream>

class RoamBehavior
{
	public:
		virtual string roam();

	protected:
		string takeBehaviorFromListRandom(string behvs[], double probs[], int len);
};

class SavannahBeast:public RoamBehavior
{
	public:
		string roam();
};

class HouseBeast:public RoamBehavior
{
	public:
		string roam();
};

class HouseBeastEvil:public RoamBehavior
{
	public:
		string roam();
};

class ForestJungleBeast:public RoamBehavior
{
	public:
		string roam();
};

#endif
