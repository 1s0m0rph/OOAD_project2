using namespace std;

class RoamBehavior
{
	public:
		virtual void roam();

	protected:
		string takeBehaviorFromListRandom(string[] behvs, double[] probs, int len)
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

class SavannahBeast:public RoamBehavior
{
	public:
		void roam()
		{
			return takeBehaviorFromListRandom({"frolicks in the grass","rests on a pile of rocks","meanders through the grass"},{0.4,0.2,0.4},3);
		}
}

class HouseBeast:public RoamBehavior
{
	public:
		void roam()
		{
			return takeBehaviorFromListRandom({"rests on the couch","galumphs about the living room","watches the door intently","tries to break into the food storage"},{0.3,0.2,0.3,0.2},4);
		}
}

class HouseBeastEvil:public RoamBehavior
{
	public:
		void roam()
		{
			return takeBehaviorFromListRandom({"rests on the couch","galumphs about the living room","watches the door intently","tries to break into the food storage","plots the demise of humanity"},{0.2,0.2,0.2,0.2,0.2},5);
		}
}

class ForestJungleBeast:public RoamBehavior
{
	public:
		void roam()
		{
			return takeBehaviorFromListRandom({"wanders through the trees","climbs a tree","rests in a clearing"},{0.3,0.4,0.3},3);
		}
}