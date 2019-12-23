#include "Creature.h"

class Player : public Creature
{
	public: 
		int player_level;
	Player(string custom_name, int player_level = 1,
		char symbol = '@',
		int amount_of_health = 10, int damage_per_attack = 1,
		int carrying_gold = 0)
	    : Creature{ custom_name, symbol, amount_of_health,
	    	damage_per_attack, carrying_gold},
	    	  player_level{ player_level }
	{
		Start();
	}

	void levelUp()
	{
		player_level+=1;
		damage_per_attack+=1;
	}

	int getLevel()
	{
		return player_level;
	}

	bool hasWon()
	{
		return player_level>=20 ? true : false;
	}

	void Start()
	{	
		string tmp;
		cout<<"Enter your name: ";
		cin>>tmp;
		setName(tmp);
		cout<<"Welcome, " + getName() + "!" <<endl;
		cout<<"You have "<< getAmount_of_health() << " amounts of health and are carrying " << getCarrying_gold() << " gold.\n";
	}
};


		
int main()
{
	Player pedro{"pedro"};
}
	
