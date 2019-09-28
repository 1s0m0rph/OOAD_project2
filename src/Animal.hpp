using namespace std;
#include <EatBehavior.hpp>//strategy
#include <RoamBehavior.hpp>//strategy

class Animal
{
	public:
		Animal(string name, string type)
		{
			this.name = name;
			this.type = type;

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

		/*
		Define this so we don't need to redo the same method for all of the subclasses
		*/
		void makeNoise(string noise)
		{
			cout << name << " the " << type << " says " << noise << endl;
		}

	private:
		string name, type;
		bool isAsleep;
		RoamBehavior roamer;
		EatBehavior eater;

}