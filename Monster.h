#include "Creature.h"

class Monster : public Creature
{
public:
	enum Type { DRAGON,
	              ORC,
	              SLIME,
	              //MAX_TYPES 
	          };

Monster(Type type, string name="dragon",
	char symbol = 'D', int amount_of_health = 20,
	int damage_per_attack = 4, int carrying_gold = 100)
       : Creature{ name, symbol, amount_of_health,
	    	damage_per_attack, carrying_gold}
{
}
/*	struct MonsterData{
		string name;
		char symbol;
		int amount_of_health;
		int damage_per_attack;
		int carrying_gold;
	};

	 MonsterData monsterData[3] = {
								  {"dragon",'D',20,4,100},
								  {"orc",'o',4,2,25},
								  {"slime",'s',1,1,10}
								};
								*/
};

/*Monster::MonsterData Monster::monsterData[Monster::MAX_TYPES]
{
{ "dragon", 'D', 20, 4, 100 },
{ "orc", 'o', 4, 2, 25 },
{ "slime", 's', 1, 1, 10 }
};
*/
 