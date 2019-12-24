#include "Monster.h"
#include "Player.h"
int main(){
 	Monster lena{Monster::DRAGON,"dragon",'D',20,4,100};
 	Monster sergei{Monster::ORC,"orc",'o',4,2,25};
 	Monster sli{Monster::SLIME,"slime",'s',1,1,10};
 	cout<<lena.getSymbol()<<endl;

 	Player Catalin{};
 	return 0;
 }
