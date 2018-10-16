// test.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <list>
#include "Characters.h"

int main()
{
	Hero* hero = new Hero(10, 10, 10, 10);
	std::list<Monster> monsters = {
		Monster(10, 1, 1, 5),
		Monster(20, 5, 5, 5),
		Monster(30, 10, 10, 5)
	};

	for (std::list<Monster>::iterator monsterIt = monsters.begin(); monsterIt != monsters.end(); ++monsterIt)
	{
		while (hero->isAlive() && monsterIt->isAlive())
		{
			hero->fight(&*monsterIt);
			monsterIt->fight(hero);
		}
		//If the monster is dead, meaning not alive, he dies!
		if (!monsterIt->isAlive())
		{
			monsterIt->death();

		}

		if (!hero->isAlive())
		{
			hero->death();
			break;
		}

	}

	//Windows specific
	system("Pause");
	return 0;
}
