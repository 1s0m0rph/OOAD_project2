using namespace std;
#include "RoamBehavior.hpp"

string RoamBehavior::roam()
{
    return "roams";
}

string RoamBehavior::takeBehaviorFromListRandom(string behvs[], double probs[], int len)
{
    srand(time(0));
    double prob_agg = 0;
    double r = (double)rand() / RAND_MAX;
    for(int i = 0; i < len; i++)
    {
        prob_agg += probs[i];
        if(r < prob_agg)
            //do the behavior at this index
            return behvs[i];
    }
    return behvs[len-1];
}


string SavannahBeast::roam()
{
    string behvs[] = {"frolicks in the grass","rests on a pile of rocks","meanders through the grass"};
    double probs[] = {0.4,0.2,0.4};
    return takeBehaviorFromListRandom(behvs,probs,3);
}


string HouseBeast::roam()
{
    string behvs[] = {"rests on the couch","galumphs about the living room","watches the door intently","tries to break into the food storage"};
    double probs[] = {0.3,0.2,0.3,0.2};
    return takeBehaviorFromListRandom(behvs,probs,4);
}


string HouseBeastEvil::roam()
{
    string behvs[] = {"rests on the couch","galumphs about the living room","watches the door intently","tries to break into the food storage","plots the demise of humanity"};
    double probs[] = {0.2,0.2,0.2,0.2,0.2};
    return takeBehaviorFromListRandom(behvs,probs,5);
}


string ForestJungleBeast::roam()
{
    string behvs[] = {"wanders through the trees","climbs a tree","rests in a clearing"};
    double probs[] = {0.3,0.4,0.3};
    return takeBehaviorFromListRandom(behvs,probs,3);
}
