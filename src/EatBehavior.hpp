using namespace std;
#include <string>;

class EatBehavior
{
	public:
		/*
		This has to return a string as opposed to just telling everyone what's going on since it doesn't know anything about what class it's operating for
		*/
		virtual string eat();

	protected:
		string eatFoodFromListRandom(string foods[], double probs[], int len)
		{
			srand(time(0));
			double prob_agg = 0;
			double r = (double)rand() / RAND_MAX;
			for(int i = 0; i < len; i++)
			{
				prob_agg += probs[i];
				if(r < prob_agg)
					//do the behavior at this index
					return foods[i];
			}
			return foods[len-1];
		}
};

class Carnivore:public EatBehavior
{
	public:
		string eat()
		{
			string fods[] = {"Meat","Chicken","Eggs"};
			double probs[] = {0.3,0.4,0.3};
			return eatFoodFromListRandom(fods,probs,3);
		}
};

class Herbivore:public EatBehavior
{
	public:
		string eat()
		{
			string fods[] = {"Grass","Vegetables","Salad","Vegetal"};
			double probs[] = {0.4,0.4,0.19,0.01};
			return eatFoodFromListRandom(fods,probs,4);
		}
};

class PickyCarnivore:public EatBehavior
{
	public:
		string eat()
		{
			string fods[] = {"Meat","Chicken","Eggs","Nothing"};
			double probs[] = {0.1,0.1,0.1,0.7};
			return eatFoodFromListRandom(fods,probs,4);
		}
};

class PickyHerbivore:public EatBehavior
{
	public:
		string eat()
		{
			string fods[] = {"Grass","Vegetables","Salad","Vegetal","Nothing"};
			double probs[] = {0.1,0.2,0.05,0.01,0.64};
			return eatFoodFromListRandom(fods,probs,5);
		}
};
