#pragma once
#ifndef HEADER_H
#define HEADER_H

#include <string>
using namespace std;

//Prof stands for Profession and refers to the players RPG Class
class Character {
public:
	Character();
	Character(std::string N, int C);
	~Character();

	string getProf();
	void setProf(string);
	int getHealth();
	void setHealth(int);
	void printInfo();
protected:
	string prof;
	int health;
private:
};

//Hero class for player characters.
class Hero : public Character {
public:
	Hero();
	Hero(std::string N, string C, int D, int E);

	string getWeapon();
	void setWeapon(string);
	int getMana();
	void setMana(int);
	void printInfo();
private:
	string weapon;
	int mana;
};

//Monster class for Monster NPCs
class Monster : public Character {
public:
	Monster();
	Monster(std::string N, string C, string D, int E);

	string getMonsterType();
	void setMonsterType(string);
	string getMonsterName();
	void setMonsterName(string);
	void printInfo();
	void printInfo(bool choice);
private:
	string monsterType;
	string monsterName;
};

#endif