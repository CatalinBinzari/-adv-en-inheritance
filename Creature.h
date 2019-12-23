#include <iostream>
using namespace std; 
class Creature
{ 
	// Access specifier 
	public: 
	//class members
	string name;
	char symbol;
	int amount_of_health;
	int damage_per_attack;
	int carrying_gold; 

	Creature(string name, char symbol, int amount_of_health,
		int damage_per_attack, int carrying_gold)
	     : name {name}, symbol {symbol}, amount_of_health{amount_of_health},
	       damage_per_attack{damage_per_attack}, carrying_gold{carrying_gold}
	{
	}
	// Member Functions() 
	void setName(string n)
	{
		name=n;
	}
	string getName() 
	{ 
	return name; 
	} 

	char getSymbol() 
	{ 
	return symbol; 
	} 

	int getAmount_of_health() 
	{ 
	return amount_of_health; 
	} 

	int getDamage_per_attack() 
	{ 
	return damage_per_attack; 
	} 

	int getCarrying_gold() 
	{ 
	return carrying_gold; 
	} 

	void reduceHealth(int damage)
	{
		amount_of_health-=damage;
	}

	bool isDead()
	{
		return amount_of_health<=0 ? 1 : 0;
	}

	void addGold(int gold)
	{
		carrying_gold+=gold;
	}

}; 