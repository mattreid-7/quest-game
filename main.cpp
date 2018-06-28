// main.cpp : A text-based RPG following D&D as a guideline, including as much depth in character detail as possible whilst still learning how to write in C++.

#include "stdafx.h"
#include "Game.h"
#include "Combat.h"
#include "Character.h"


int main()
{
	Game game;
	Combat combat;
	Character character;
	srand(time(NULL));

	game.MainMenu();
	system("CLS");
	system("title Checkpoint 1");
	std::cin.ignore();
	std::cin.get();
	game.CharacterSheet();
	game.Save();
	do {
		system("CLS");
		std::cout << "Enemy List:  \n";
		std::cout << "1) Boar\n";
		std::cout << "2) Dire Wolf\n";
		std::cout << "3) Wolf\n";
		std::cout << "4) Skeleton\n";
		std::cout << "5) Lion\n";
		std::cout << "6) Imp\n";
		std::cout << "7) Giant Eagle\n";
		std::cout << "8) Giant Spider\n";
		std::cout << "9) Brown Bear\n";
		std::cout << "10) Black Bear\n";
		std::cout << "11) Zombie\n";
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "Which enemy do you want to fight?  ";
		std::cin >> game.choice;
	} while (!(game.choice == "1" || game.choice == "2" || game.choice == "3" || game.choice == "4" || game.choice == "5" || game.choice == "6" || game.choice == "7" || game.choice == "8" || game.choice == "9" || game.choice == "10"));
	if (game.choice == "1") {
		game.enemy = "Boar";
	}
	if (game.choice == "2") {
		game.enemy = "Dire Wolf";
	}
	if (game.choice == "3") {
		game.enemy = "Wolf";
	}
	if (game.choice == "4") {
		game.enemy = "Skeleton";
	}
	if (game.choice == "5") {
		game.enemy = "Lion";
	}
	if (game.choice == "6") {
		game.enemy = "Imp";
	}
	if (game.choice == "7") {
		game.enemy = "Giant Eagle";
	}
	if (game.choice == "8") {
		game.enemy = "Giant Spider";
	}
	if (game.choice == "9") {
		game.enemy = "Brown Bear";
	}
	if (game.choice == "10") {
		game.enemy = "Black Bear";
	}
	if (game.choice == "11") {
		game.enemy = "Zombie";
	}
	game.Creatures();
	game.Initiative();
}

