using namespace std;
#include "EatBehavior.hpp"

string EatBehavior::eat()
{
    return "Food";
}

string EatBehavior::eatFoodFromListRandom(string foods[], double probs[], int len)
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

string Carnivore::eat()
{
    string fods[] = {"Meat","Chicken","Eggs"};
    double probs[] = {0.3,0.4,0.3};
    return EatBehavior::eatFoodFromListRandom(fods,probs,3);
}

string Herbivore::eat()
{
    string fods[] = {"Grass","Vegetables","Salad","Vegetal"};
    double probs[] = {0.4,0.4,0.19,0.01};
    return EatBehavior::eatFoodFromListRandom(fods,probs,4);
}

string PickyCarnivore::eat()
{
    string fods[] = {"Meat","Chicken","Eggs","Nothing"};
    double probs[] = {0.1,0.1,0.1,0.7};
    return EatBehavior::eatFoodFromListRandom(fods,probs,4);
}

string PickyHerbivore::eat()
{
    string fods[] = {"Grass","Vegetables","Salad","Vegetal","Nothing"};
    double probs[] = {0.1,0.2,0.05,0.01,0.64};
    return EatBehavior::eatFoodFromListRandom(fods,probs,5);
}
