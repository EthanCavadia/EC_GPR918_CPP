//
//  Characters.hpp
//  Test
//
//  Created by Elias Farhan on 14/12/16.
//  Copyright © 2016 Elias Farhan. All rights reserved.
//

#ifndef Characters_hpp
#define Characters_hpp

class Character;
class Hero;
class Monster;

class Character
{
public:
	Character(int, int, int, int);
	void takeDamage(int damage);
	int getAttack();
	bool isAlive();
	virtual void death();

	int getHealth();
	int getDefense();

protected:
	int strength;
	int health;
	int attack;
	int defense;
};

class Monster : public Character
{
    
public:
	Monster(int, int, int, int);
    void takeDamage(int damage);
	void fight(Hero*);
    void death();
};

class Hero : public Character
{
public:
	Hero(int, int, int, int);
	void takeDamage(int damage);
    void fight(Monster*);
    void death();
};





#endif /* Characters_hpp */
