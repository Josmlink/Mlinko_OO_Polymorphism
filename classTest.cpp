#include <iostream>
#include <iomanip>
#include <string>
#include "Header.h"

using namespace std;

void main()
{
	//Tests and runs the Character Class
	/*Character character1; //Default Constructor.
	character1.printInfo();*/
	Character character2 = Character("Warrior", 35);
	character2.printInfo();

	//Tests and runs the Hero class
	Hero hero1 = Hero("Hero", "Sword", 55, 10);
	hero1.printInfo();

	//Tests and runs the Monster Class
	Monster monster1 = Monster("Scavenger", "Humanoid", "Goblin", 15);
	monster1.printInfo();

	//Polymorphism call for different print Method.
	monster1.printInfo(false);
	monster1.printInfo(true);

	system("pause");

}