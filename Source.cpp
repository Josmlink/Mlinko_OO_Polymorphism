/* OO with Polymorphism
By: Joseph Mlinko
Class: CSC275 C++ Programming II
Date: 5/27/2018*/

#include <iostream>
#include <iomanip>
#include "Header.h"

using namespace std;

//Character Class and Destructor
Character::Character() {}
Character::~Character() 
{
	cout << "Character destructor called.\n";
}

Character::Character(string N, int C)
{
	prof = N;
	health = C;
}

//Get the Characters Profession.
string Character::getProf() { return prof; }
void Character::setProf(string N) 
{
	prof = N;
}

//Get the Characters Health.
int Character::getHealth() { return health; }
void Character::setHealth(int C)
{
	if (C >= 1)
	{
		health = C;
	}
	else
	{
		cout << "Invalid health number entered. Value must be greater than 0.\n";
		cout << "Setting health to 1.\n";
		health = 1;
	}
}

//Display the info entered.
void Character::printInfo()
{
	cout << "This character is a " << prof << " with " << health << " health points.\n" << endl;
}

//------------------------
//Sets up the Hero Class. heroClass
//------------------------

Hero::Hero() {}
Hero::Hero(string N, string C, int D, int E) : Character(N,E)
{
	prof = N; //Hero's profession
	weapon = C; //Hero's Weapon
	health = D; //Hero's Health
	mana = E; //Hero's Mana
}
//Sets and gets the attributes that are added for Hero Classes - Weapon and Mana
string Hero::getWeapon() { return weapon; }
void Hero::setWeapon(string C)
{
	weapon = C;
}
int Hero::getMana() { return mana; }
void Hero::setMana(int E)
{
	mana = E;
}

//Display the info for a Hero Character.
void Hero::printInfo()
{
	Character::printInfo();
	cout << "As a hero, they also have " << mana << " mana points and wield a " << weapon << "!\n\n";
}

//--------------------------
//Sets up the Monster Class. monsClass
//--------------------------

Monster::Monster() {}
Monster::Monster(string N, string C, string D, int E) : Character(N, E)
{
	prof = N;
	monsterType = C;
	monsterName = D;
	health = E;
}

//Sets and gets the attributes that are added for Monster Classes - Monster Type and Monster Name.
string Monster::getMonsterType() { return monsterType; }
void Monster::setMonsterType(string C)
{
	monsterType = C;
}
string Monster::getMonsterName() { return monsterName; }
void Monster::setMonsterName(string D)
{
	monsterName = D;
}

//Display the info for a Monster Character
void Monster::printInfo()
{
	Character::printInfo();
	cout << "This is a Monster of the type " << monsterType << " and species " << monsterName << ".\n\n";
}

//Polymorphism Example that uses a Bool to determine which printInfo method is called.
void Monster::printInfo(bool choice)
{
	if (choice)
		cout << "This Monster is a " << monsterType << " so be careful of its friends.\n\n";
	else
		cout << "This Monster is a terrifying " << monsterName << " that is capable of taking down adventurer's really easily!\n\n";
}