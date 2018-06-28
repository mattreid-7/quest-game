//Includes story based stuff I guess, like quests and dialogue, also main menu.

#include "stdafx.h"
#include "Game.h"


Game::Game()
{
	
}

Game::~Game()
{

}


//Functions
void Game::MainMenu() {
	do {
		system("title Main Menu");
		system("CLS");
		std::cout << "Welcome to Quest, a text-based Adventure Game! \n";
		std::cout << "\n";
		std::cout << "\n";
		std::cout << "1) Start a new game \n";
		std::cout << "2) Load a previous game \n";
		std::cout << "\n";
		std::cout << "What would you like to do?  ";
		std::getline(std::cin,choice);
	} while (!(choice == "1" || choice == "2"));
	if (choice == "1") {
		Creation();
	}
	if (choice == "2") {
		Load();
	}
}

void Game::Creation() {
	// character creation screen
	system("title Creation");
	system("CLS");
	std::cout << "Welcome traveller, by what name shall I call you?  ";
	std::getline(std::cin,NAME);

	//Race Selection
	do {
		system("CLS");
		std::cout << "Of what race do you come? \n";
		std::cout << "Dwarf, Elf, Halfling, Human, Dragonborn, Gnome, Half-Elf, Half-Orc, Tiefling?  ";
		std::cin >> RACE;
	} while (!(RACE == "dwarf" || RACE == "Dwarf" || RACE == "elf" || RACE == "Elf" || RACE == "halfling" || RACE == "Halfling" || RACE == "human" || RACE == "Human" || RACE == "dragonborn" || RACE == "Dragonborn" || RACE == "gnome" || RACE == "Gnome" || RACE == "half-elf" || RACE == "Half-Elf" || RACE == "half-orc" || RACE == "Half-Orc" || RACE == "tiefling" || RACE == "Tiefling"));
	if (RACE == "dwarf" || RACE == "Dwarf") {
		do {
			std::cout << std::endl;
			std::cout << "Which subrace are you from? Mountain or Hill?  ";
			std::cin >> RACE;
		} while (!(RACE == "mountain" || RACE == "Mountain" || RACE == "hill" || RACE == "Hill"));
		if (RACE == "mountain" || RACE == "Mountain") {
			RACE = "Mountain-Dwarf";
		}
		if (RACE == "hill" || RACE == "Hill") {
			RACE = "Hill-Dwarf";
		}
	}
	if (RACE == "elf" || RACE == "Elf") {
		do {
			std::cout << std::endl;
			std::cout << "Which subrace are you from? High, Wood or Dark?  ";
			std::cin >> RACE;
		} while (!(RACE == "high" || RACE == "High" || RACE == "wood" || RACE == "Wood" || RACE == "dark" || RACE == "Dark"));
		if (RACE == "high" || RACE == "High") {
			RACE = "High-Elf";
		}
		if (RACE == "wood" || RACE == "Wood") {
			RACE = "Wood-Elf";
		}
		if (RACE == "dark" || RACE == "Dark") {
			RACE = "Dark-Elf";
		}
	}
	if (RACE == "halfling" || RACE == "Halfling") {
		do {
			std::cout << std::endl;
			std::cout << "Which subrace are you from? Lightfoot or Stout?  ";
			std::cin >> RACE;
		} while (!(RACE == "lightfoot" || RACE == "Lightfoot" || RACE == "stout" || RACE == "Stout"));
		if (RACE == "lightfoot" || RACE == "Lightfoot") {
			RACE = "Lightfoot-Halfling";
		}
		if (RACE == "stout" || RACE == "Stout") {
			RACE = "Stout-Halfling";
		}
	}
	if (RACE == "human" || RACE == "Human") {
		RACE = "Human";
	}
	if (RACE == "dragonborn" || RACE == "Dragonborn") {
		RACE = "Dragonborn";
	}
	if (RACE == "gnome" || RACE == "Gnome") {
		do {
			std::cout << std::endl;
			std::cout << "Which subrace are you from? Forest or Rock?  ";
			std::cin >> RACE;
		} while (!(RACE == "forest" || RACE == "Forest" || RACE == "rock" || RACE == "Rock"));
		if (RACE == "forest" || RACE == "Forest") {
			RACE = "Forest-Gnome";
		}
		if (RACE == "rock" || RACE == "Rock") {
			RACE = "Rock-Gnome";
		}
	}
	if (RACE == "half-elf" || RACE == "Half-Elf") {
		RACE = "Half-Elf";
	}
	if (RACE == "half-orc" || RACE == "Half-Orc") {
		RACE = "Half-Orc";
	}
	if (RACE == "tiefling" || RACE == "Tiefling") {
		RACE = "Tiefling";
	}

	//Class Selection
	do {
		system("CLS");
		std::cout << "What class are you, " << NAME << "? \n";
		std::cout << "Barbarian, Bard, Cleric, Druid, Fighter, Monk, Paladin, Ranger, Rogue, Sorcerer, Warlock, Wizard?  ";
		std::cin >> CLASS;
	} while (!(CLASS == "Barbarian" || CLASS == "barbarian" || CLASS == "Bard" || CLASS == "bard" || CLASS == "Cleric" || CLASS == "cleric" || CLASS == "Druid" || CLASS == "druid" || CLASS == "Fighter" || CLASS == "fighter" || CLASS == "Monk" || CLASS == "monk" || CLASS == "Paladin" || CLASS == "paladin" || CLASS == "Ranger" || CLASS == "ranger" || CLASS == "Rogue" || CLASS == "rogue" || CLASS == "Sorcerer" || CLASS == "sorcerer" || CLASS == "Warlock" || CLASS == "warlock" || CLASS == "Wizard" || CLASS == "wizard"));
	if (CLASS == "barbarian" || CLASS == "Barbarian") {
		CLASS = "Barbarian";
		do {
			system("CLS");
			std::cout << std::endl;
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Battleaxe      10) Morningstar \n";
			std::cout << "2) Flail          11) Pike \n";
			std::cout << "3) Glaive         12) Rapier \n";
			std::cout << "4) Greataxe       13) Scimitar \n";
			std::cout << "5) Greatsword     14) Shortsword \n";
			std::cout << "6) Halberd        15) Trident \n";
			std::cout << "7) Lance          16) Warpick \n";
			std::cout << "8) Longsword      17) Warhammer\n";
			std::cout << "9) Maul           18) Whip \n";
			std::cout << std::endl;
			std::cout << "Which one of these weapons do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11" || choice == "12" || choice == "13" || choice == "14" || choice == "15" || choice == "16" || choice == "17" || choice == "18"));
		if (choice == "1") {
			Battleaxe = Battleaxe + 1;
		}
		if (choice == "2") {
			Flail = Flail + 1;
		}
		if (choice == "3") {
			Glaive = Glaive + 1;
		}
		if (choice == "4") {
			Greataxe = Greataxe + 1;
		}
		if (choice == "5") {
			Greatsword = Greatsword + 1;
		}
		if (choice == "6") {
			Halberd = Halberd + 1;
		}
		if (choice == "7") {
			Lance = Lance + 1;
		}
		if (choice == "8") {
			Longsword = Longsword + 1;
		}
		if (choice == "9") {
			Maul = Maul + 1;
		}
		if (choice == "10") {
			Morningstar = Morningstar + 1;
		}
		if (choice == "11") {
			Pike = Pike + 1;
		}
		if (choice == "12") {
			Rapier = Rapier + 1;
		}
		if (choice == "13") {
			Scimitar = Scimitar + 1;
		}
		if (choice == "14") {
			Shortsword = Shortsword + 1;
		}
		if (choice == "15") {
			Trident = Trident + 1;
		}
		if (choice == "16") {
			WarPick = WarPick + 1;
		}
		if (choice == "17") {
			Warhammer = Warhammer + 1;
		}
		if (choice == "18") {
			Whip = Whip + 1;
		}
		do {
			system("CLS");
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Club          8) Quarterstaff \n";
			std::cout << "2) Dagger        9) Sickle \n";
			std::cout << "3) Greatclub     10) Spear \n";
			std::cout << "4) Handaxe x2    11) Light Crossbow \n";
			std::cout << "5) Javelin       12) Dart \n";
			std::cout << "6) Light Hammer  13) Shortbow \n";
			std::cout << "7) Mace          14) Sling \n";
			std::cout << std::endl;
			std::cout << "Which one of these weapons do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11" || choice == "12" || choice == "13" || choice == "14"));
		if (choice == "1") {
			Club = Club + 1;
		}
		if (choice == "2") {
			Dagger = Dagger + 1;
		}
		if (choice == "3") {
			Greatclub = Greatclub + 1;
		}
		if (choice == "4") {
			Handaxe = Handaxe + 2;
		}
		if (choice == "5") {
			Javelin = Javelin + 1;
		}
		if (choice == "6") {
			LightHammer = LightHammer + 1;
		}
		if (choice == "7") {
			Mace = Mace + 1;
		}
		if (choice == "8") {
			Quarterstaff = Quarterstaff + 1;
		}
		if (choice == "9") {
			Sickle = Sickle + 1;
		}
		if (choice == "10") {
			Spear = Spear + 1;
		}
		if (choice == "11") {
			LightCrossbow = LightCrossbow + 1;
		}
		if (choice == "12") {
			Dart = Dart + 1;
		}
		if (choice == "13") {
			Shortbow = Shortbow + 1;
		}
		if (choice == "14") {
			Sling = Sling + 1;
		}
		Javelin = Javelin + 4;
	}
	if (CLASS == "bard" || CLASS == "Bard") {
		CLASS = "Bard";
		do {
			system("CLS");
			std::cout << std::endl;
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Club           9) Quarterstaff \n";
			std::cout << "2) Dagger         10) Rapier \n";
			std::cout << "3) Greatclub      11) Sickle \n";
			std::cout << "4) Handaxe        12) Spear \n";
			std::cout << "5) Javelin        13) Light Crossbow \n";
			std::cout << "6) Light Hammer   14) Dart \n";
			std::cout << "7) Longsword      15) Shortbow \n";
			std::cout << "8) Mace           16) Sling \n";
			std::cout << std::endl;
			std::cout << "Which one of these weapons do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11" || choice == "12" || choice == "13" || choice == "14" || choice == "15" || choice == "16"));
		if (choice == "1") {
			Club = Club + 1;
		}
		if (choice == "2") {
			Dagger = Dagger + 1;
		}
		if (choice == "3") {
			Greatclub = Greatclub + 1;
		}
		if (choice == "4") {
			Handaxe = Handaxe + 1;
		}
		if (choice == "5") {
			Javelin = Javelin + 1;
		}
		if (choice == "6") {
			LightHammer = LightHammer + 1;
		}
		if (choice == "7") {
			Longsword = Longsword + 1;
		}
		if (choice == "8") {
			Mace = Mace + 1;
		}
		if (choice == "9") {
			Quarterstaff = Quarterstaff + 1;
		}
		if (choice == "10") {
			Rapier = Rapier + 1;
		}
		if (choice == "11") {
			Sickle = Sickle + 1;
		}
		if (choice == "12") {
			Spear = Spear + 1;
		}
		if (choice == "13") {
			LightCrossbow = LightCrossbow + 1;
		}
		if (choice == "14") {
			Dart = Dart + 1;
		}
		if (choice == "15") {
			Shortbow = Shortbow + 1;
		}
		if (choice == "16") {
			Sling = Sling + 1;
		}
		do {
			system("CLS");
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Bagpipes    6) Lyre \n";
			std::cout << "2) Drum        7) Horn \n";
			std::cout << "3) Dulcimer    8) Pan Flute \n";
			std::cout << "4) Flute       9) Shawm \n";
			std::cout << "5) Lute        10) Viol \n";
			std::cout << std::endl;
			std::cout << "Which one of these instruments do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10"));
		if (choice == "1") {
			Bagpipes = Bagpipes + 1;
		}
		if (choice == "2") {
			Drum = Drum + 1;
		}
		if (choice == "3") {
			Dulcimer = Dulcimer + 1;
		}
		if (choice == "4") {
			Flute = Flute + 1;
		}
		if (choice == "5") {
			Lute = Lute + 1;
		}
		if (choice == "6") {
			Lyre = Lyre + 1;
		}
		if (choice == "7") {
			Horn = Horn + 1;
		}
		if (choice == "8") {
			PanFlute = PanFlute + 1;
		}
		if (choice == "9") {
			Shawm = Shawm + 1;
		}
		if (choice == "10") {
			Viol = Viol + 1;
		}
		Leather = 1;
		Dagger = Dagger + 1;
	}
	if (CLASS == "cleric" || CLASS == "Cleric") {
		CLASS = "Cleric";
		do {
			system("CLS");
			std::cout << std::endl;
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Mace \n";
			std::cout << "2) Warhammer \n";
			std::cout << "Which one of these weapons do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2"));
		if (choice == "1") {
			Mace = Mace + 1;
		}
		if (choice == "2") {
			Warhammer = Warhammer + 1;
		}
		do {
			system("CLS");
			std::cout << std::endl;
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Scale Mail \n";
			std::cout << "2) Leather Armour \n";
			std::cout << "3) Chain Mail \n";
			std::cout << "Which one of these armours do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3"));
		if (choice == "1") {
			ScaleMail = ScaleMail + 1;
		}
		if (choice == "2") {
			Leather = Leather + 1;
		}
		if (choice == "3") {
			ChainMail = ChainMail + 1;
		}
		do {
			system("CLS");
			std::cout << std::endl;
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Club             8) Mace \n";
			std::cout << "2) Dagger           9) Quarterstaff \n";
			std::cout << "3) Greatclub        10) Sickle \n";
			std::cout << "4) Handaxe          11) Spear \n";
			std::cout << "5) Javelin          12) Dart \n";
			std::cout << "6) Light Crossbow   13) Shortbow \n";
			std::cout << "7) Light Hammer     14) Sling \n";
			std::cout << std::endl;
			std::cout << "Which one of these weapons do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11" || choice == "12" || choice == "13" || choice == "14"));
		if (choice == "1") {
			Club = Club + 1;
		}
		if (choice == "2") {
			Dagger = Dagger + 1;
		}
		if (choice == "3") {
			Greatclub = Greatclub + 1;
		}
		if (choice == "4") {
			Handaxe = Handaxe + 1;
		}
		if (choice == "5") {
			Javelin = Javelin + 1;
		}
		if (choice == "6") {
			LightCrossbow = LightCrossbow + 1;
		}
		if (choice == "7") {
			LightHammer = LightHammer + 1;
		}
		if (choice == "8") {
			Mace = Mace + 1;
		}
		if (choice == "9") {
			Quarterstaff = Quarterstaff + 1;
		}
		if (choice == "10") {
			Sickle = Sickle + 1;
		}
		if (choice == "11") {
			Spear = Spear + 1;
		}
		if (choice == "12") {
			Dart = Dart + 1;
		}
		if (choice == "13") {
			Shortbow = Shortbow + 1;
		}
		if (choice == "14") {
			Sling = Sling + 1;
		}
		Shield = Shield + 1;
		HolySymbol = HolySymbol + 1;
	}
	if (CLASS == "druid" || CLASS == "Druid") {
		CLASS = "Druid";
		do {
			system("CLS");
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Club          9) Sickle \n";
			std::cout << "2) Dagger        10) Spear \n";
			std::cout << "3) Greatclub     11) Light Crossbow \n";
			std::cout << "4) Handaxe       12) Dart \n";
			std::cout << "5) Javelin       13) Shortbow \n";
			std::cout << "6) Light Hammer  14) Sling \n";
			std::cout << "7) Mace          15) Wooden Shield \n";
			std::cout << "8) Quarterstaff \n";
			std::cout << std::endl;
			std::cout << "Which one of these weapons do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11" || choice == "12" || choice == "13" || choice == "14" || choice == "15"));
		if (choice == "1") {
			Club = Club + 1;
		}
		if (choice == "2") {
			Dagger = Dagger + 1;
		}
		if (choice == "3") {
			Greatclub = Greatclub + 1;
		}
		if (choice == "4") {
			Handaxe = Handaxe + 1;
		}
		if (choice == "5") {
			Javelin = Javelin + 1;
		}
		if (choice == "6") {
			LightHammer = LightHammer + 1;
		}
		if (choice == "7") {
			Mace = Mace + 1;
		}
		if (choice == "8") {
			Quarterstaff = Quarterstaff + 1;
		}
		if (choice == "9") {
			Sickle = Sickle + 1;
		}
		if (choice == "10") {
			Spear = Spear + 1;
		}
		if (choice == "11") {
			LightCrossbow = LightCrossbow + 1;
		}
		if (choice == "12") {
			Dart = Dart + 1;
		}
		if (choice == "13") {
			Shortbow = Shortbow + 1;
		}
		if (choice == "14") {
			Sling = Sling + 1;
		}
		if (choice == "15") {
			Shield = Shield + 1;
		}
		do {
			system("CLS");
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Club          7) Mace  \n";
			std::cout << "2) Dagger        8) Quarterstaff \n";
			std::cout << "3) Greatclub     9) Sickle \n";
			std::cout << "4) Handaxe       10) Spear \n";
			std::cout << "5) Javelin       11) Scimitar \n";
			std::cout << "6) Light Hammer  \n";
			std::cout << std::endl;
			std::cout << "Which one of these weapons do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11"));
		if (choice == "1") {
			Club = Club + 1;
		}
		if (choice == "2") {
			Dagger = Dagger + 1;
		}
		if (choice == "3") {
			Greatclub = Greatclub + 1;
		}
		if (choice == "4") {
			Handaxe = Handaxe + 1;
		}
		if (choice == "5") {
			Javelin = Javelin + 1;
		}
		if (choice == "6") {
			LightHammer = LightHammer + 1;
		}
		if (choice == "7") {
			Mace = Mace + 1;
		}
		if (choice == "8") {
			Quarterstaff = Quarterstaff + 1;
		}
		if (choice == "9") {
			Sickle = Sickle + 1;
		}
		if (choice == "10") {
			Spear = Spear + 1;
		}
		if (choice == "11") {
			Scimitar = Scimitar + 1;
		}
		Leather = 1;
		DruidicFocus = 1;
	}
	if (CLASS == "fighter" || CLASS == "Fighter") {
		CLASS = "Fighter";
		do {
			system("CLS");
			std::cout << std::endl;
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Chain Mail \n";
			std::cout << "2) Leather Armour & Longbow \n";
			std::cout << std::endl;
			std::cout << "Which one of these packs do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2"));
		if (choice == "1") {
			ChainMail = ChainMail + 1;
		}
		if (choice == "2") {
			Leather = Leather + 1;
			Longbow = Longbow + 1;
		}
		do {
			system("CLS");
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Battleaxe      10) Morningstar \n";
			std::cout << "2) Flail          11) Pike \n";
			std::cout << "3) Glaive         12) Rapier \n";
			std::cout << "4) Greataxe       13) Scimitar \n";
			std::cout << "5) Greatsword     14) Shortsword \n";
			std::cout << "6) Halberd        15) Trident \n";
			std::cout << "7) Lance          16) Warpick \n";
			std::cout << "8) Longsword      17) Warhammer\n";
			std::cout << "9) Maul           18) Whip \n";
			std::cout << "       19) Shield \n";
			std::cout << std::endl;
			std::cout << "Which one of these weapons do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11" || choice == "12" || choice == "13" || choice == "14" || choice == "15" || choice == "16" || choice == "17" || choice == "18" || choice == "19"));
		if (choice == "1") {
			Battleaxe = Battleaxe + 1;
		}
		if (choice == "2") {
			Flail = Flail + 1;
		}
		if (choice == "3") {
			Glaive = Glaive + 1;
		}
		if (choice == "4") {
			Greataxe = Greataxe + 1;
		}
		if (choice == "5") {
			Greatsword = Greatsword + 1;
		}
		if (choice == "6") {
			Halberd = Halberd + 1;
		}
		if (choice == "7") {
			Lance = Lance + 1;
		}
		if (choice == "8") {
			Longsword = Longsword + 1;
		}
		if (choice == "9") {
			Maul = Maul + 1;
		}
		if (choice == "10") {
			Morningstar = Morningstar + 1;
		}
		if (choice == "11") {
			Pike = Pike + 1;
		}
		if (choice == "12") {
			Rapier = Rapier + 1;
		}
		if (choice == "13") {
			Scimitar = Scimitar + 1;
		}
		if (choice == "14") {
			Shortsword = Shortsword + 1;
		}
		if (choice == "15") {
			Trident = Trident + 1;
		}
		if (choice == "16") {
			WarPick = WarPick + 1;
		}
		if (choice == "17") {
			Warhammer = Warhammer + 1;
		}
		if (choice == "18") {
			Whip = Whip + 1;
		}
		if (choice == "19") {
			Shield = Shield + 1;
		}
		do {
			system("CLS");
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Battleaxe      10) Morningstar \n";
			std::cout << "2) Flail          11) Pike \n";
			std::cout << "3) Glaive         12) Rapier \n";
			std::cout << "4) Greataxe       13) Scimitar \n";
			std::cout << "5) Greatsword     14) Shortsword \n";
			std::cout << "6) Halberd        15) Trident \n";
			std::cout << "7) Lance          16) Warpick \n";
			std::cout << "8) Longsword      17) Warhammer\n";
			std::cout << "9) Maul           18) Whip \n";
			std::cout << "       19) Shield \n";
			std::cout << std::endl;
			std::cout << "Which one of these weapons do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11" || choice == "12" || choice == "13" || choice == "14" || choice == "15" || choice == "16" || choice == "17" || choice == "18" || choice == "19"));
		if (choice == "1") {
			Battleaxe = Battleaxe + 1;
		}
		if (choice == "2") {
			Flail = Flail + 1;
		}
		if (choice == "3") {
			Glaive = Glaive + 1;
		}
		if (choice == "4") {
			Greataxe = Greataxe + 1;
		}
		if (choice == "5") {
			Greatsword = Greatsword + 1;
		}
		if (choice == "6") {
			Halberd = Halberd + 1;
		}
		if (choice == "7") {
			Lance = Lance + 1;
		}
		if (choice == "8") {
			Longsword = Longsword + 1;
		}
		if (choice == "9") {
			Maul = Maul + 1;
		}
		if (choice == "10") {
			Morningstar = Morningstar + 1;
		}
		if (choice == "11") {
			Pike = Pike + 1;
		}
		if (choice == "12") {
			Rapier = Rapier + 1;
		}
		if (choice == "13") {
			Scimitar = Scimitar + 1;
		}
		if (choice == "14") {
			Shortsword = Shortsword + 1;
		}
		if (choice == "15") {
			Trident = Trident + 1;
		}
		if (choice == "16") {
			WarPick = WarPick + 1;
		}
		if (choice == "17") {
			Warhammer = Warhammer + 1;
		}
		if (choice == "18") {
			Whip = Whip + 1;
		}
		if (choice == "19") {
			Shield = Shield + 1;
		}
		do {
			system("CLS");
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Light Crossbow \n";
			std::cout << "2) Handaxe x2 \n";
			std::cout << std::endl;
			std::cout << "Which one of these weapons do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2"));
		if (choice == "1") {
			LightCrossbow = LightCrossbow + 1;
		}
		if (choice == "2") {
			Handaxe = Handaxe + 2;
		}
	}
	if (CLASS == "monk" || CLASS == "Monk") {
		CLASS = "Monk";
		do {
			std::cout << std::endl;
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Club          9) Sickle \n";
			std::cout << "2) Dagger        10) Spear \n";
			std::cout << "3) Greatclub     11) Light Crossbow \n";
			std::cout << "4) Handaxe       12) Dart \n";
			std::cout << "5) Javelin       13) Shortbow \n";
			std::cout << "6) Light Hammer  14) Sling \n";
			std::cout << "7) Mace          15) Shortsword \n";
			std::cout << "8) Quarterstaff \n";
			std::cout << std::endl;
			std::cout << "Which one of these weapons do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11" || choice == "12" || choice == "13" || choice == "14" || choice == "15"));
		if (choice == "1") {
			Club = Club + 1;
		}
		if (choice == "2") {
			Dagger = Dagger + 1;
		}
		if (choice == "3") {
			Greatclub = Greatclub + 1;
		}
		if (choice == "4") {
			Handaxe = Handaxe + 1;
		}
		if (choice == "5") {
			Javelin = Javelin + 1;
		}
		if (choice == "6") {
			LightHammer = LightHammer + 1;
		}
		if (choice == "7") {
			Mace = Mace + 1;
		}
		if (choice == "8") {
			Quarterstaff = Quarterstaff + 1;
		}
		if (choice == "9") {
			Sickle = Sickle + 1;
		}
		if (choice == "10") {
			Spear = Spear + 1;
		}
		if (choice == "11") {
			LightCrossbow = LightCrossbow + 1;
		}
		if (choice == "12") {
			Dart = Dart + 1;
		}
		if (choice == "13") {
			Shortbow = Shortbow + 1;
		}
		if (choice == "14") {
			Sling = Sling + 1;
		}
		if (choice == "15") {
			Shortsword = Shortsword + 1;
		}
		Dart = Dart + 10;
	}
	if (CLASS == "paladin" || CLASS == "Paladin") {
		CLASS = "Paladin";
		do {
			std::cout << std::endl;
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Battleaxe      11) Pike \n";
			std::cout << "2) Flail          12) Rapier \n";
			std::cout << "3) Glaive         13) Scimitar \n";
			std::cout << "4) Greataxe       14) Shortsword \n";
			std::cout << "5) Greatsword     15) Trident \n";
			std::cout << "6) Halberd        16) Warpick \n";
			std::cout << "7) Lance          17) Warhammer \n";
			std::cout << "8) Longsword      18) Whip \n";
			std::cout << "9) Maul           19) Shield \n";
			std::cout << "10) Morningstar\n";
			std::cout << std::endl;
			std::cout << "Which one of these weapons do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11" || choice == "12" || choice == "13" || choice == "14" || choice == "15" || choice == "16" || choice == "17" || choice == "18" || choice == "19"));
		if (choice == "1") {
			Battleaxe = Battleaxe + 1;
		}
		if (choice == "2") {
			Flail = Flail + 1;
		}
		if (choice == "3") {
			Glaive = Glaive + 1;
		}
		if (choice == "4") {
			Greataxe = Greataxe + 1;
		}
		if (choice == "5") {
			Greatsword = Greatsword + 1;
		}
		if (choice == "6") {
			Halberd = Halberd + 1;
		}
		if (choice == "7") {
			Lance = Lance + 1;
		}
		if (choice == "8") {
			Longsword = Longsword + 1;
		}
		if (choice == "9") {
			Maul = Maul + 1;
		}
		if (choice == "10") {
			Morningstar = Morningstar + 1;
		}
		if (choice == "11") {
			Pike = Pike + 1;
		}
		if (choice == "12") {
			Rapier = Rapier + 1;
		}
		if (choice == "13") {
			Scimitar = Scimitar + 1;
		}
		if (choice == "14") {
			Shortsword = Shortsword + 1;
		}
		if (choice == "15") {
			Trident = Trident + 1;
		}
		if (choice == "16") {
			WarPick = WarPick + 1;
		}
		if (choice == "17") {
			Warhammer = Warhammer + 1;
		}
		if (choice == "18") {
			Whip = Whip + 1;
		}
		if (choice == "19") {
			Shield = Shield + 1;
		}
		do {
			system("CLS");
			std::cout << std::endl;
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Battleaxe      11) Pike \n";
			std::cout << "2) Flail          12) Rapier \n";
			std::cout << "3) Glaive         13) Scimitar \n";
			std::cout << "4) Greataxe       14) Shortsword \n";
			std::cout << "5) Greatsword     15) Trident \n";
			std::cout << "6) Halberd        16) Warpick \n";
			std::cout << "7) Lance          17) Warhammer \n";
			std::cout << "8) Longsword      18) Whip \n";
			std::cout << "9) Maul           19) Shield \n";
			std::cout << "10) Morningstar\n";
			std::cout << std::endl;
			std::cout << "Which one of these weapons do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11" || choice == "12" || choice == "13" || choice == "14" || choice == "15" || choice == "16" || choice == "17" || choice == "18" || choice == "19"));
		if (choice == "1") {
			Battleaxe = Battleaxe + 1;
		}
		if (choice == "2") {
			Flail = Flail + 1;
		}
		if (choice == "3") {
			Glaive = Glaive + 1;
		}
		if (choice == "4") {
			Greataxe = Greataxe + 1;
		}
		if (choice == "5") {
			Greatsword = Greatsword + 1;
		}
		if (choice == "6") {
			Halberd = Halberd + 1;
		}
		if (choice == "7") {
			Lance = Lance + 1;
		}
		if (choice == "8") {
			Longsword = Longsword + 1;
		}
		if (choice == "9") {
			Maul = Maul + 1;
		}
		if (choice == "10") {
			Morningstar = Morningstar + 1;
		}
		if (choice == "11") {
			Pike = Pike + 1;
		}
		if (choice == "12") {
			Rapier = Rapier + 1;
		}
		if (choice == "13") {
			Scimitar = Scimitar + 1;
		}
		if (choice == "14") {
			Shortsword = Shortsword + 1;
		}
		if (choice == "15") {
			Trident = Trident + 1;
		}
		if (choice == "16") {
			WarPick = WarPick + 1;
		}
		if (choice == "17") {
			Warhammer = Warhammer + 1;
		}
		if (choice == "18") {
			Whip = Whip + 1;
		}
		if (choice == "19") {
			Shield = Shield + 1;
		}
		do {
			system("CLS");
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Club          6) Light Hammer  \n";
			std::cout << "2) Dagger        7) Mace \n";
			std::cout << "3) Greatclub     8) Quarterstaff \n";
			std::cout << "4) Handaxe       9) Sickle \n";
			std::cout << "5) Javelin x5    10) Spear \n";
			std::cout << std::endl;
			std::cout << "Which one of these weapons do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10"));
		if (choice == "1") {
			Club = Club + 1;
		}
		if (choice == "2") {
			Dagger = Dagger + 1;
		}
		if (choice == "3") {
			Greatclub = Greatclub + 1;
		}
		if (choice == "4") {
			Handaxe = Handaxe + 1;
		}
		if (choice == "5") {
			Javelin = Javelin + 5;
		}
		if (choice == "6") {
			LightHammer = LightHammer + 1;
		}
		if (choice == "7") {
			Mace = Mace + 1;
		}
		if (choice == "8") {
			Quarterstaff = Quarterstaff + 1;
		}
		if (choice == "9") {
			Sickle = Sickle + 1;
		}
		if (choice == "10") {
			Spear = Spear + 1;
		}
		ChainMail = ChainMail + 1;
		HolySymbol = HolySymbol + 1;
	}
	if (CLASS == "ranger" || CLASS == "Ranger") {
		CLASS = "Ranger";
		do {
			std::cout << std::endl;
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Scale Mail \n";
			std::cout << "2) Leather Armour \n";
			std::cout << std::endl;
			std::cout << "Which one of these packs do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2"));
		if (choice == "1") {
			ScaleMail = ScaleMail + 1;
		}
		if (choice == "2") {
			Leather = Leather + 1;
		}
		do {
			system("CLS");
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Club          7) Mace  \n";
			std::cout << "2) Dagger        8) Quarterstaff \n";
			std::cout << "3) Greatclub     9) Sickle \n";
			std::cout << "4) Handaxe       10) Spear \n";
			std::cout << "5) Javelin       11) Shortsword x2 \n";
			std::cout << "6) Light Hammer  \n";
			std::cout << std::endl;
			std::cout << "Which one of these weapons do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11"));
		if (choice == "1") {
			Club = Club + 1;
		}
		if (choice == "2") {
			Dagger = Dagger + 1;
		}
		if (choice == "3") {
			Greatclub = Greatclub + 1;
		}
		if (choice == "4") {
			Handaxe = Handaxe + 1;
		}
		if (choice == "5") {
			Javelin = Javelin + 1;
		}
		if (choice == "6") {
			LightHammer = LightHammer + 1;
		}
		if (choice == "7") {
			Mace = Mace + 1;
		}
		if (choice == "8") {
			Quarterstaff = Quarterstaff + 1;
		}
		if (choice == "9") {
			Sickle = Sickle + 1;
		}
		if (choice == "10") {
			Spear = Spear + 1;
		}
		if (choice == "11") {
			Shortsword = Shortsword + 2;
		}
		do {
			system("CLS");
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Club          6) Light Hammer  \n";
			std::cout << "2) Dagger        7) Mace \n";
			std::cout << "3) Greatclub     8) Quarterstaff \n";
			std::cout << "4) Handaxe       9) Sickle \n";
			std::cout << "5) Javelin       10) Spear \n";
			std::cout << std::endl;
			std::cout << "Which one of these weapons do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10"));
		if (choice == "1") {
			Club = Club + 1;
		}
		if (choice == "2") {
			Dagger = Dagger + 1;
		}
		if (choice == "3") {
			Greatclub = Greatclub + 1;
		}
		if (choice == "4") {
			Handaxe = Handaxe + 1;
		}
		if (choice == "5") {
			Javelin = Javelin + 1;
		}
		if (choice == "6") {
			LightHammer = LightHammer + 1;
		}
		if (choice == "7") {
			Mace = Mace + 1;
		}
		if (choice == "8") {
			Quarterstaff = Quarterstaff + 1;
		}
		if (choice == "9") {
			Sickle = Sickle + 1;
		}
		if (choice == "10") {
			Spear = Spear + 1;
		}
		Longbow = Longbow + 1;
	}
	if (CLASS == "rogue" || CLASS == "Rogue") {
		CLASS = "Rogue";
		do {
			std::cout << std::endl;
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Rapier \n";
			std::cout << "2) Shortsword \n";
			std::cout << std::endl;
			std::cout << "Which one of these weapons do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2"));
		if (choice == "1") {
			Rapier = Rapier + 1;
		}
		if (choice == "2") {
			Shortsword = Shortsword + 1;
		}
		do {
			system("CLS");
			std::cout << std::endl;
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Shortbow \n";
			std::cout << "2) Shortsword \n";
			std::cout << std::endl;
			std::cout << "Which one of these weapons do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2"));
		if (choice == "1") {
			Shortbow = Shortbow + 1;
		}
		if (choice == "2") {
			Shortsword = Shortsword + 1;
		}
		Leather = Leather + 1;
		Dagger = Dagger + 2;
	}
	if (CLASS == "sorcerer" || CLASS == "Sorcerer") {
		CLASS = "Sorcerer";
		do {
			std::cout << std::endl;
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Club             8) Mace \n";
			std::cout << "2) Dagger           9) Quarterstaff \n";
			std::cout << "3) Greatclub        10) Sickle \n";
			std::cout << "4) Handaxe          11) Spear \n";
			std::cout << "5) Javelin          12) Dart \n";
			std::cout << "6) Light Crossbow   13) Shortbow \n";
			std::cout << "7) Light Hammer     14) Sling \n";
			std::cout << std::endl;
			std::cout << "Which one of these weapons do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11" || choice == "12" || choice == "13" || choice == "14"));
		if (choice == "1") {
			Club = Club + 1;
		}
		if (choice == "2") {
			Dagger = Dagger + 1;
		}
		if (choice == "3") {
			Greatclub = Greatclub + 1;
		}
		if (choice == "4") {
			Handaxe = Handaxe + 1;
		}
		if (choice == "5") {
			Javelin = Javelin + 1;
		}
		if (choice == "6") {
			LightCrossbow = LightCrossbow + 1;
		}
		if (choice == "7") {
			LightHammer = LightHammer + 1;
		}
		if (choice == "8") {
			Mace = Mace + 1;
		}
		if (choice == "9") {
			Quarterstaff = Quarterstaff + 1;
		}
		if (choice == "10") {
			Sickle = Sickle + 1;
		}
		if (choice == "11") {
			Spear = Spear + 1;
		}
		if (choice == "12") {
			Dart = Dart + 1;
		}
		if (choice == "13") {
			Shortbow = Shortbow + 1;
		}
		if (choice == "14") {
			Sling = Sling + 1;
		}
		ArcaneFocus = ArcaneFocus + 1;
		Dagger = Dagger + 2;
	}
	if (CLASS == "warlock" || CLASS == "Warlock") {
		CLASS = "Warlock";
		do {
			system("CLS");
			std::cout << std::endl;
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Club             8) Mace \n";
			std::cout << "2) Dagger           9) Quarterstaff \n";
			std::cout << "3) Greatclub        10) Sickle \n";
			std::cout << "4) Handaxe          11) Spear \n";
			std::cout << "5) Javelin          12) Dart \n";
			std::cout << "6) Light Crossbow   13) Shortbow \n";
			std::cout << "7) Light Hammer     14) Sling \n";
			std::cout << std::endl;
			std::cout << "Which one of these weapons do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11" || choice == "12" || choice == "13" || choice == "14"));
		if (choice == "1") {
			Club = Club + 1;
		}
		if (choice == "2") {
			Dagger = Dagger + 1;
		}
		if (choice == "3") {
			Greatclub = Greatclub + 1;
		}
		if (choice == "4") {
			Handaxe = Handaxe + 1;
		}
		if (choice == "5") {
			Javelin = Javelin + 1;
		}
		if (choice == "6") {
			LightCrossbow = LightCrossbow + 1;
		}
		if (choice == "7") {
			LightHammer = LightHammer + 1;
		}
		if (choice == "8") {
			Mace = Mace + 1;
		}
		if (choice == "9") {
			Quarterstaff = Quarterstaff + 1;
		}
		if (choice == "10") {
			Sickle = Sickle + 1;
		}
		if (choice == "11") {
			Spear = Spear + 1;
		}
		if (choice == "12") {
			Dart = Dart + 1;
		}
		if (choice == "13") {
			Shortbow = Shortbow + 1;
		}
		if (choice == "14") {
			Sling = Sling + 1;
		}
		do {
			system("CLS");
			std::cout << std::endl;
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Club             8) Mace \n";
			std::cout << "2) Dagger           9) Quarterstaff \n";
			std::cout << "3) Greatclub        10) Sickle \n";
			std::cout << "4) Handaxe          11) Spear \n";
			std::cout << "5) Javelin          12) Dart \n";
			std::cout << "6) Light Crossbow   13) Shortbow \n";
			std::cout << "7) Light Hammer     14) Sling \n";
			std::cout << std::endl;
			std::cout << "Which one of these weapons do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11" || choice == "12" || choice == "13" || choice == "14"));
		if (choice == "1") {
			Club = Club + 1;
		}
		if (choice == "2") {
			Dagger = Dagger + 1;
		}
		if (choice == "3") {
			Greatclub = Greatclub + 1;
		}
		if (choice == "4") {
			Handaxe = Handaxe + 1;
		}
		if (choice == "5") {
			Javelin = Javelin + 1;
		}
		if (choice == "6") {
			LightCrossbow = LightCrossbow + 1;
		}
		if (choice == "7") {
			LightHammer = LightHammer + 1;
		}
		if (choice == "8") {
			Mace = Mace + 1;
		}
		if (choice == "9") {
			Quarterstaff = Quarterstaff + 1;
		}
		if (choice == "10") {
			Sickle = Sickle + 1;
		}
		if (choice == "11") {
			Spear = Spear + 1;
		}
		if (choice == "12") {
			Dart = Dart + 1;
		}
		if (choice == "13") {
			Shortbow = Shortbow + 1;
		}
		if (choice == "14") {
			Sling = Sling + 1;
		}
		Leather = Leather + 1;
		Dagger = Dagger + 2;
		ArcaneFocus = ArcaneFocus + 1;
	}
	if (CLASS == "wizard" || CLASS == "Wizard") {
		CLASS = "Wizard";
		do {
			system("CLS");
			std::cout << std::endl;
			std::cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
			std::cout << std::endl;
			std::cout << "1) Dagger \n";
			std::cout << "2) Quarterstaff \n";
			std::cout << std::endl;
			std::cout << "Which one of these weapons do you have?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2"));
		if (choice == "1") {
			Dagger = Dagger + 1;
		}
		if (choice == "2") {
			Quarterstaff = Quarterstaff + 1;
		}
		ArcaneFocus = ArcaneFocus + 1;
		SpellBook = SpellBook + 1;
	}

	//Stats
	score = 15;
	do {
		system("CLS");
		if (CLASS == "Barbarian") {
			std::cout << "As a Barbarian you'll want your highest \n";
			std::cout << "ability scores to be Strength and Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Bard") {
			std::cout << "As a Bard you'll want your highest ability \n";
			std::cout << "scores to be Charisma and Dexterity. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Cleric") {
			std::cout << "As a Cleric you'll want your highest ability \n";
			std::cout << "scores to be Wisdom and Strength/ Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Druid") {
			std::cout << "As a Druid you'll want your highest ability \n";
			std::cout << "scores to be Wisdom and Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Fighter") {
			std::cout << "As a Fighter you'll want your highest ability \n";
			std::cout << "scores to be Strenght/ Dexterity and Constitution/ Intelligence. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Monk") {
			std::cout << "As a Monk you'll want your highest ability \n";
			std::cout << "scores to be Dexterity and Wisdom. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Paladin") {
			std::cout << "As a Paladin you'll want your highest ability \n";
			std::cout << "scores to be Strength and Charisma. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Ranger") {
			std::cout << "As a Ranger you'll want your highest ability \n";
			std::cout << "scores to be Dexterity and Wisdom/ Strength. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Rogue") {
			std::cout << "As a Rogue you'll want your highest ability \n";
			std::cout << "scores to be Dexterity and Intelligence/ Charisma. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Sorcerer") {
			std::cout << "As a Sorcerer you'll want your highest ability \n";
			std::cout << "scores to be Charisma/ Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Warlock") {
			std::cout << "As a Warlock you'll want your highest ability \n";
			std::cout << "scores to be Charisma/ Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Wizard") {
			std::cout << "As a Wizard you'll want your highest ability \n";
			std::cout << "scores to be Intelligence and Constitution/ Dexterity/ Charisma. \n";
			std::cout << std::endl;
		}
		std::cout << "What will your highest stat be?  \n";
		std::cout << "1) Strength            Current: " << STR << std::endl;
		std::cout << "2) Dexterity           Current: " << DEX << std::endl;
		std::cout << "3) Constitution        Current: " << CON << std::endl;
		std::cout << "4) Intelligence        Current: " << INT << std::endl;
		std::cout << "5) Wisdom              Current: " << WIS << std::endl;
		std::cout << "6) Charisma            Current: " << CHA << std::endl;
		std::cout << "Choice 1~6:  ";
		std::getline(std::cin,choice);
	} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
	if (choice == "1") {
		STR = score;
	}
	if (choice == "2") {
		DEX = score;
	}
	if (choice == "3") {
		CON = score;
	}
	if (choice == "4") {
		INT = score;
	}
	if (choice == "5") {
		WIS = score;
	}
	if (choice == "6") {
		CHA = score;
	}
Stat2:
	score = 14;
	do {
		system("CLS");
		if (CLASS == "Barbarian") {
			std::cout << "As a Barbarian you'll want your highest \n";
			std::cout << "ability scores to be Strength and Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Bard") {
			std::cout << "As a Bard you'll want your highest ability \n";
			std::cout << "scores to be Charisma and Dexterity. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Cleric") {
			std::cout << "As a Cleric you'll want your highest ability \n";
			std::cout << "scores to be Wisdom and Strength/ Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Druid") {
			std::cout << "As a Druid you'll want your highest ability \n";
			std::cout << "scores to be Wisdom and Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Fighter") {
			std::cout << "As a Fighter you'll want your highest ability \n";
			std::cout << "scores to be Strength/ Dexterity and Constitution/ Intelligence. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Monk") {
			std::cout << "As a Monk you'll want your highest ability \n";
			std::cout << "scores to be Dexterity and Wisdom. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Paladin") {
			std::cout << "As a Paladin you'll want your highest ability \n";
			std::cout << "scores to be Strength and Charisma. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Ranger") {
			std::cout << "As a Ranger you'll want your highest ability \n";
			std::cout << "scores to be Dexterity and Wisdom/ Strength. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Rogue") {
			std::cout << "As a Rogue you'll want your highest ability \n";
			std::cout << "scores to be Dexterity and Intelligence/ Charisma. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Sorcerer") {
			std::cout << "As a Sorcerer you'll want your highest ability \n";
			std::cout << "scores to be Charisma/ Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Warlock") {
			std::cout << "As a Warlock you'll want your highest ability \n";
			std::cout << "scores to be Charisma/ Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Wizard") {
			std::cout << "As a Wizard you'll want your highest ability \n";
			std::cout << "scores to be Intelligence and Constitution/ Dexterity/ Charisma. \n";
			std::cout << std::endl;
		}
		std::cout << "What will your second highest stat be?  \n";
		std::cout << "1) Strength            Current: " << STR << std::endl;
		std::cout << "2) Dexterity           Current: " << DEX << std::endl;
		std::cout << "3) Constitution        Current: " << CON << std::endl;
		std::cout << "4) Intelligence        Current: " << INT << std::endl;
		std::cout << "5) Wisdom              Current: " << WIS << std::endl;
		std::cout << "6) Charisma            Current: " << CHA << std::endl;
		std::cout << "Choice 1~6:  ";
		std::getline(std::cin,choice);
	} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
	if (choice == "1") {
		if (STR >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat2;
		}
		STR = score;
	}
	if (choice == "2") {
		if (DEX >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat2;
		}
		DEX = score;
	}
	if (choice == "3") {
		if (CON >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat2;
		}
		CON = score;
	}
	if (choice == "4") {
		if (INT >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat2;
		}
		INT = score;
	}
	if (choice == "5") {
		if (WIS >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat2;
		}
		WIS = score;
	}
	if (choice == "6") {
		if (CHA >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat2;
		}
		CHA = score;
	}
Stat3:
	score = 13;
	do {
		system("CLS");
		if (CLASS == "Barbarian") {
			std::cout << "As a Barbarian you'll want your highest \n";
			std::cout << "ability scores to be Strength and Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Bard") {
			std::cout << "As a Bard you'll want your highest ability \n";
			std::cout << "scores to be Charisma and Dexterity. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Cleric") {
			std::cout << "As a Cleric you'll want your highest ability \n";
			std::cout << "scores to be Wisdom and Strength/ Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Druid") {
			std::cout << "As a Druid you'll want your highest ability \n";
			std::cout << "scores to be Wisdom and Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Fighter") {
			std::cout << "As a Fighter you'll want your highest ability \n";
			std::cout << "scores to be Strength/ Dexterity and Constitution/ Intelligence. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Monk") {
			std::cout << "As a Monk you'll want your highest ability \n";
			std::cout << "scores to be Dexterity and Wisdom. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Paladin") {
			std::cout << "As a Paladin you'll want your highest ability \n";
			std::cout << "scores to be Strength and Charisma. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Ranger") {
			std::cout << "As a Ranger you'll want your highest ability \n";
			std::cout << "scores to be Dexterity and Wisdom/ Strength. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Rogue") {
			std::cout << "As a Rogue you'll want your highest ability \n";
			std::cout << "scores to be Dexterity and Intelligence/ Charisma. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Sorcerer") {
			std::cout << "As a Sorcerer you'll want your highest ability \n";
			std::cout << "scores to be Charisma/ Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Warlock") {
			std::cout << "As a Warlock you'll want your highest ability \n";
			std::cout << "scores to be Charisma/ Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Wizard") {
			std::cout << "As a Wizard you'll want your highest ability \n";
			std::cout << "scores to be Intelligence and Constitution/ Dexterity/ Charisma. \n";
			std::cout << std::endl;
		}
		std::cout << "What will your third highest stat be?  \n";
		std::cout << "1) Strength            Current: " << STR << std::endl;
		std::cout << "2) Dexterity           Current: " << DEX << std::endl;
		std::cout << "3) Constitution        Current: " << CON << std::endl;
		std::cout << "4) Intelligence        Current: " << INT << std::endl;
		std::cout << "5) Wisdom              Current: " << WIS << std::endl;
		std::cout << "6) Charisma            Current: " << CHA << std::endl;
		std::cout << "Choice 1~6:  ";
		std::getline(std::cin,choice);
	} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
	if (choice == "1") {
		if (STR >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat3;
		}
		STR = score;
	}
	if (choice == "2") {
		if (DEX >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat3;
		}
		DEX = score;
	}
	if (choice == "3") {
		if (CON >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat3;
		}
		CON = score;
	}
	if (choice == "4") {
		if (INT >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat3;
		}
		INT = score;
	}
	if (choice == "5") {
		if (WIS >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat3;
		}
		WIS = score;
	}
	if (choice == "6") {
		if (CHA >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat3;
		}
		CHA = score;
	}
Stat4:
	score = 12;
	do {
		system("CLS");
		if (CLASS == "Barbarian") {
			std::cout << "As a Barbarian you'll want your highest \n";
			std::cout << "ability scores to be Strength and Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Bard") {
			std::cout << "As a Bard you'll want your highest ability \n";
			std::cout << "scores to be Charisma and Dexterity. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Cleric") {
			std::cout << "As a Cleric you'll want your highest ability \n";
			std::cout << "scores to be Wisdom and Strength/ Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Druid") {
			std::cout << "As a Druid you'll want your highest ability \n";
			std::cout << "scores to be Wisdom and Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Fighter") {
			std::cout << "As a Fighter you'll want your highest ability \n";
			std::cout << "scores to be Strength/ Dexterity and Constitution/ Intelligence. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Monk") {
			std::cout << "As a Monk you'll want your highest ability \n";
			std::cout << "scores to be Dexterity and Wisdom. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Paladin") {
			std::cout << "As a Paladin you'll want your highest ability \n";
			std::cout << "scores to be Strength and Charisma. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Ranger") {
			std::cout << "As a Ranger you'll want your highest ability \n";
			std::cout << "scores to be Dexterity and Wisdom/ Strength. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Rogue") {
			std::cout << "As a Rogue you'll want your highest ability \n";
			std::cout << "scores to be Dexterity and Intelligence/ Charisma. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Sorcerer") {
			std::cout << "As a Sorcerer you'll want your highest ability \n";
			std::cout << "scores to be Charisma/ Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Warlock") {
			std::cout << "As a Warlock you'll want your highest ability \n";
			std::cout << "scores to be Charisma/ Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Wizard") {
			std::cout << "As a Wizard you'll want your highest ability \n";
			std::cout << "scores to be Intelligence and Constitution/ Dexterity/ Charisma. \n";
			std::cout << std::endl;
		}
		std::cout << "What will your third lowest stat be?  \n";
		std::cout << "1) Strength            Current: " << STR << std::endl;
		std::cout << "2) Dexterity           Current: " << DEX << std::endl;
		std::cout << "3) Constitution        Current: " << CON << std::endl;
		std::cout << "4) Intelligence        Current: " << INT << std::endl;
		std::cout << "5) Wisdom              Current: " << WIS << std::endl;
		std::cout << "6) Charisma            Current: " << CHA << std::endl;
		std::cout << "Choice 1~6:  ";
		std::getline(std::cin,choice);
	} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
	if (choice == "1") {
		if (STR >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat4;
		}
		STR = score;
	}
	if (choice == "2") {
		if (DEX >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat4;
		}
		DEX = score;
	}
	if (choice == "3") {
		if (CON >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat4;
		}
		CON = score;
	}
	if (choice == "4") {
		if (INT >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat4;
		}
		INT = score;
	}
	if (choice == "5") {
		if (WIS >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat4;
		}
		WIS = score;
	}
	if (choice == "6") {
		if (CHA >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat4;
		}
		CHA = score;
	}
Stat5:
	score = 10;
	do {
		system("CLS");
		if (CLASS == "Barbarian") {
			std::cout << "As a Barbarian you'll want your highest \n";
			std::cout << "ability scores to be Strength and Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Bard") {
			std::cout << "As a Bard you'll want your highest ability \n";
			std::cout << "scores to be Charisma and Dexterity. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Cleric") {
			std::cout << "As a Cleric you'll want your highest ability \n";
			std::cout << "scores to be Wisdom and Strength/ Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Druid") {
			std::cout << "As a Druid you'll want your highest ability \n";
			std::cout << "scores to be Wisdom and Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Fighter") {
			std::cout << "As a Fighter you'll want your highest ability \n";
			std::cout << "scores to be Strength/ Dexterity and Constitution/ Intelligence. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Monk") {
			std::cout << "As a Monk you'll want your highest ability \n";
			std::cout << "scores to be Dexterity and Wisdom. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Paladin") {
			std::cout << "As a Paladin you'll want your highest ability \n";
			std::cout << "scores to be Strength and Charisma. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Ranger") {
			std::cout << "As a Ranger you'll want your highest ability \n";
			std::cout << "scores to be Dexterity and Wisdom/ Strength. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Rogue") {
			std::cout << "As a Rogue you'll want your highest ability \n";
			std::cout << "scores to be Dexterity and Intelligence/ Charisma. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Sorcerer") {
			std::cout << "As a Sorcerer you'll want your highest ability \n";
			std::cout << "scores to be Charisma/ Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Warlock") {
			std::cout << "As a Warlock you'll want your highest ability \n";
			std::cout << "scores to be Charisma/ Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Wizard") {
			std::cout << "As a Wizard you'll want your highest ability \n";
			std::cout << "scores to be Intelligence and Constitution/ Dexterity/ Charisma. \n";
			std::cout << std::endl;
		}
		std::cout << "What will your second lowest stat be?  \n";
		std::cout << "1) Strength            Current: " << STR << std::endl;
		std::cout << "2) Dexterity           Current: " << DEX << std::endl;
		std::cout << "3) Constitution        Current: " << CON << std::endl;
		std::cout << "4) Intelligence        Current: " << INT << std::endl;
		std::cout << "5) Wisdom              Current: " << WIS << std::endl;
		std::cout << "6) Charisma            Current: " << CHA << std::endl;
		std::cout << "Choice 1~6:  ";
		std::getline(std::cin,choice);
	} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
	if (choice == "1") {
		if (STR >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat5;
		}
		STR = score;
	}
	if (choice == "2") {
		if (DEX >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat5;
		}
		DEX = score;
	}
	if (choice == "3") {
		if (CON >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat5;
		}
		CON = score;
	}
	if (choice == "4") {
		if (INT >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat5;
		}
		INT = score;
	}
	if (choice == "5") {
		if (WIS >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat5;
		}
		WIS = score;
	}
	if (choice == "6") {
		if (CHA >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat5;
		}
		CHA = score;
	}
Stat6:
	score = 8;
	do {
		system("CLS");
		if (CLASS == "Barbarian") {
			std::cout << "As a Barbarian you'll want your highest \n";
			std::cout << "ability scores to be Strength and Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Bard") {
			std::cout << "As a Bard you'll want your highest ability \n";
			std::cout << "scores to be Charisma and Dexterity. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Cleric") {
			std::cout << "As a Cleric you'll want your highest ability \n";
			std::cout << "scores to be Wisdom and Strength/ Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Druid") {
			std::cout << "As a Druid you'll want your highest ability \n";
			std::cout << "scores to be Wisdom and Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Fighter") {
			std::cout << "As a Fighter you'll want your highest ability \n";
			std::cout << "scores to be Strength/ Dexterity and Constitution/ Intelligence. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Monk") {
			std::cout << "As a Monk you'll want your highest ability \n";
			std::cout << "scores to be Dexterity and Wisdom. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Paladin") {
			std::cout << "As a Paladin you'll want your highest ability \n";
			std::cout << "scores to be Strength and Charisma. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Ranger") {
			std::cout << "As a Ranger you'll want your highest ability \n";
			std::cout << "scores to be Dexterity and Wisdom/ Strength. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Rogue") {
			std::cout << "As a Rogue you'll want your highest ability \n";
			std::cout << "scores to be Dexterity and Intelligence/ Charisma. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Sorcerer") {
			std::cout << "As a Sorcerer you'll want your highest ability \n";
			std::cout << "scores to be Charisma/ Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Warlock") {
			std::cout << "As a Warlock you'll want your highest ability \n";
			std::cout << "scores to be Charisma/ Constitution. \n";
			std::cout << std::endl;
		}
		if (CLASS == "Wizard") {
			std::cout << "As a Wizard you'll want your highest ability \n";
			std::cout << "scores to be Intelligence and Constitution/ Dexterity/ Charisma. \n";
			std::cout << std::endl;
		}
		std::cout << "What will your lowest stat be?  \n";
		std::cout << "1) Strength            Current: " << STR << std::endl;
		std::cout << "2) Dexterity           Current: " << DEX << std::endl;
		std::cout << "3) Constitution        Current: " << CON << std::endl;
		std::cout << "4) Intelligence        Current: " << INT << std::endl;
		std::cout << "5) Wisdom              Current: " << WIS << std::endl;
		std::cout << "6) Charisma            Current: " << CHA << std::endl;
		std::cout << "Choice 1~6:  ";
		std::getline(std::cin,choice);
	} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
	if (choice == "1") {
		if (STR >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat6;
		}
		STR = score;
	}
	if (choice == "2") {
		if (DEX >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat6;
		}
		DEX = score;
	}
	if (choice == "3") {
		if (CON >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat6;
		}
		CON = score;
	}
	if (choice == "4") {
		if (INT >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat6;
		}
		INT = score;
	}
	if (choice == "5") {
		if (WIS >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat6;
		}
		WIS = score;
	}
	if (choice == "6") {
		if (CHA >= 7) {
			std::cout << "You have already picked that stat before, please pick another to level";
			std::cin.ignore();
			std::cin.get();
			goto Stat6;
		}
		CHA = score;
	}

	//Racial Modifiers
	if (RACE == "Mountain-Dwarf") {
		STR = STR + 2;
		CON = CON + 2;
		BattleaxeMOD = PROMOD;
		HandaxeMOD = PROMOD;
		WarhammerMOD = PROMOD;
		PaddedMOD = PROMOD;
		LeatherMOD = PROMOD;
		StuddedLeatherMOD = PROMOD;
		HideMOD = PROMOD;
		ChainShirtMOD = PROMOD;
		ScaleMailMOD = PROMOD;
		BreastplateMOD = PROMOD;
		HalfPlateMOD = PROMOD;
	}
	if (RACE == "Hill-Dwarf") {
		WIS = WIS + 1;
		CON = CON + 2;
		HP = HP + 1;
		BattleaxeMOD = PROMOD;
		HandaxeMOD = PROMOD;
		WarhammerMOD = PROMOD;
	}
	if (RACE == "High-Elf") {
		DEX = DEX + 2;
		INT = INT + 1;
		PERCP = PROMOD;
		LongswordMOD = PROMOD;
		ShortswordMOD = PROMOD;
		LongbowMOD = PROMOD;
		ShortbowMOD = PROMOD;
	}
	if (RACE == "Wood-Elf") {
		DEX = DEX + 2;
		WIS = WIS + 1;
		PERCP = PERCP + 2;
		LongswordMOD = PROMOD;
		ShortswordMOD = PROMOD;
		LongbowMOD = PROMOD;
		ShortbowMOD = PROMOD;
	}
	if (RACE == "Dark-Elf") {
		DEX = DEX + 2;
		CHA = CHA + 1;
		PERCP = PERCP + 2;
		RapierMOD = PROMOD;
		ShortswordMOD = PROMOD;
		HandCrossbowMOD = PROMOD;
	}
	if (RACE == "Lightfoot-Halfling") {
		DEX = DEX + 2;
		CHA = CHA + 1;
	}
	if (RACE == "Stout-Halfling") {
		DEX = DEX + 2;
		CON = CON + 1;
	}
	if (RACE == "Human") {
		STR = STR + 1;
		DEX = DEX + 1;
		CON = CON + 1;
		INT = INT + 1;
		WIS = WIS + 1;
		CHA = CHA + 1;
	}
	if (RACE == "Dragonborn") {
		STR = STR + 2;
		CHA = CHA + 1;
	}
	if (RACE == "Forest-Gnome") {
		INT = INT + 2;
		DEX = DEX + 1;
	}
	if (RACE == "Rock-Gnome") {
		INT = INT + 2;
		CON = CON + 1;
	}
	if (RACE == "Half-Elf") {
		CHA = CHA + 2;
		DEX = DEX + 1;
		INT = INT + 1;
	}
	if (RACE == "Half-Orc") {
		STR = STR + 2;
		CON = CON + 1;
		INTIMI = INTIMI + PROMOD;
	}
	if (RACE == "Tiefling") {
		INT = INT + 1;
		CHA = CHA + 2;
	}

	StatModifiers();

	//Class Modifiers like HP and Proficiencies
	if (CLASS == "Barbarian") {
		HP = HP + 12 + CONmod;
		MAXHP = HP;
		abilityOne = "Rage";
		abilityTwo = "Unarmoured Defence";
		PaddedMOD = PROMOD;
		LeatherMOD = PROMOD;
		StuddedLeatherMOD = PROMOD;
		HideMOD = PROMOD;
		ChainShirtMOD = PROMOD;
		ScaleMailMOD = PROMOD;
		BreastplateMOD = PROMOD;
		HalfPlateMOD = PROMOD;
		ShieldMOD = PROMOD;
		ClubMOD = PROMOD;
		DaggerMOD = PROMOD;
		GreatclubMOD = PROMOD;
		HandaxeMOD = PROMOD;
		JavelinMOD = PROMOD;
		LightHammerMOD = PROMOD;
		MaceMOD = PROMOD;
		QuarterstaffMOD = PROMOD;
		SickleMOD = PROMOD;
		SpearMOD = PROMOD;
		LightCrossbowMOD = PROMOD;
		DartMOD = PROMOD;
		ShortbowMOD = PROMOD;
		SlingMOD = PROMOD;
		BattleaxeMOD = PROMOD;
		FlailMOD = PROMOD;
		GlaiveMOD = PROMOD;
		GreataxeMOD = PROMOD;
		GreatswordMOD = PROMOD;
		HalberdMOD = PROMOD;
		LanceMOD = PROMOD;
		LongswordMOD = PROMOD;
		MaulMOD = PROMOD;
		MorningstarMOD = PROMOD;
		PikeMOD = PROMOD;
		RapierMOD = PROMOD;
		ScimitarMOD = PROMOD;
		ShortswordMOD = PROMOD;
		TridentMOD = PROMOD;
		WarPickMOD = PROMOD;
		WarhammerMOD = PROMOD;
		WhipMOD = PROMOD;
		BlowgunMOD = PROMOD;
		HandCrossbowMOD = PROMOD;
		HeavyCrossbowMOD = PROMOD;
		LongbowMOD = PROMOD;
		NetMOD = PROMOD;
		GP = GP + 40;
	}
	if (CLASS == "Bard") {
		HP = HP + 8 + CONmod;
		MAXHP = HP;
		PaddedMOD = PROMOD;
		LeatherMOD = PROMOD;
		StuddedLeatherMOD = PROMOD;
		ClubMOD = PROMOD;
		DaggerMOD = PROMOD;
		GreatclubMOD = PROMOD;
		HandaxeMOD = PROMOD;
		JavelinMOD = PROMOD;
		LightHammerMOD = PROMOD;
		MaceMOD = PROMOD;
		QuarterstaffMOD = PROMOD;
		SickleMOD = PROMOD;
		SpearMOD = PROMOD;
		LightCrossbowMOD = PROMOD;
		DartMOD = PROMOD;
		ShortbowMOD = PROMOD;
		SlingMOD = PROMOD;
		RapierMOD = PROMOD;
		ShortswordMOD = PROMOD;
		HandCrossbowMOD = PROMOD;
		GP = GP + 100;
	}
	if (CLASS == "Cleric") {
		HP = HP + 8 + CONmod;
		MAXHP = HP;
		PaddedMOD = PROMOD;
		LeatherMOD = PROMOD;
		StuddedLeatherMOD = PROMOD;
		HideMOD = PROMOD;
		ChainShirtMOD = PROMOD;
		ScaleMailMOD = PROMOD;
		BreastplateMOD = PROMOD;
		HalfPlateMOD = PROMOD;
		ShieldMOD = PROMOD;
		ClubMOD = PROMOD;
		DaggerMOD = PROMOD;
		GreatclubMOD = PROMOD;
		HandaxeMOD = PROMOD;
		JavelinMOD = PROMOD;
		LightHammerMOD = PROMOD;
		MaceMOD = PROMOD;
		QuarterstaffMOD = PROMOD;
		SickleMOD = PROMOD;
		SpearMOD = PROMOD;
		LightCrossbowMOD = PROMOD;
		DartMOD = PROMOD;
		ShortbowMOD = PROMOD;
		SlingMOD = PROMOD;
		GP = GP + 100;
	}
	if (CLASS == "Druid") {
		HP = HP + 8 + CONmod;
		MAXHP = HP;
		PaddedMOD = PROMOD;
		LeatherMOD = PROMOD;
		StuddedLeatherMOD = PROMOD;
		HideMOD = PROMOD;
		ChainShirtMOD = PROMOD;
		ScaleMailMOD = PROMOD;
		BreastplateMOD = PROMOD;
		HalfPlateMOD = PROMOD;
		ShieldMOD = PROMOD;
		ClubMOD = PROMOD;
		DaggerMOD = PROMOD;
		JavelinMOD = PROMOD;
		MaceMOD = PROMOD;
		QuarterstaffMOD = PROMOD;
		SickleMOD = PROMOD;
		SpearMOD = PROMOD;
		DartMOD = PROMOD;
		SlingMOD = PROMOD;
		ScimitarMOD = PROMOD;
		GP = GP + 40;
	}
	if (CLASS == "Fighter") {
		HP = HP + 10 + CONmod;
		MAXHP = HP;
		abilityOne = "Second Wind";
		PaddedMOD = PROMOD;
		LeatherMOD = PROMOD;
		StuddedLeatherMOD = PROMOD;
		HideMOD = PROMOD;
		ChainShirtMOD = PROMOD;
		ScaleMailMOD = PROMOD;
		BreastplateMOD = PROMOD;
		HalfPlateMOD = PROMOD;
		RingMailMOD = PROMOD;
		ChainMailMOD = PROMOD;
		SplintMOD = PROMOD;
		PlateMOD = PROMOD;
		ShieldMOD = PROMOD;
		ClubMOD = PROMOD;
		DaggerMOD = PROMOD;
		GreatclubMOD = PROMOD;
		HandaxeMOD = PROMOD;
		JavelinMOD = PROMOD;
		LightHammerMOD = PROMOD;
		MaceMOD = PROMOD;
		QuarterstaffMOD = PROMOD;
		SickleMOD = PROMOD;
		SpearMOD = PROMOD;
		LightCrossbowMOD = PROMOD;
		DartMOD = PROMOD;
		ShortbowMOD = PROMOD;
		SlingMOD = PROMOD;
		BattleaxeMOD = PROMOD;
		FlailMOD = PROMOD;
		GlaiveMOD = PROMOD;
		GreataxeMOD = PROMOD;
		GreatswordMOD = PROMOD;
		HalberdMOD = PROMOD;
		LanceMOD = PROMOD;
		LongswordMOD = PROMOD;
		MaulMOD = PROMOD;
		MorningstarMOD = PROMOD;
		PikeMOD = PROMOD;
		RapierMOD = PROMOD;
		ScimitarMOD = PROMOD;
		ShortswordMOD = PROMOD;
		TridentMOD = PROMOD;
		WarPickMOD = PROMOD;
		WarhammerMOD = PROMOD;
		WhipMOD = PROMOD;
		BlowgunMOD = PROMOD;
		HandCrossbowMOD = PROMOD;
		HeavyCrossbowMOD = PROMOD;
		LongbowMOD = PROMOD;
		NetMOD = PROMOD;
		GP = GP + 100;
	}
	if (CLASS == "Monk") {
		HP = HP + 8 + CONmod;
		MAXHP = HP;
		ClubMOD = PROMOD;
		DaggerMOD = PROMOD;
		GreatclubMOD = PROMOD;
		HandaxeMOD = PROMOD;
		JavelinMOD = PROMOD;
		LightHammerMOD = PROMOD;
		MaceMOD = PROMOD;
		QuarterstaffMOD = PROMOD;
		SickleMOD = PROMOD;
		SpearMOD = PROMOD;
		LightCrossbowMOD = PROMOD;
		DartMOD = PROMOD;
		ShortbowMOD = PROMOD;
		SlingMOD = PROMOD;
		ShortswordMOD = PROMOD;
		GP = GP + 10;
	}
	if (CLASS == "Paladin") {
		HP = HP + 10 + CONmod;
		MAXHP = HP;
		PaddedMOD = PROMOD;
		LeatherMOD = PROMOD;
		StuddedLeatherMOD = PROMOD;
		HideMOD = PROMOD;
		ChainShirtMOD = PROMOD;
		ScaleMailMOD = PROMOD;
		BreastplateMOD = PROMOD;
		HalfPlateMOD = PROMOD;
		RingMailMOD = PROMOD;
		ChainMailMOD = PROMOD;
		SplintMOD = PROMOD;
		PlateMOD = PROMOD;
		ShieldMOD = PROMOD;
		ClubMOD = PROMOD;
		DaggerMOD = PROMOD;
		GreatclubMOD = PROMOD;
		HandaxeMOD = PROMOD;
		JavelinMOD = PROMOD;
		LightHammerMOD = PROMOD;
		MaceMOD = PROMOD;
		QuarterstaffMOD = PROMOD;
		SickleMOD = PROMOD;
		SpearMOD = PROMOD;
		LightCrossbowMOD = PROMOD;
		DartMOD = PROMOD;
		ShortbowMOD = PROMOD;
		SlingMOD = PROMOD;
		BattleaxeMOD = PROMOD;
		FlailMOD = PROMOD;
		GlaiveMOD = PROMOD;
		GreataxeMOD = PROMOD;
		GreatswordMOD = PROMOD;
		HalberdMOD = PROMOD;
		LanceMOD = PROMOD;
		LongswordMOD = PROMOD;
		MaulMOD = PROMOD;
		MorningstarMOD = PROMOD;
		PikeMOD = PROMOD;
		RapierMOD = PROMOD;
		ScimitarMOD = PROMOD;
		ShortswordMOD = PROMOD;
		TridentMOD = PROMOD;
		WarPickMOD = PROMOD;
		WarhammerMOD = PROMOD;
		WhipMOD = PROMOD;
		BlowgunMOD = PROMOD;
		HandCrossbowMOD = PROMOD;
		HeavyCrossbowMOD = PROMOD;
		LongbowMOD = PROMOD;
		NetMOD = PROMOD;
		GP = GP + 100;
	}
	if (CLASS == "Ranger") {
		HP = HP + 10 + CONmod;
		MAXHP = HP;
		PaddedMOD = PROMOD;
		LeatherMOD = PROMOD;
		StuddedLeatherMOD = PROMOD;
		HideMOD = PROMOD;
		ChainShirtMOD = PROMOD;
		ScaleMailMOD = PROMOD;
		BreastplateMOD = PROMOD;
		HalfPlateMOD = PROMOD;
		ShieldMOD = PROMOD;
		ClubMOD = PROMOD;
		DaggerMOD = PROMOD;
		GreatclubMOD = PROMOD;
		HandaxeMOD = PROMOD;
		JavelinMOD = PROMOD;
		LightHammerMOD = PROMOD;
		MaceMOD = PROMOD;
		QuarterstaffMOD = PROMOD;
		SickleMOD = PROMOD;
		SpearMOD = PROMOD;
		LightCrossbowMOD = PROMOD;
		DartMOD = PROMOD;
		ShortbowMOD = PROMOD;
		SlingMOD = PROMOD;
		BattleaxeMOD = PROMOD;
		FlailMOD = PROMOD;
		GlaiveMOD = PROMOD;
		GreataxeMOD = PROMOD;
		GreatswordMOD = PROMOD;
		HalberdMOD = PROMOD;
		LanceMOD = PROMOD;
		LongswordMOD = PROMOD;
		MaulMOD = PROMOD;
		MorningstarMOD = PROMOD;
		PikeMOD = PROMOD;
		RapierMOD = PROMOD;
		ScimitarMOD = PROMOD;
		ShortswordMOD = PROMOD;
		TridentMOD = PROMOD;
		WarPickMOD = PROMOD;
		WarhammerMOD = PROMOD;
		WhipMOD = PROMOD;
		BlowgunMOD = PROMOD;
		HandCrossbowMOD = PROMOD;
		HeavyCrossbowMOD = PROMOD;
		LongbowMOD = PROMOD;
		NetMOD = PROMOD;
		GP = GP + 100;
	}
	if (CLASS == "Rogue") {
		HP = HP + 8 + CONmod;
		MAXHP = HP;
		PaddedMOD = PROMOD;
		LeatherMOD = PROMOD;
		StuddedLeatherMOD = PROMOD;
		ClubMOD = PROMOD;
		DaggerMOD = PROMOD;
		GreatclubMOD = PROMOD;
		HandaxeMOD = PROMOD;
		JavelinMOD = PROMOD;
		LightHammerMOD = PROMOD;
		MaceMOD = PROMOD;
		QuarterstaffMOD = PROMOD;
		SickleMOD = PROMOD;
		SpearMOD = PROMOD;
		LightCrossbowMOD = PROMOD;
		DartMOD = PROMOD;
		ShortbowMOD = PROMOD;
		SlingMOD = PROMOD;
		LongswordMOD = PROMOD;
		RapierMOD = PROMOD;
		ShortswordMOD = PROMOD;
		HandCrossbowMOD = PROMOD;
		GP = GP + 80;
	}
	if (CLASS == "Sorcerer") {
		HP = HP + 6 + CONmod;
		MAXHP = HP;
		DaggerMOD = PROMOD;
		QuarterstaffMOD = PROMOD;
		LightCrossbowMOD = PROMOD;
		DartMOD = PROMOD;
		SlingMOD = PROMOD;
		GP = GP + 60;
	}
	if (CLASS == "Warlock") {
		HP = HP + 8 + CONmod;
		MAXHP = HP;
		PaddedMOD = PROMOD;
		LeatherMOD = PROMOD;
		StuddedLeatherMOD = PROMOD;
		ClubMOD = PROMOD;
		DaggerMOD = PROMOD;
		GreatclubMOD = PROMOD;
		HandaxeMOD = PROMOD;
		JavelinMOD = PROMOD;
		LightHammerMOD = PROMOD;
		MaceMOD = PROMOD;
		QuarterstaffMOD = PROMOD;
		SickleMOD = PROMOD;
		SpearMOD = PROMOD;
		LightCrossbowMOD = PROMOD;
		DartMOD = PROMOD;
		ShortbowMOD = PROMOD;
		SlingMOD = PROMOD;
		GP = GP + 80;
	}
	if (CLASS == "Wizard") {
		HP = HP + 6 + CONmod;
		MAXHP = HP;
		DaggerMOD = PROMOD;
		QuarterstaffMOD = PROMOD;
		LightCrossbowMOD = PROMOD;
		DartMOD = PROMOD;
		SlingMOD = PROMOD;
		GP = GP + 80;
	}

	//Backgrounds
	do {
		system("CLS");
		if (CLASS == "Barbarian") {
			std::cout << "As a Barbarian it's recommended to choose the Outlander background\n";
		}
		if (CLASS == "Bard") {
			std::cout << "As a Bard it's recommended to choose the Entertainer background\n";
		}
		if (CLASS == "Cleric") {
			std::cout << "As a Cleric it's recommended to choose the Acolyte background\n";
		}
		if (CLASS == "Druid") {
			std::cout << "As a Druid it's recommended to choose the Hermit background\n";
		}
		if (CLASS == "Fighter") {
			std::cout << "As a Fighter it's recommended to choose the Soldier background\n";
		}
		if (CLASS == "Monk") {
			std::cout << "As a Monk it's recommended to choose the Hermit background\n";
		}
		if (CLASS == "Paladin") {
			std::cout << "As a Paladin it's recommended to choose the Noble background\n";
		}
		if (CLASS == "Ranger") {
			std::cout << "As a Ranger it's recommended to choose the Outlander background\n";
		}
		if (CLASS == "Rogue") {
			std::cout << "As a Rogue it's recommended to choose the Charlatan background\n";
		}
		if (CLASS == "Sorcerer") {
			std::cout << "As a Sorcerer it's recommended to choose the Hermit background\n";
		}
		if (CLASS == "Warlock") {
			std::cout << "As a Warlock it's recommended to choose the Charlatan background\n";
		}
		if (CLASS == "Wizard") {
			std::cout << "As a Wizard it's recommended to choose the Sage background\n";
		}
		std::cout << "\n";
		std::cout << "Where are you from?\n";
		std::cout << "\n";
		std::cout << "Acolyte -                                  | Charlatan -\n";
		std::cout << "Proficient in Insight and Religion         | Proficient in Deception and Sleight of Hand \n";
		std::cout << "\n";
		std::cout << "Criminal -                                 | Entertainer -  \n";
		std::cout << "Proficient in Deception and Stealth        | Proficient in Acrobatics and Performance\n";
		std::cout << "\n";
		std::cout << "Guild Artisan -                            | Hermit -\n";
		std::cout << "Proficient in Insight and Persuasion       | Proficient in Medicine and Religion\n";
		std::cout << "\n";
		std::cout << "Noble -                                    | Outlander -\n";
		std::cout << "Proficient in History and Persuasion       | Proficient in Athletics and Survival\n";
		std::cout << "\n";
		std::cout << "Sage -                                     | Sailor -\n";
		std::cout << "Proficient in Arcana and History           | Proficient in Athletics and Perception\n";
		std::cout << "\n";
		std::cout << "Soldier -                                  | Urchin - \n";
		std::cout << "Proficient in Athletics and Intimidation   | Proficient in Sleight of Hand and Stealth \n";
		std::cout << "\n";
		std::cout << "What's your background?  ";
		std::getline(std::cin,choice);
	} while (!(choice == "Acolyte" || choice == "acolyte" || choice == "Charlatan" || choice == "charlatan" || choice == "Criminal" || choice == "criminal" || choice == "Entertainer" || choice == "entertainer" || choice == "Guild Artisan" || choice == "guild artisan" || choice == "Hermit" || choice == "hermit" || choice == "Noble" || choice == "noble" || choice == "Outlander" || choice == "outlander" || choice == "Sage" || choice == "sage" || choice == "Sailor" || choice == "sailor" || choice == "Soldier" || choice == "soldier" || choice == "Urchin" || choice == "urchin"));
	if (choice == "Acolyte" || choice == "acolyte") {
		BACKGROUND = "Acolyte";
		INSI = INSI + PROMOD;
		RELIG = RELIG + PROMOD;
	}
	if (choice == "Charlatan" || choice == "charlatan") {
		BACKGROUND = "Charlatan";
		DECP = DECP + PROMOD;
		SOH = SOH + PROMOD;
	}
	if (choice == "Criminal" || choice == "criminal") {
		BACKGROUND = "Criminal";
		DECP = DECP + PROMOD;
		STEL = STEL + PROMOD;
	}
	if (choice == "Entertainer" || choice == "entertainer") {
		BACKGROUND = "Entertainer";
		ACRO = ACRO + PROMOD;
		PERFO = PERFO + PROMOD;
	}
	if (choice == "Guild Artisan" || choice == "guild artisan") {
		BACKGROUND = "Guild Artisan";
		INSI = INSI + PROMOD;
		PERSU = PERSU + PROMOD;
	}
	if (choice == "Hermit" || choice == "hermit") {
		BACKGROUND = "Hermit";
		MEDI = MEDI + PROMOD;
		RELIG = RELIG + PROMOD;
	}
	if (choice == "Noble" || choice == "noble") {
		BACKGROUND = "Noble";
		HIST = HIST + PROMOD;
		PERSU = PERSU + PROMOD;
	}
	if (choice == "Outlander" || choice == "outlander") {
		BACKGROUND = "Outlander";
		ATH = ATH + PROMOD;
		SURV = SURV + PROMOD;
	}
	if (choice == "Sage" || choice == "sage") {
		BACKGROUND = "Sage";
		ARCA = ARCA + PROMOD;
		HIST = HIST + PROMOD;
	}
	if (choice == "Sailor" || choice == "sailor") {
		BACKGROUND = "Sailor";
		ATH = ATH + PROMOD;
		PERCP = PERCP + PROMOD;
	}
	if (choice == "Soldier" || choice == "soldier") {
		BACKGROUND = "Soldier";
		ATH = ATH + PROMOD;
		INTIMI = INTIMI + PROMOD;
	}
	if (choice == "Urchin" || choice == "urchin") {
		BACKGROUND = "Urchin";
		SOH = SOH + PROMOD;
		STEL = STEL + PROMOD;
	}

	//Skills
	if (CLASS == "Barbarian") {
		do {
			system("CLS");
			std::cout << "Pick your first of two skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Animal Handling (Wisdom)       Current: " << ANIMHAND << std::endl;
			std::cout << "2) Athletics (Strength)           Current: " << ATH << std::endl;
			std::cout << "3) Intimidation (Charisma)        Current: " << INTIMI << std::endl;
			std::cout << "4) Nature (Intelligence)          Current: " << NATU << std::endl;
			std::cout << "5) Perception (Wisdom)            Current: " << PERCP << std::endl;
			std::cout << "6) Survival (Wisdom)              Current: " << SURV << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
		if (choice == "1") {
			ANIMHAND = ANIMHAND + PROMOD;
		}
		if (choice == "2") {
			ATH = ATH + PROMOD;
		}
		if (choice == "3") {
			INTIMI = INTIMI + PROMOD;
		}
		if (choice == "4") {
			NATU = NATU + PROMOD;
		}
		if (choice == "5") {
			PERCP = PERCP + PROMOD;
		}
		if (choice == "6") {
			SURV = SURV + PROMOD;
		}
		do {
			system("CLS");
			std::cout << "Pick a second of two skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Animal Handling (Wisdom)       Current: " << ANIMHAND << std::endl;
			std::cout << "2) Athletics (Strength)           Current: " << ATH << std::endl;
			std::cout << "3) Intimidation (Charisma)        Current: " << INTIMI << std::endl;
			std::cout << "4) Nature (Intelligence)          Current: " << NATU << std::endl;
			std::cout << "5) Perception (Wisdom)            Current: " << PERCP << std::endl;
			std::cout << "6) Survival (Wisdom)              Current: " << SURV << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
		if (choice == "1") {
			ANIMHAND = ANIMHAND + PROMOD;
		}
		if (choice == "2") {
			ATH = ATH + PROMOD;
		}
		if (choice == "3") {
			INTIMI = INTIMI + PROMOD;
		}
		if (choice == "4") {
			NATU = NATU + PROMOD;
		}
		if (choice == "5") {
			PERCP = PERCP + PROMOD;
		}
		if (choice == "6") {
			SURV = SURV + PROMOD;
		}
	}
	if (CLASS == "Bard") {
		do {
			system("CLS");
			std::cout << "Pick your first of three skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Athletics (Strength)                Current: " << ATH << std::endl;
			std::cout << "2) Acrobatics (Dexterity)              Current: " << ACRO << std::endl;
			std::cout << "3) Sleight of Hand (Dexterity)         Current: " << SOH << std::endl;
			std::cout << "4) Stealth (Dexterity)                 Current: " << STEL << std::endl;
			std::cout << "5) Arcana (Intelligence)               Current: " << ARCA << std::endl;
			std::cout << "6) History (Intelligence)              Current: " << HIST << std::endl;
			std::cout << "7) Investigation (Intelligence)        Current: " << INVEST << std::endl;
			std::cout << "8) Nature (Intelligence)               Current: " << NATU << std::endl;
			std::cout << "9) Religion (Intelligence)             Current: " << RELIG << std::endl;
			std::cout << "10) Animal Handling (Wisdom)           Current: " << ANIMHAND << std::endl;
			std::cout << "11) Insight (Wisdom)                   Current: " << INSI << std::endl;
			std::cout << "12) Medicine (Wisdom)                  Current: " << MEDI << std::endl;
			std::cout << "13) Perception (Wisdom)                Current: " << PERCP << std::endl;
			std::cout << "14) Survival (Wisdom)                  Current: " << SURV << std::endl;
			std::cout << "15) Deception (Charisma)               Current: " << DECP << std::endl;
			std::cout << "16) Intimidation (Charisma)            Current: " << INTIMI << std::endl;
			std::cout << "17) Performance (Charisma)             Current: " << PERFO << std::endl;
			std::cout << "18) Persuasion (Charisma)              Current: " << PERSU << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11" || choice == "12" || choice == "13" || choice == "14" || choice == "15" || choice == "16" || choice == "17" || choice == "18"));
		if (choice == "1") {
			ATH = ATH + PROMOD;
		}
		if (choice == "2") {
			ACRO = ACRO + PROMOD;
		}
		if (choice == "3") {
			SOH = SOH + PROMOD;
		}
		if (choice == "4") {
			STEL = STEL + PROMOD;
		}
		if (choice == "5") {
			ARCA = ARCA + PROMOD;
		}
		if (choice == "6") {
			HIST = HIST + PROMOD;
		}
		if (choice == "7") {
			INVEST = INVEST + PROMOD;
		}
		if (choice == "8") {
			NATU = NATU + PROMOD;
		}
		if (choice == "9") {
			RELIG = RELIG + PROMOD;
		}
		if (choice == "10") {
			ANIMHAND = ANIMHAND + PROMOD;
		}
		if (choice == "11") {
			INSI = INSI + PROMOD;
		}
		if (choice == "12") {
			MEDI = MEDI + PROMOD;
		}
		if (choice == "13") {
			PERCP = PERCP + PROMOD;
		}
		if (choice == "14") {
			SURV = SURV + PROMOD;
		}
		if (choice == "15") {
			DECP = DECP + PROMOD;
		}
		if (choice == "16") {
			INTIMI = INTIMI + PROMOD;
		}
		if (choice == "17") {
			PERFO = PERFO + PROMOD;
		}
		if (choice == "18") {
			PERSU = PERSU + PROMOD;
		}
		do {
			system("CLS");
			std::cout << "Pick your second of three skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Athletics (Strength)                Current: " << ATH << std::endl;
			std::cout << "2) Acrobatics (Dexterity)              Current: " << ACRO << std::endl;
			std::cout << "3) Sleight of Hand (Dexterity)         Current: " << SOH << std::endl;
			std::cout << "4) Stealth (Dexterity)                 Current: " << STEL << std::endl;
			std::cout << "5) Arcana (Intelligence)               Current: " << ARCA << std::endl;
			std::cout << "6) History (Intelligence)              Current: " << HIST << std::endl;
			std::cout << "7) Investigation (Intelligence)        Current: " << INVEST << std::endl;
			std::cout << "8) Nature (Intelligence)               Current: " << NATU << std::endl;
			std::cout << "9) Religion (Intelligence)             Current: " << RELIG << std::endl;
			std::cout << "10) Animal Handling (Wisdom)           Current: " << ANIMHAND << std::endl;
			std::cout << "11) Insight (Wisdom)                   Current: " << INSI << std::endl;
			std::cout << "12) Medicine (Wisdom)                  Current: " << MEDI << std::endl;
			std::cout << "13) Perception (Wisdom)                Current: " << PERCP << std::endl;
			std::cout << "14) Survival (Wisdom)                  Current: " << SURV << std::endl;
			std::cout << "15) Deception (Charisma)               Current: " << DECP << std::endl;
			std::cout << "16) Intimidation (Charisma)            Current: " << INTIMI << std::endl;
			std::cout << "17) Performance (Charisma)             Current: " << PERFO << std::endl;
			std::cout << "18) Persuasion (Charisma)              Current: " << PERSU << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11" || choice == "12" || choice == "13" || choice == "14" || choice == "15" || choice == "16" || choice == "17" || choice == "18"));
		if (choice == "1") {
			ATH = ATH + PROMOD;
		}
		if (choice == "2") {
			ACRO = ACRO + PROMOD;
		}
		if (choice == "3") {
			SOH = SOH + PROMOD;
		}
		if (choice == "4") {
			STEL = STEL + PROMOD;
		}
		if (choice == "5") {
			ARCA = ARCA + PROMOD;
		}
		if (choice == "6") {
			HIST = HIST + PROMOD;
		}
		if (choice == "7") {
			INVEST = INVEST + PROMOD;
		}
		if (choice == "8") {
			NATU = NATU + PROMOD;
		}
		if (choice == "9") {
			RELIG = RELIG + PROMOD;
		}
		if (choice == "10") {
			ANIMHAND = ANIMHAND + PROMOD;
		}
		if (choice == "11") {
			INSI = INSI + PROMOD;
		}
		if (choice == "12") {
			MEDI = MEDI + PROMOD;
		}
		if (choice == "13") {
			PERCP = PERCP + PROMOD;
		}
		if (choice == "14") {
			SURV = SURV + PROMOD;
		}
		if (choice == "15") {
			DECP = DECP + PROMOD;
		}
		if (choice == "16") {
			INTIMI = INTIMI + PROMOD;
		}
		if (choice == "17") {
			PERFO = PERFO + PROMOD;
		}
		if (choice == "18") {
			PERSU = PERSU + PROMOD;
		}
		do {
			system("CLS");
			std::cout << "Pick your final of three skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Athletics (Strength)                Current: " << ATH << std::endl;
			std::cout << "2) Acrobatics (Dexterity)              Current: " << ACRO << std::endl;
			std::cout << "3) Sleight of Hand (Dexterity)         Current: " << SOH << std::endl;
			std::cout << "4) Stealth (Dexterity)                 Current: " << STEL << std::endl;
			std::cout << "5) Arcana (Intelligence)               Current: " << ARCA << std::endl;
			std::cout << "6) History (Intelligence)              Current: " << HIST << std::endl;
			std::cout << "7) Investigation (Intelligence)        Current: " << INVEST << std::endl;
			std::cout << "8) Nature (Intelligence)               Current: " << NATU << std::endl;
			std::cout << "9) Religion (Intelligence)             Current: " << RELIG << std::endl;
			std::cout << "10) Animal Handling (Wisdom)           Current: " << ANIMHAND << std::endl;
			std::cout << "11) Insight (Wisdom)                   Current: " << INSI << std::endl;
			std::cout << "12) Medicine (Wisdom)                  Current: " << MEDI << std::endl;
			std::cout << "13) Perception (Wisdom)                Current: " << PERCP << std::endl;
			std::cout << "14) Survival (Wisdom)                  Current: " << SURV << std::endl;
			std::cout << "15) Deception (Charisma)               Current: " << DECP << std::endl;
			std::cout << "16) Intimidation (Charisma)            Current: " << INTIMI << std::endl;
			std::cout << "17) Performance (Charisma)             Current: " << PERFO << std::endl;
			std::cout << "18) Persuasion (Charisma)              Current: " << PERSU << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11" || choice == "12" || choice == "13" || choice == "14" || choice == "15" || choice == "16" || choice == "17" || choice == "18"));
		if (choice == "1") {
			ATH = ATH + PROMOD;
		}
		if (choice == "2") {
			ACRO = ACRO + PROMOD;
		}
		if (choice == "3") {
			SOH = SOH + PROMOD;
		}
		if (choice == "4") {
			STEL = STEL + PROMOD;
		}
		if (choice == "5") {
			ARCA = ARCA + PROMOD;
		}
		if (choice == "6") {
			HIST = HIST + PROMOD;
		}
		if (choice == "7") {
			INVEST = INVEST + PROMOD;
		}
		if (choice == "8") {
			NATU = NATU + PROMOD;
		}
		if (choice == "9") {
			RELIG = RELIG + PROMOD;
		}
		if (choice == "10") {
			ANIMHAND = ANIMHAND + PROMOD;
		}
		if (choice == "11") {
			INSI = INSI + PROMOD;
		}
		if (choice == "12") {
			MEDI = MEDI + PROMOD;
		}
		if (choice == "13") {
			PERCP = PERCP + PROMOD;
		}
		if (choice == "14") {
			SURV = SURV + PROMOD;
		}
		if (choice == "15") {
			DECP = DECP + PROMOD;
		}
		if (choice == "16") {
			INTIMI = INTIMI + PROMOD;
		}
		if (choice == "17") {
			PERFO = PERFO + PROMOD;
		}
		if (choice == "18") {
			PERSU = PERSU + PROMOD;
		}
	}
	if (CLASS == "Cleric") {
		do {
			system("CLS");
			std::cout << "Pick your first of two skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) History (Intelligence)        Current: " << HIST << std::endl;
			std::cout << "2) Insight (Wisdom)              Current: " << INSI << std::endl;
			std::cout << "3) Medicine (Wisdom)             Current: " << MEDI << std::endl;
			std::cout << "4) Persuasion (Charisma)         Current: " << PERSU << std::endl;
			std::cout << "5) Religion (Intelligence)       Current: " << RELIG << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5"));
		if (choice == "1") {
			HIST = HIST + PROMOD;
		}
		if (choice == "2") {
			INSI = INSI + PROMOD;
		}
		if (choice == "3") {
			MEDI = MEDI + PROMOD;
		}
		if (choice == "4") {
			PERSU = PERSU + PROMOD;
		}
		if (choice == "5") {
			RELIG = RELIG + PROMOD;
		}
		do {
			system("CLS");
			std::cout << "Pick your second of two skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) History (Intelligence)        Current: " << HIST << std::endl;
			std::cout << "2) Insight (Wisdom)              Current: " << INSI << std::endl;
			std::cout << "3) Medicine (Wisdom)             Current: " << MEDI << std::endl;
			std::cout << "4) Persuasion (Charisma)         Current: " << PERSU << std::endl;
			std::cout << "5) Religion (Intelligence)       Current: " << RELIG << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5"));
		if (choice == "1") {
			HIST = HIST + PROMOD;
		}
		if (choice == "2") {
			INSI = INSI + PROMOD;
		}
		if (choice == "3") {
			MEDI = MEDI + PROMOD;
		}
		if (choice == "4") {
			PERSU = PERSU + PROMOD;
		}
		if (choice == "5") {
			RELIG = RELIG + PROMOD;
		}
	}
	if (CLASS == "Druid") {
		do {
			system("CLS");
			std::cout << "Pick your first of two skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Arcana (Intelligence)           Current: " << ARCA << std::endl;
			std::cout << "2) Nature (Intelligence)           Current: " << NATU << std::endl;
			std::cout << "3) Religion (Intelligence)         Current: " << RELIG << std::endl;
			std::cout << "4) Animal Handling (Wisdom)        Current: " << ANIMHAND << std::endl;
			std::cout << "5) Insight (Wisdom)                Current: " << INSI << std::endl;
			std::cout << "6) Medicine (Wisdom)               Current: " << MEDI << std::endl;
			std::cout << "7) Perception (Wisdom)             Current: " << PERCP << std::endl;
			std::cout << "8) Survival (Wisdom)               Current: " << SURV << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8"));
		if (choice == "1") {
			ARCA = ARCA + PROMOD;
		}
		if (choice == "2") {
			NATU = NATU + PROMOD;
		}
		if (choice == "3") {
			RELIG = RELIG + PROMOD;
		}
		if (choice == "4") {
			ANIMHAND = ANIMHAND + PROMOD;
		}
		if (choice == "5") {
			INSI = INSI + PROMOD;
		}
		if (choice == "6") {
			MEDI = MEDI + PROMOD;
		}
		if (choice == "7") {
			PERCP = PERCP + PROMOD;
		}
		if (choice == "8") {
			SURV = SURV + PROMOD;
		}
		do {
			system("CLS");
			std::cout << "Pick your final of two skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Arcana (Intelligence)           Current: " << ARCA << std::endl;
			std::cout << "2) Nature (Intelligence)           Current: " << NATU << std::endl;
			std::cout << "3) Religion (Intelligence)         Current: " << RELIG << std::endl;
			std::cout << "4) Animal Handling (Wisdom)        Current: " << ANIMHAND << std::endl;
			std::cout << "5) Insight (Wisdom)                Current: " << INSI << std::endl;
			std::cout << "6) Medicine (Wisdom)               Current: " << MEDI << std::endl;
			std::cout << "7) Perception (Wisdom)             Current: " << PERCP << std::endl;
			std::cout << "8) Survival (Wisdom)               Current: " << SURV << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8"));
		if (choice == "1") {
			ARCA = ARCA + PROMOD;
		}
		if (choice == "2") {
			NATU = NATU + PROMOD;
		}
		if (choice == "3") {
			RELIG = RELIG + PROMOD;
		}
		if (choice == "4") {
			ANIMHAND = ANIMHAND + PROMOD;
		}
		if (choice == "5") {
			INSI = INSI + PROMOD;
		}
		if (choice == "6") {
			MEDI = MEDI + PROMOD;
		}
		if (choice == "7") {
			PERCP = PERCP + PROMOD;
		}
		if (choice == "8") {
			SURV = SURV + PROMOD;
		}
	}
	if (CLASS == "Fighter") {
		do {
			system("CLS");
			std::cout << "Pick your first of two skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Athletics (Strength)          Current: " << ATH << std::endl;
			std::cout << "2) Acrobatics (Dexterity)        Current: " << ACRO << std::endl;
			std::cout << "3) History (Intelligence)        Current: " << HIST << std::endl;
			std::cout << "4) Animal Handling (Wisdom)      Current: " << ANIMHAND << std::endl;
			std::cout << "5) Insight (Wisdom)              Current: " << INSI << std::endl;
			std::cout << "6) Perception (Wisdom)           Current: " << PERCP << std::endl;
			std::cout << "7) Survival (Wisdom)             Current: " << SURV << std::endl;
			std::cout << "8) Intimidation (Charisma)       Current: " << INTIMI << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8"));
		if (choice == "1") {
			ATH = ATH + PROMOD;
		}
		if (choice == "2") {
			ACRO = ACRO + PROMOD;
		}
		if (choice == "3") {
			HIST = HIST + PROMOD;
		}
		if (choice == "4") {
			ANIMHAND = ANIMHAND + PROMOD;
		}
		if (choice == "5") {
			INSI = INSI + PROMOD;
		}
		if (choice == "6") {
			PERCP = PERCP + PROMOD;
		}
		if (choice == "7") {
			SURV = SURV + PROMOD;
		}
		if (choice == "8") {
			INTIMI = INTIMI + PROMOD;
		}
		do {
			system("CLS");
			std::cout << "Pick your second of two skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Athletics (Strength)          Current: " << ATH << std::endl;
			std::cout << "2) Acrobatics (Dexterity)        Current: " << ACRO << std::endl;
			std::cout << "3) History (Intelligence)        Current: " << HIST << std::endl;
			std::cout << "4) Animal Handling (Wisdom)      Current: " << ANIMHAND << std::endl;
			std::cout << "5) Insight (Wisdom)              Current: " << INSI << std::endl;
			std::cout << "6) Perception (Wisdom)           Current: " << PERCP << std::endl;
			std::cout << "7) Survival (Wisdom)             Current: " << SURV << std::endl;
			std::cout << "8) Intimidation (Charisma)       Current: " << INTIMI << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8"));
		if (choice == "1") {
			ATH = ATH + PROMOD;
		}
		if (choice == "2") {
			ACRO = ACRO + PROMOD;
		}
		if (choice == "3") {
			HIST = HIST + PROMOD;
		}
		if (choice == "4") {
			ANIMHAND = ANIMHAND + PROMOD;
		}
		if (choice == "5") {
			INSI = INSI + PROMOD;
		}
		if (choice == "6") {
			PERCP = PERCP + PROMOD;
		}
		if (choice == "7") {
			SURV = SURV + PROMOD;
		}
		if (choice == "8") {
			INTIMI = INTIMI + PROMOD;
		}
	}
	if (CLASS == "Monk") {
		do {
			system("CLS");
			std::cout << "Pick your first of two skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Athletics (Strength)          Current: " << ATH << std::endl;
			std::cout << "2) Acrobatics (Dexterity)        Current: " << ACRO << std::endl;
			std::cout << "3) Stealth (Dexterity)           Current: " << STEL << std::endl;
			std::cout << "4) History (Intelligence)        Current: " << HIST << std::endl;
			std::cout << "5) Religion (Intelligence)       Current: " << RELIG << std::endl;
			std::cout << "6) Insight (Wisdom)              Current: " << INSI << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
		if (choice == "1") {
			ATH = ATH + PROMOD;
		}
		if (choice == "2") {
			ACRO = ACRO + PROMOD;
		}
		if (choice == "3") {
			STEL = STEL + PROMOD;
		}
		if (choice == "4") {
			HIST = HIST + PROMOD;
		}
		if (choice == "5") {
			RELIG = RELIG + PROMOD;
		}
		if (choice == "6") {
			INSI = INSI + PROMOD;
		}
		do {
			system("CLS");
			std::cout << "Pick your second of two skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Athletics (Strength)          Current: " << ATH << std::endl;
			std::cout << "2) Acrobatics (Dexterity)        Current: " << ACRO << std::endl;
			std::cout << "3) Stealth (Dexterity)           Current: " << STEL << std::endl;
			std::cout << "4) History (Intelligence)        Current: " << HIST << std::endl;
			std::cout << "5) Religion (Intelligence)       Current: " << RELIG << std::endl;
			std::cout << "6) Insight (Wisdom)              Current: " << INSI << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
		if (choice == "1") {
			ATH = ATH + PROMOD;
		}
		if (choice == "2") {
			ACRO = ACRO + PROMOD;
		}
		if (choice == "3") {
			STEL = STEL + PROMOD;
		}
		if (choice == "4") {
			HIST = HIST + PROMOD;
		}
		if (choice == "5") {
			RELIG = RELIG + PROMOD;
		}
		if (choice == "6") {
			INSI = INSI + PROMOD;
		}
	}
	if (CLASS == "Paladin") {
		do {
			system("CLS");
			std::cout << "Pick your first of two skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Athletics (Strength)          Current: " << ATH << std::endl;
			std::cout << "2) Religion (Intelligence)       Current: " << RELIG << std::endl;
			std::cout << "3) Insight (Wisdom)              Current: " << INSI << std::endl;
			std::cout << "4) Medicine (Wisdom)             Current: " << MEDI << std::endl;
			std::cout << "5) Intimidation (Charisma)       Current: " << INTIMI << std::endl;
			std::cout << "6) Persuasion (Charisma)         Current: " << PERSU << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
		if (choice == "1") {
			ATH = ATH + PROMOD;
		}
		if (choice == "2") {
			RELIG = RELIG + PROMOD;
		}
		if (choice == "3") {
			INSI = INSI + PROMOD;
		}
		if (choice == "4") {
			MEDI = MEDI + PROMOD;
		}
		if (choice == "5") {
			INTIMI = INTIMI + PROMOD;
		}
		if (choice == "6") {
			PERSU = PERSU + PROMOD;
		}
		do {
			system("CLS");
			std::cout << "Pick your second of two skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Athletics (Strength)          Current: " << ATH << std::endl;
			std::cout << "2) Religion (Intelligence)       Current: " << RELIG << std::endl;
			std::cout << "3) Insight (Wisdom)              Current: " << INSI << std::endl;
			std::cout << "4) Medicine (Wisdom)             Current: " << MEDI << std::endl;
			std::cout << "5) Intimidation (Charisma)       Current: " << INTIMI << std::endl;
			std::cout << "6) Persuasion (Charisma)         Current: " << PERSU << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
		if (choice == "1") {
			ATH = ATH + PROMOD;
		}
		if (choice == "2") {
			RELIG = RELIG + PROMOD;
		}
		if (choice == "3") {
			INSI = INSI + PROMOD;
		}
		if (choice == "4") {
			MEDI = MEDI + PROMOD;
		}
		if (choice == "5") {
			INTIMI = INTIMI + PROMOD;
		}
		if (choice == "6") {
			PERSU = PERSU + PROMOD;
		}
	}
	if (CLASS == "Ranger") {
		do {
			system("CLS");
			std::cout << "Pick your first of three skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Athletics (Strength)              Current: " << ATH << std::endl;
			std::cout << "2) Stealth (Dexterity)               Current: " << STEL << std::endl;
			std::cout << "3) Investigation (Intelligence)      Current: " << INVEST << std::endl;
			std::cout << "4) Nature (Intelligence)             Current: " << NATU << std::endl;
			std::cout << "5) Animal Handling (Wisdom)          Current: " << ANIMHAND << std::endl;
			std::cout << "6) Insight (Wisdom)                  Current: " << INSI << std::endl;
			std::cout << "7) Perception (Wisdom)               Current: " << PERCP << std::endl;;
			std::cout << "8) Survival (Wisdom)                 Current: " << SURV << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8"));
		if (choice == "1") {
			ATH = ATH + PROMOD;
		}
		if (choice == "2") {
			STEL = STEL + PROMOD;
		}
		if (choice == "3") {
			INVEST = INVEST + PROMOD;
		}
		if (choice == "4") {
			NATU = NATU + PROMOD;
		}
		if (choice == "5") {
			ANIMHAND = ANIMHAND + PROMOD;
		}
		if (choice == "6") {
			INSI = INSI + PROMOD;
		}
		if (choice == "7") {
			PERCP = PERCP + PROMOD;
		}
		if (choice == "8") {
			SURV = SURV + PROMOD;
		}
		do {
			system("CLS");
			std::cout << "Pick your second of three skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Athletics (Strength)              Current: " << ATH << std::endl;
			std::cout << "2) Stealth (Dexterity)               Current: " << STEL << std::endl;
			std::cout << "3) Investigation (Intelligence)      Current: " << INVEST << std::endl;
			std::cout << "4) Nature (Intelligence)             Current: " << NATU << std::endl;
			std::cout << "5) Animal Handling (Wisdom)          Current: " << ANIMHAND << std::endl;
			std::cout << "6) Insight (Wisdom)                  Current: " << INSI << std::endl;
			std::cout << "7) Perception (Wisdom)               Current: " << PERCP << std::endl;;
			std::cout << "8) Survival (Wisdom)                 Current: " << SURV << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8"));
		if (choice == "1") {
			ATH = ATH + PROMOD;
		}
		if (choice == "2") {
			STEL = STEL + PROMOD;
		}
		if (choice == "3") {
			INVEST = INVEST + PROMOD;
		}
		if (choice == "4") {
			NATU = NATU + PROMOD;
		}
		if (choice == "5") {
			ANIMHAND = ANIMHAND + PROMOD;
		}
		if (choice == "6") {
			INSI = INSI + PROMOD;
		}
		if (choice == "7") {
			PERCP = PERCP + PROMOD;
		}
		if (choice == "8") {
			SURV = SURV + PROMOD;
		}
		do {
			system("CLS");
			std::cout << "Pick your final of three skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Athletics (Strength)              Current: " << ATH << std::endl;
			std::cout << "2) Stealth (Dexterity)               Current: " << STEL << std::endl;
			std::cout << "3) Investigation (Intelligence)      Current: " << INVEST << std::endl;
			std::cout << "4) Nature (Intelligence)             Current: " << NATU << std::endl;
			std::cout << "5) Animal Handling (Wisdom)          Current: " << ANIMHAND << std::endl;
			std::cout << "6) Insight (Wisdom)                  Current: " << INSI << std::endl;
			std::cout << "7) Perception (Wisdom)               Current: " << PERCP << std::endl;;
			std::cout << "8) Survival (Wisdom)                 Current: " << SURV << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8"));
		if (choice == "1") {
			ATH = ATH + PROMOD;
		}
		if (choice == "2") {
			STEL = STEL + PROMOD;
		}
		if (choice == "3") {
			INVEST = INVEST + PROMOD;
		}
		if (choice == "4") {
			NATU = NATU + PROMOD;
		}
		if (choice == "5") {
			ANIMHAND = ANIMHAND + PROMOD;
		}
		if (choice == "6") {
			INSI = INSI + PROMOD;
		}
		if (choice == "7") {
			PERCP = PERCP + PROMOD;
		}
		if (choice == "8") {
			SURV = SURV + PROMOD;
		}
	}
	if (CLASS == "Rogue") {
		do {
			system("CLS");
			std::cout << "Pick your first of four skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Athletics (Strength)              Current: " << ATH << std::endl;
			std::cout << "2) Acrobatics (Dexterity)            Current: " << ACRO << std::endl;
			std::cout << "3) Sleight of Hand (Dexterity)       Current: " << SOH << std::endl;
			std::cout << "4) Stealth (Dexterity)               Current: " << STEL << std::endl;
			std::cout << "5) Investigation (Intelligence)      Current: " << INVEST << std::endl;
			std::cout << "6) Insight (Wisdom)                  Current: " << INSI << std::endl;
			std::cout << "7) Perception (Wisdom)               Current: " << PERCP << std::endl;
			std::cout << "8) Deception (Charisma)              Current: " << DECP << std::endl;
			std::cout << "9) Intimidation (Charisma)           Current: " << INTIMI << std::endl;
			std::cout << "10) Performance (Charisma)           Current: " << PERFO << std::endl;
			std::cout << "11) Persuasion (Charisma)            Current: " << PERSU << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11"));
		if (choice == "1") {
			ATH = ATH + PROMOD;
		}
		if (choice == "2") {
			ACRO = ACRO + PROMOD;
		}
		if (choice == "3") {
			SOH = SOH + PROMOD;
		}
		if (choice == "4") {
			STEL = STEL + PROMOD;
		}
		if (choice == "5") {
			INVEST = INVEST + PROMOD;
		}
		if (choice == "6") {
			INSI = INSI + PROMOD;
		}
		if (choice == "7") {
			PERCP = PERCP + PROMOD;
		}
		if (choice == "8") {
			DECP = DECP + PROMOD;
		}
		if (choice == "9") {
			INTIMI = INTIMI + PROMOD;
		}
		if (choice == "10") {
			PERFO = PERFO + PROMOD;
		}
		if (choice == "11") {
			PERSU = PERSU + PROMOD;
		}
		do {
			system("CLS");
			std::cout << "Pick your second of four skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Athletics (Strength)              Current: " << ATH << std::endl;
			std::cout << "2) Acrobatics (Dexterity)            Current: " << ACRO << std::endl;
			std::cout << "3) Sleight of Hand (Dexterity)       Current: " << SOH << std::endl;
			std::cout << "4) Stealth (Dexterity)               Current: " << STEL << std::endl;
			std::cout << "5) Investigation (Intelligence)      Current: " << INVEST << std::endl;
			std::cout << "6) Insight (Wisdom)                  Current: " << INSI << std::endl;
			std::cout << "7) Perception (Wisdom)               Current: " << PERCP << std::endl;
			std::cout << "8) Deception (Charisma)              Current: " << DECP << std::endl;
			std::cout << "9) Intimidation (Charisma)           Current: " << INTIMI << std::endl;
			std::cout << "10) Performance (Charisma)           Current: " << PERFO << std::endl;
			std::cout << "11) Persuasion (Charisma)            Current: " << PERSU << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11"));
		if (choice == "1") {
			ATH = ATH + PROMOD;
		}
		if (choice == "2") {
			ACRO = ACRO + PROMOD;
		}
		if (choice == "3") {
			SOH = SOH + PROMOD;
		}
		if (choice == "4") {
			STEL = STEL + PROMOD;
		}
		if (choice == "5") {
			INVEST = INVEST + PROMOD;
		}
		if (choice == "6") {
			INSI = INSI + PROMOD;
		}
		if (choice == "7") {
			PERCP = PERCP + PROMOD;
		}
		if (choice == "8") {
			DECP = DECP + PROMOD;
		}
		if (choice == "9") {
			INTIMI = INTIMI + PROMOD;
		}
		if (choice == "10") {
			PERFO = PERFO + PROMOD;
		}
		if (choice == "11") {
			PERSU = PERSU + PROMOD;
		}
		do {
			system("CLS");
			std::cout << "Pick your third of four skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Athletics (Strength)              Current: " << ATH << std::endl;
			std::cout << "2) Acrobatics (Dexterity)            Current: " << ACRO << std::endl;
			std::cout << "3) Sleight of Hand (Dexterity)       Current: " << SOH << std::endl;
			std::cout << "4) Stealth (Dexterity)               Current: " << STEL << std::endl;
			std::cout << "5) Investigation (Intelligence)      Current: " << INVEST << std::endl;
			std::cout << "6) Insight (Wisdom)                  Current: " << INSI << std::endl;
			std::cout << "7) Perception (Wisdom)               Current: " << PERCP << std::endl;
			std::cout << "8) Deception (Charisma)              Current: " << DECP << std::endl;
			std::cout << "9) Intimidation (Charisma)           Current: " << INTIMI << std::endl;
			std::cout << "10) Performance (Charisma)           Current: " << PERFO << std::endl;
			std::cout << "11) Persuasion (Charisma)            Current: " << PERSU << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11"));
		if (choice == "1") {
			ATH = ATH + PROMOD;
		}
		if (choice == "2") {
			ACRO = ACRO + PROMOD;
		}
		if (choice == "3") {
			SOH = SOH + PROMOD;
		}
		if (choice == "4") {
			STEL = STEL + PROMOD;
		}
		if (choice == "5") {
			INVEST = INVEST + PROMOD;
		}
		if (choice == "6") {
			INSI = INSI + PROMOD;
		}
		if (choice == "7") {
			PERCP = PERCP + PROMOD;
		}
		if (choice == "8") {
			DECP = DECP + PROMOD;
		}
		if (choice == "9") {
			INTIMI = INTIMI + PROMOD;
		}
		if (choice == "10") {
			PERFO = PERFO + PROMOD;
		}
		if (choice == "11") {
			PERSU = PERSU + PROMOD;
		}
		do {
			system("CLS");
			std::cout << "Pick your final of four skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Athletics (Strength)              Current: " << ATH << std::endl;
			std::cout << "2) Acrobatics (Dexterity)            Current: " << ACRO << std::endl;
			std::cout << "3) Sleight of Hand (Dexterity)       Current: " << SOH << std::endl;
			std::cout << "4) Stealth (Dexterity)               Current: " << STEL << std::endl;
			std::cout << "5) Investigation (Intelligence)      Current: " << INVEST << std::endl;
			std::cout << "6) Insight (Wisdom)                  Current: " << INSI << std::endl;
			std::cout << "7) Perception (Wisdom)               Current: " << PERCP << std::endl;
			std::cout << "8) Deception (Charisma)              Current: " << DECP << std::endl;
			std::cout << "9) Intimidation (Charisma)           Current: " << INTIMI << std::endl;
			std::cout << "10) Performance (Charisma)           Current: " << PERFO << std::endl;
			std::cout << "11) Persuasion (Charisma)            Current: " << PERSU << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11"));
		if (choice == "1") {
			ATH = ATH + PROMOD;
		}
		if (choice == "2") {
			ACRO = ACRO + PROMOD;
		}
		if (choice == "3") {
			SOH = SOH + PROMOD;
		}
		if (choice == "4") {
			STEL = STEL + PROMOD;
		}
		if (choice == "5") {
			INVEST = INVEST + PROMOD;
		}
		if (choice == "6") {
			INSI = INSI + PROMOD;
		}
		if (choice == "7") {
			PERCP = PERCP + PROMOD;
		}
		if (choice == "8") {
			DECP = DECP + PROMOD;
		}
		if (choice == "9") {
			INTIMI = INTIMI + PROMOD;
		}
		if (choice == "10") {
			PERFO = PERFO + PROMOD;
		}
		if (choice == "11") {
			PERSU = PERSU + PROMOD;
		}
	}
	if (CLASS == "Sorcerer") {
		do {
			system("CLS");
			std::cout << "Pick your first of two skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Arcana (Intelligence)       Current: " << ARCA << std::endl;
			std::cout << "2) Religion (Intelligence)     Current: " << RELIG << std::endl;
			std::cout << "3) Insight (Wisdom)            Current: " << INSI << std::endl;
			std::cout << "4) Deception (Charisma)        Current: " << DECP << std::endl;
			std::cout << "5) Intimidation (Charisma)     Current: " << INTIMI << std::endl;
			std::cout << "6) Persuasion (Charisma)       Current: " << PERSU << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
		if (choice == "1") {
			ARCA = ARCA + PROMOD;
		}
		if (choice == "2") {
			RELIG = RELIG + PROMOD;
		}
		if (choice == "3") {
			INSI = INSI + PROMOD;
		}
		if (choice == "4") {
			DECP = DECP + PROMOD;
		}
		if (choice == "5") {
			INTIMI = INTIMI + PROMOD;
		}
		if (choice == "6") {
			PERSU = PERCP + PROMOD;
		}
		do {
			system("CLS");
			std::cout << "Pick your second of two skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Arcana (Intelligence)       Current: " << ARCA << std::endl;
			std::cout << "2) Religion (Intelligence)     Current: " << RELIG << std::endl;
			std::cout << "3) Insight (Wisdom)            Current: " << INSI << std::endl;
			std::cout << "4) Deception (Charisma)        Current: " << DECP << std::endl;
			std::cout << "5) Intimidation (Charisma)     Current: " << INTIMI << std::endl;
			std::cout << "6) Persuasion (Charisma)       Current: " << PERSU << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
		if (choice == "1") {
			ARCA = ARCA + PROMOD;
		}
		if (choice == "2") {
			RELIG = RELIG + PROMOD;
		}
		if (choice == "3") {
			INSI = INSI + PROMOD;
		}
		if (choice == "4") {
			DECP = DECP + PROMOD;
		}
		if (choice == "5") {
			INTIMI = INTIMI + PROMOD;
		}
		if (choice == "6") {
			PERSU = PERCP + PROMOD;
		}
	}
	if (CLASS == "Warlock") {
		do {
			system("CLS");
			std::cout << "Pick your first of two skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Arcana (Intelligence)             Current: " << ARCA << std::endl;
			std::cout << "2) History (Intelligence)            Current: " << HIST << std::endl;
			std::cout << "3) Investigation (Intelligence)      Current: " << INVEST << std::endl;
			std::cout << "4) Nature (Intelligence)             Current: " << NATU << std::endl;
			std::cout << "5) Religion (Intelligence)           Current: " << RELIG << std::endl;
			std::cout << "6) Deception (Charisma)              Current: " << DECP << std::endl;
			std::cout << "7) Intimidation (Charisma)           Current: " << INTIMI << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7"));
		if (choice == "1") {
			ARCA = ARCA + PROMOD;
		}
		if (choice == "2") {
			HIST = HIST + PROMOD;
		}
		if (choice == "3") {
			INVEST = INVEST + PROMOD;
		}
		if (choice == "4") {
			NATU = NATU + PROMOD;
		}
		if (choice == "5") {
			RELIG = RELIG + PROMOD;
		}
		if (choice == "6") {
			DECP = DECP + PROMOD;
		}
		if (choice == "7") {
			INTIMI = INTIMI + PROMOD;
		}
		do {
			system("CLS");
			std::cout << "Pick your first of two skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Arcana (Intelligence)             Current: " << ARCA << std::endl;
			std::cout << "2) History (Intelligence)            Current: " << HIST << std::endl;
			std::cout << "3) Investigation (Intelligence)      Current: " << INVEST << std::endl;
			std::cout << "4) Nature (Intelligence)             Current: " << NATU << std::endl;
			std::cout << "5) Religion (Intelligence)           Current: " << RELIG << std::endl;
			std::cout << "6) Deception (Charisma)              Current: " << DECP << std::endl;
			std::cout << "7) Intimidation (Charisma)           Current: " << INTIMI << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7"));
		if (choice == "1") {
			ARCA = ARCA + PROMOD;
		}
		if (choice == "2") {
			HIST = HIST + PROMOD;
		}
		if (choice == "3") {
			INVEST = INVEST + PROMOD;
		}
		if (choice == "4") {
			NATU = NATU + PROMOD;
		}
		if (choice == "5") {
			RELIG = RELIG + PROMOD;
		}
		if (choice == "6") {
			DECP = DECP + PROMOD;
		}
		if (choice == "7") {
			INTIMI = INTIMI + PROMOD;
		}
	}
	if (CLASS == "Wizard") {
		do {
			system("CLS");
			std::cout << "Pick your first of two skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Arcana (Intelligence)             Current: " << ARCA << std::endl;
			std::cout << "2) History (Intelligence)            Current: " << HIST << std::endl;
			std::cout << "3) Investigation (Intelligence)      Current: " << INVEST << std::endl;
			std::cout << "4) Religion (Intelligence)           Current: " << RELIG << std::endl;
			std::cout << "5) Insight (Wisdom)                  Current: " << INSI << std::endl;
			std::cout << "6) Medicine (Wisdom)                 Current: " << MEDI << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
		if (choice == "1") {
			ARCA = ARCA + PROMOD;
		}
		if (choice == "2") {
			HIST = HIST + PROMOD;
		}
		if (choice == "3") {
			INVEST = INVEST + PROMOD;
		}
		if (choice == "4") {
			RELIG = RELIG + PROMOD;
		}
		if (choice == "5") {
			INSI = INSI + PROMOD;
		}
		if (choice == "6") {
			MEDI = MEDI + PROMOD;
		}
		do {
			system("CLS");
			std::cout << "Pick your final of two skills to be proficient in: \n";
			std::cout << std::endl;
			std::cout << "1) Arcana (Intelligence)             Current: " << ARCA << std::endl;
			std::cout << "2) History (Intelligence)            Current: " << HIST << std::endl;
			std::cout << "3) Investigation (Intelligence)      Current: " << INVEST << std::endl;
			std::cout << "4) Religion (Intelligence)           Current: " << RELIG << std::endl;
			std::cout << "5) Insight (Wisdom)                  Current: " << INSI << std::endl;
			std::cout << "6) Medicine (Wisdom)                 Current: " << MEDI << std::endl;
			std::cout << std::endl;
			std::cout << "Which one do you choose?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
		if (choice == "1") {
			ARCA = ARCA + PROMOD;
		}
		if (choice == "2") {
			HIST = HIST + PROMOD;
		}
		if (choice == "3") {
			INVEST = INVEST + PROMOD;
		}
		if (choice == "4") {
			RELIG = RELIG + PROMOD;
		}
		if (choice == "5") {
			INSI = INSI + PROMOD;
		}
		if (choice == "6") {
			MEDI = MEDI + PROMOD;
		}
	}

	//Applies Ability modifiers to all Skills
	ATH = ATH + STRmod;
	ACRO = ACRO + DEXmod;
	SOH = SOH + DEXmod;
	STEL = STEL + DEXmod;
	ARCA = ARCA + INTmod;
	HIST = HIST + INTmod;
	INVEST = INVEST + INTmod;
	NATU = NATU + INTmod;
	RELIG = RELIG + INTmod;
	ANIMHAND = ANIMHAND + WISmod;
	INSI = INSI + WISmod;
	MEDI = MEDI + WISmod;
	PERCP = PERCP + WISmod;
	SURV = SURV + WISmod;
	DECP = DECP + CHAmod;
	INTIMI = INTIMI + CHAmod;
	PERFO = PERFO + CHAmod;
	PERSU = PERSU + CHAmod;

	//Base AC
	equippedWeapon = "Unarmed";
	equippedArmour = "Clothes";
	equippedShield = "No";
	AC = 10 + DEXmod;
	if (CLASS == "Monk") {
		AC = 10 + DEXmod + WISmod;
	}
	if (CLASS == "Barbarian") {
		AC = 10 + DEXmod + CONmod;
	}
}

void Game::Save() {
	//system("cd \CharacterSaves");
	std::ofstream saveFile(NAME.c_str());
	if (saveFile.is_open()) {
		saveFile << NAME << std::endl;
		saveFile << RACE << std::endl;
		saveFile << CLASS << std::endl;
		saveFile << BACKGROUND << std::endl;
		saveFile << LVL << std::endl;
		saveFile << XP << std::endl;
		saveFile << XPneeded << std::endl;
		saveFile << AC << std::endl;
		saveFile << equippedArmour << std::endl;
		saveFile << equippedWeapon << std::endl;
		saveFile << equippedShield << std::endl;
		saveFile << HP << std::endl;
		saveFile << MAXHP << std::endl;
		saveFile << STR << std::endl;
		saveFile << DEX << std::endl;
		saveFile << CON << std::endl;
		saveFile << INT << std::endl;
		saveFile << WIS << std::endl;
		saveFile << CHA << std::endl;
		saveFile << STRmod << std::endl;
		saveFile << DEXmod << std::endl;
		saveFile << CONmod << std::endl;
		saveFile << INTmod << std::endl;
		saveFile << WISmod << std::endl;
		saveFile << CHAmod << std::endl;
		saveFile << PP << std::endl;
		saveFile << GP << std::endl;
		saveFile << SP << std::endl;
		saveFile << CP << std::endl;
		saveFile << PaddedMOD << std::endl;
		saveFile << LeatherMOD << std::endl;
		saveFile << StuddedLeatherMOD << std::endl;
		saveFile << HideMOD << std::endl;
		saveFile << ChainShirtMOD << std::endl;
		saveFile << ScaleMailMOD << std::endl;
		saveFile << BreastplateMOD << std::endl;
		saveFile << HalfPlateMOD << std::endl;
		saveFile << RingMailMOD << std::endl;
		saveFile << ChainMailMOD << std::endl;
		saveFile << SplintMOD << std::endl;
		saveFile << PlateMOD << std::endl;
		saveFile << ShieldMOD << std::endl;
		saveFile << ClubMOD << std::endl;
		saveFile << DaggerMOD << std::endl;
		saveFile << GreatclubMOD << std::endl;
		saveFile << HandaxeMOD << std::endl;
		saveFile << JavelinMOD << std::endl;
		saveFile << LightHammerMOD << std::endl;
		saveFile << MaceMOD << std::endl;
		saveFile << QuarterstaffMOD << std::endl;
		saveFile << SickleMOD << std::endl;
		saveFile << SpearMOD << std::endl;
		saveFile << LightCrossbowMOD << std::endl;
		saveFile << DartMOD << std::endl;
		saveFile << ShortbowMOD << std::endl;
		saveFile << SlingMOD << std::endl;
		saveFile << BattleaxeMOD << std::endl;
		saveFile << FlailMOD << std::endl;
		saveFile << GlaiveMOD << std::endl;
		saveFile << GreataxeMOD << std::endl;
		saveFile << GreatswordMOD << std::endl;
		saveFile << HalberdMOD << std::endl;
		saveFile << LanceMOD << std::endl;
		saveFile << LongswordMOD << std::endl;
		saveFile << MaulMOD << std::endl;
		saveFile << MorningstarMOD << std::endl;
		saveFile << PikeMOD << std::endl;
		saveFile << RapierMOD << std::endl;
		saveFile << ScimitarMOD << std::endl;
		saveFile << ShortswordMOD << std::endl;
		saveFile << TridentMOD << std::endl;
		saveFile << WarPickMOD << std::endl;
		saveFile << WarhammerMOD << std::endl;
		saveFile << WhipMOD << std::endl;
		saveFile << BlowgunMOD << std::endl;
		saveFile << HandCrossbowMOD << std::endl;
		saveFile << HeavyCrossbowMOD << std::endl;
		saveFile << LongbowMOD << std::endl;
		saveFile << NetMOD << std::endl;
		saveFile << ATH << std::endl;
		saveFile << ACRO << std::endl;
		saveFile << SOH << std::endl;
		saveFile << STEL << std::endl;
		saveFile << ARCA << std::endl;
		saveFile << HIST << std::endl;
		saveFile << INVEST << std::endl;
		saveFile << NATU << std::endl;
		saveFile << RELIG << std::endl;
		saveFile << ANIMHAND << std::endl;
		saveFile << INSI << std::endl;
		saveFile << MEDI << std::endl;
		saveFile << PERCP << std::endl;
		saveFile << SURV << std::endl;
		saveFile << DECP << std::endl;
		saveFile << INTIMI << std::endl;
		saveFile << PERFO << std::endl;
		saveFile << PERSU << std::endl;
		saveFile << abilityOne << std::endl;
		saveFile << abilityTwo << std::endl;
		saveFile << abilityThree << std::endl;
		saveFile << abilityFour << std::endl;
		saveFile << abilityFive << std::endl;
		saveFile << abilitySix << std::endl;
		saveFile << abilitySeven << std::endl;
		saveFile << abilityEight << std::endl;
		saveFile << abilityNine << std::endl;
		saveFile << abilityTen << std::endl;
		saveFile << Club << std::endl;
		saveFile << Dagger << std::endl;
		saveFile << Greatclub << std::endl;
		saveFile << Handaxe << std::endl;
		saveFile << Javelin << std::endl;
		saveFile << LightHammer << std::endl;
		saveFile << Mace << std::endl;
		saveFile << Quarterstaff << std::endl;
		saveFile << Sickle << std::endl;
		saveFile << Spear << std::endl;
		saveFile << LightCrossbow << std::endl;
		saveFile << Dart << std::endl;
		saveFile << Shortbow << std::endl;
		saveFile << Sling << std::endl;
		saveFile << Battleaxe << std::endl;
		saveFile << Flail << std::endl;
		saveFile << Glaive << std::endl;
		saveFile << Greataxe << std::endl;
		saveFile << Greatsword << std::endl;
		saveFile << Halberd << std::endl;
		saveFile << Lance << std::endl;
		saveFile << Longsword << std::endl;
		saveFile << Maul << std::endl;
		saveFile << Morningstar << std::endl;
		saveFile << Pike << std::endl;
		saveFile << Rapier << std::endl;
		saveFile << Scimitar << std::endl;
		saveFile << Shortsword << std::endl;
		saveFile << Trident << std::endl;
		saveFile << WarPick << std::endl;
		saveFile << Warhammer << std::endl;
		saveFile << Whip << std::endl;
		saveFile << Blowgun << std::endl;
		saveFile << HandCrossbow << std::endl;
		saveFile << HeavyCrossbow << std::endl;
		saveFile << Longbow << std::endl;
		saveFile << Net << std::endl;
		saveFile << Padded << std::endl;
		saveFile << Leather << std::endl;
		saveFile << StuddedLeather << std::endl;
		saveFile << Hide << std::endl;
		saveFile << ChainShirt << std::endl;
		saveFile << ScaleMail << std::endl;
		saveFile << Breastplate << std::endl;
		saveFile << HalfPlate << std::endl;
		saveFile << RingMail << std::endl;
		saveFile << ChainMail << std::endl;
		saveFile << Splint << std::endl;
		saveFile << Plate << std::endl;
		saveFile << Shield << std::endl;
		saveFile << Bagpipes << std::endl;
		saveFile << Drum << std::endl;
		saveFile << Dulcimer << std::endl;
		saveFile << Flute << std::endl;
		saveFile << Lute << std::endl;
		saveFile << Lyre << std::endl;
		saveFile << Horn << std::endl;
		saveFile << PanFlute << std::endl;
		saveFile << Shawm << std::endl;
		saveFile << Viol << std::endl;
		saveFile << HolySymbol << std::endl;
		saveFile << DruidicFocus << std::endl;
		saveFile << SpellBook << std::endl;
		saveFile << ArcaneFocus << std::endl;
		saveFile << HealthPotion << std::endl;
		saveFile << MedicalKit << std::endl;
		saveFile << SpellSlotOne << std::endl;
		saveFile << SpellSlotTwo << std::endl;
		saveFile << SpellSlotThree << std::endl;
		saveFile << SpellSlotFour << std::endl;
		saveFile << SpellSlotFive << std::endl;
		saveFile << SpellSlotSix << std::endl;
		saveFile << SpellSlotSeven << std::endl;
		saveFile << SpellSlotEight << std::endl;
		saveFile << SpellSlotNine << std::endl;
		saveFile << Ki << std::endl;
		saveFile.close();
	}
	else {
		std::cout << "Unable to save file";
	}
}

void Game::Load() {
	system("CLS");
	system("title File Select:");
	//system("CD \CharacterSaves");
	system("dir /b");
	std::cout << std::endl;
	std::cout << "Which character do you wish to load?  ";
	std::getline(std::cin,choice);
	std::ifstream saveFile(choice.c_str());
	if (saveFile.is_open()) {
		std::getline(std::cin, NAME);
		saveFile >> RACE;
		saveFile >> CLASS;
		saveFile >> BACKGROUND;
		saveFile >> LVL;
		saveFile >> XP;
		saveFile >> XPneeded;
		saveFile >> AC;
		saveFile >> equippedArmour;
		saveFile >> equippedWeapon;
		saveFile >> equippedShield;
		saveFile >> HP;
		saveFile >> MAXHP;
		saveFile >> STR;
		saveFile >> DEX;
		saveFile >> CON;
		saveFile >> INT;
		saveFile >> WIS;
		saveFile >> CHA;
		saveFile >> STRmod;
		saveFile >> DEXmod;
		saveFile >> CONmod;
		saveFile >> INTmod;
		saveFile >> WISmod;
		saveFile >> CHAmod;
		saveFile >> PP;
		saveFile >> GP;
		saveFile >> SP;
		saveFile >> CP;
		saveFile >> PaddedMOD;
		saveFile >> LeatherMOD;
		saveFile >> StuddedLeatherMOD;
		saveFile >> HideMOD;
		saveFile >> ChainShirtMOD;
		saveFile >> ScaleMailMOD;
		saveFile >> BreastplateMOD;
		saveFile >> HalfPlateMOD;
		saveFile >> RingMailMOD;
		saveFile >> ChainMailMOD;
		saveFile >> SplintMOD;
		saveFile >> PlateMOD;
		saveFile >> ShieldMOD;
		saveFile >> ClubMOD;
		saveFile >> DaggerMOD;
		saveFile >> GreatclubMOD;
		saveFile >> HandaxeMOD;
		saveFile >> JavelinMOD;
		saveFile >> LightHammerMOD;
		saveFile >> MaceMOD;
		saveFile >> QuarterstaffMOD;
		saveFile >> SickleMOD;
		saveFile >> SpearMOD;
		saveFile >> LightCrossbowMOD;
		saveFile >> DartMOD;
		saveFile >> ShortbowMOD;
		saveFile >> SlingMOD;
		saveFile >> BattleaxeMOD;
		saveFile >> FlailMOD;
		saveFile >> GlaiveMOD;
		saveFile >> GreataxeMOD;
		saveFile >> GreatswordMOD;
		saveFile >> HalberdMOD;
		saveFile >> LanceMOD;
		saveFile >> LongswordMOD;
		saveFile >> MaulMOD;
		saveFile >> MorningstarMOD;
		saveFile >> PikeMOD;
		saveFile >> RapierMOD;
		saveFile >> ScimitarMOD;
		saveFile >> ShortswordMOD;
		saveFile >> TridentMOD;
		saveFile >> WarPickMOD;
		saveFile >> WarhammerMOD;
		saveFile >> WhipMOD;
		saveFile >> BlowgunMOD;
		saveFile >> HandCrossbowMOD;
		saveFile >> HeavyCrossbowMOD;
		saveFile >> LongbowMOD;
		saveFile >> NetMOD;
		saveFile >> ATH;
		saveFile >> ACRO;
		saveFile >> SOH;
		saveFile >> STEL;
		saveFile >> ARCA;
		saveFile >> HIST;
		saveFile >> INVEST;
		saveFile >> NATU;
		saveFile >> RELIG;
		saveFile >> ANIMHAND;
		saveFile >> INSI;
		saveFile >> MEDI;
		saveFile >> PERCP;
		saveFile >> SURV;
		saveFile >> DECP;
		saveFile >> INTIMI;
		saveFile >> PERFO;
		saveFile >> PERSU;
		saveFile >> abilityOne;
		saveFile >> abilityTwo;
		saveFile >> abilityThree;
		saveFile >> abilityFour;
		saveFile >> abilityFive;
		saveFile >> abilitySix;
		saveFile >> abilitySeven;
		saveFile >> abilityEight;
		saveFile >> abilityNine;
		saveFile >> abilityTen;
		saveFile >> Club;
		saveFile >> Dagger;
		saveFile >> Greatclub;
		saveFile >> Handaxe;
		saveFile >> Javelin;
		saveFile >> LightHammer;
		saveFile >> Mace;
		saveFile >> Quarterstaff;
		saveFile >> Sickle;
		saveFile >> Spear;
		saveFile >> LightCrossbow;
		saveFile >> Dart;
		saveFile >> Shortbow;
		saveFile >> Sling;
		saveFile >> Battleaxe;
		saveFile >> Flail;
		saveFile >> Glaive;
		saveFile >> Greataxe;
		saveFile >> Greatsword;
		saveFile >> Halberd;
		saveFile >> Lance;
		saveFile >> Longsword;
		saveFile >> Maul;
		saveFile >> Morningstar;
		saveFile >> Pike;
		saveFile >> Rapier;
		saveFile >> Scimitar;
		saveFile >> Shortsword;
		saveFile >> Trident;
		saveFile >> WarPick;
		saveFile >> Warhammer;
		saveFile >> Whip;
		saveFile >> Blowgun;
		saveFile >> HandCrossbow;
		saveFile >> HeavyCrossbow;
		saveFile >> Longbow;
		saveFile >> Net;
		saveFile >> Padded;
		saveFile >> Leather;
		saveFile >> StuddedLeather;
		saveFile >> Hide;
		saveFile >> ChainShirt;
		saveFile >> ScaleMail;
		saveFile >> Breastplate;
		saveFile >> HalfPlate;
		saveFile >> RingMail;
		saveFile >> ChainMail;
		saveFile >> Splint;
		saveFile >> Plate;
		saveFile >> Shield;
		saveFile >> Bagpipes;
		saveFile >> Drum;
		saveFile >> Dulcimer;
		saveFile >> Flute;
		saveFile >> Lute;
		saveFile >> Lyre;
		saveFile >> Horn;
		saveFile >> PanFlute;
		saveFile >> Shawm;
		saveFile >> Viol;
		saveFile >> HolySymbol;
		saveFile >> DruidicFocus;
		saveFile >> SpellBook;
		saveFile >> ArcaneFocus;
		saveFile >> HealthPotion;
		saveFile >> MedicalKit;
		saveFile >> SpellSlotOne;
		saveFile >> SpellSlotTwo;
		saveFile >> SpellSlotThree;
		saveFile >> SpellSlotFour;
		saveFile >> SpellSlotFive;
		saveFile >> SpellSlotSix;
		saveFile >> SpellSlotSeven;
		saveFile >> SpellSlotEight;
		saveFile >> SpellSlotNine;
		saveFile >> Ki;

		saveFile.close();
	}
	else {
		std::cout << "unable to open file";
	}
}

void Game::Weapons() {
	if (equippedWeapon == "Club") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = STRmod + ClubMOD + dice;
		if (CLASS == "Monk") {
			ATT = DEXmod + ClubMOD + dice;
		}
		if (enemyAC < ATT) {
			DAM = rand() % 4 + 1;
			if (Raging == true) { 
				DAM = DAM + RageDamage;
			}
			std::cout << "You swing your club wide and make contact with the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You swing your club with reckless abandon and miss the target! \n";
		}
	}
	if (equippedWeapon == "Dagger") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		if (AttackAdv = true) {
			dice = rand() % 20 + 1;
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = DEXmod + DaggerMOD + dice;
		if (enemyAC < ATT) {
			DAM = rand() % 4 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You lunge with your dagger and hit your mark!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "As you lunge with your dagger the " << enemy << " dodges the move! \n";
		}
	}
	if (equippedWeapon == "Greatclub") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = STRmod + GreatclubMOD + dice;
		if (enemyAC < ATT) {
			DAM = rand() % 8 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You swing your greatclub wide and make contact with the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You swing your greatclub with reckless abandon and miss the target! \n";
		}
	}
	if (equippedWeapon == "Handaxe") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = STRmod + HandaxeMOD + dice;
		if (CLASS == "Monk") {
			ATT = DEXmod + HandaxeMOD + dice;
		}
		if (enemyAC < ATT) {
			DAM = rand() % 6 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You chop aggresively with your handaxe and land the blow!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You swing wide with your handaxe and miss the target! \n";
		}
	}
	if (equippedWeapon == "Javelin") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = DEXmod + JavelinMOD + dice;
		if (CLASS == "Monk") {
			ATT = DEXmod + JavelinMOD + dice;
		}
		if (enemyAC < ATT) {
			DAM = rand() % 6 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You brace your arm back, launching the javelin through the air!\n";
			std::cout << "You deal " << DAM << " damage as it pierces it's target! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You throw your javelin but lack the proper momentum it falls short of your target!\n";
		}
	}
	if (equippedWeapon == "Light Hammer") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = STRmod + LightHammerMOD + dice;
		if (CLASS == "Monk") {
			ATT = DEXmod + LightHammerMOD + dice;
		}
		if (enemyAC < ATT) {
			DAM = rand() % 4 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You bring your light hammer down hard against the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage as you hear bones crack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You swing your lighthammer but the blow glances off of the " << enemy << "! \n";
		}
	}
	if (equippedWeapon == "Mace") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = STRmod + MaceMOD + dice;
		if (CLASS == "Monk") {
			ATT = DEXmod + MaceMOD + dice;
		}
		if (enemyAC < ATT) {
			DAM = rand() % 6 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You swing your mace wide and make contact with the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You swing your mace with reckless abandon and miss the target! \n";
		}
	}
	if (equippedWeapon == "Quarterstaff") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = STRmod + QuarterstaffMOD + dice;
		if (CLASS == "Monk") {
			ATT = DEXmod + QuarterstaffMOD + dice;
		}
		if (enemyAC < ATT) {
			DAM = rand() % 6 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You swing your quarterstaff and make contact with the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You swing your quarterstaff but the attack glances off of the target! \n";
		}
	}
	if (equippedWeapon == "Sickle") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = STRmod + SickleMOD + dice;
		if (CLASS == "Monk") {
			ATT = DEXmod + SickleMOD + dice;
		}
		if (enemyAC < ATT) {
			DAM = rand() % 4 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You slice with your sickle and land heavy into the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You swing your sickle but the " << enemy << " dodges out of the way before making contact! \n";
		}
	}
	if (equippedWeapon == "Spear") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = STRmod + SpearMOD + dice;
		if (CLASS == "Monk") {
			ATT = DEXmod + SpearMOD + dice;
		}
		if (enemyAC < ATT) {
			DAM = rand() % 6 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You lunge with your spear and pierce the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You telegraph the lunge with your spear and the " << enemy << " has plenty of time to sidestep the attack!\n";
		}
	}
	if (equippedWeapon == "Unarmed") {
		if (CLASS == "Monk") {
			dice = rand() % 20 + 1;
			if (AttackAdv = true) {
				temp = dice;
				std::cin.get();
				dice = rand() % 20 + 1;
				if (temp > dice) {
					dice = temp;
				}
			}
			ATT = DEXmod + dice;
			if (enemyAC < ATT) {
				DAM = rand() % 4 + 1;
				std::cout << "You swing wildly and land your blow against the " << enemy << "!\n";
				std::cout << "You deal " << DAM << " damage with your unarmed attack! \n";
				enemyHP = enemyHP - DAM;
			}
			else {
				std::cout << "You swing but don't have the reach you thought you would and miss! \n";
			}
		}
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = STRmod + dice;
		if (enemyAC < ATT) {
			DAM = 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You swing wildly and land your blow against the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your unarmed attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You swing but don't have the reach you thought you would and miss! \n";
		}
	}
	if (equippedWeapon == "Light Crossbow") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = DEXmod + LightCrossbowMOD + dice;
		if (enemyAC < ATT) {
			DAM = rand() % 8 + 1;
			std::cout << "Aiming, you fire your light crossbow at the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your pierstd::cing bolt! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "The bolt falls short of the target!\n";
		}
	}
	if (equippedWeapon == "Dart") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = DEXmod + DartMOD + dice;
		if (enemyAC < ATT) {
			DAM = rand() % 4 + 1;
			std::cout << "Grabbing one of your darts, you throw!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You throw your dart but lack the momentum and the " << enemy << " dodges the attack!\n";
		}
	}
	if (equippedWeapon == "Shortbow") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = DEXmod + ShortbowMOD + dice;
		if (enemyAC < ATT) {
			DAM = rand() % 6 + 1;
			std::cout << "Drawing your shortbow, you loose your arrow. It finds the target and pierces through!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You loose you arrow but you misread the distance and the arrow falls short!\n";
		}
	}
	if (equippedWeapon == "Sling") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = DEXmod + SlingMOD + dice;
		if (enemyAC < ATT) {
			DAM = rand() % 4 + 1;
			std::cout << "You pull back your sling and loose the stone held within finding your mark!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "With a flimsy wrist you miss the " << enemy << " target completely!\n";
		}
	}
	if (equippedWeapon == "Battleaxe") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = BattleaxeMOD + dice + STRmod;
		if (enemyAC < ATT) {
			DAM = rand() % 8 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You slash with your battleaxe and cleave the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You swing wide and miss the target! \n";
		}
	}
	if (equippedWeapon == "Flail") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = FlailMOD + STRmod + dice;
		if (enemyAC < ATT) {
			DAM = rand() % 8 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You strike with your flail, making contact!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You swing wide and miss the target\n";
		}
	}
	if (equippedWeapon == "Glaive") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = GlaiveMOD + dice + STRmod;
		if (enemyAC < ATT) {
			DAM = rand() % 10 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You swing with your flail and make contact!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You swing wide and miss the target! \n";
		}
	}
	if (equippedWeapon == "Greataxe") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = GreataxeMOD + dice + STRmod;
		if (enemyAC < ATT) {
			DAM = rand() % 12 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You chop with your greataxe and make contact with the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You swing wide with reckless abandon and miss the target! \n";
		}
	}
	if (equippedWeapon == "Greatsword") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = GreatswordMOD + STRmod + dice;
		if (enemyAC < ATT) {
			DAM = rand() % 12 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You cleave with your greatsword and land the attack with the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You swing with reckless abandon and miss the target! \n";
		}
	}
	if (equippedWeapon == "Halberd") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = HalberdMOD + STRmod + dice;
		if (enemyAC < ATT) {
			DAM = rand() % 10 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You swing your halberd wide and make contact with the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You swing with reckless abandon and miss the target! \n";
		}
	}
	if (equippedWeapon == "Lance") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = LanceMOD + STRmod + dice;
		if (enemyAC < ATT) {
			DAM = rand() % 12 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You thrust with your lance and pierce the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You telegraph the hit and it is easily avioded! \n";
		}
	}
	if (equippedWeapon == "Longsword") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = LongswordMOD + STRmod + dice;
		if (enemyAC < ATT) {
			DAM = rand() % 8 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You swing sword and slice through the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You swing with reckless abandon and miss the target! \n";
		}
	}
	if (equippedWeapon == "Maul") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = MaulMOD + dice + STRmod;
		if (enemyAC < ATT) {
			DAM = rand() % 12 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You swing your maul wide and make contact with the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You swing with reckless abandon and miss the target! \n";
		}
	}
	if (equippedWeapon == "Morningstar") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = MorningstarMOD + STRmod + dice;
		if (enemyAC < ATT) {
			DAM = rand() % 8 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You swing your morningstar wide and make contact with the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You swing with reckless abandon and miss the target! \n";
		}
	}
	if (equippedWeapon == "Pike") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = PikeMOD + STRmod + dice;
		if (enemyAC < ATT) {
			DAM = rand() % 10 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You thrust your pike and pierce the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You telegraph the thrust and it is easily avoided! \n";
		}
	}
	if (equippedWeapon == "Rapier") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = RapierMOD + DEXmod + dice;
		if (enemyAC < ATT) {
			DAM = rand() % 8 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You thrust your rapier into the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You telegraph the thrust and it is easily avoided! \n";
		}
	}
	if (equippedWeapon == "Scimitar") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = ScimitarMOD + STRmod + dice;
		if (enemyAC < ATT) {
			DAM = rand() % 6 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You slash with your scimitar and slice through the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You swing reckless abandon and miss the target! \n";
		}
	}
	if (equippedWeapon == "Shortsword") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = ShortswordMOD + STRmod + dice;
		if (CLASS == "Monk") {
			ATT = DEXmod + ShortswordMOD + dice;
		}
		if (enemyAC < ATT) {
			DAM = rand() % 6 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You thrust and slash and make contact with the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You swing with reckless abandon and miss the target! \n";
		}
	}
	if (equippedWeapon == "Trident") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = TridentMOD + dice + STRmod;
		if (enemyAC < ATT) {
			DAM = rand() % 6 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You thrust with your trident and pierce the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You telegraph the thrust and it is easily avoided! \n";
		}
	}
	if (equippedWeapon == "War Pick") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = WarPickMOD + dice + STRmod;
		if (enemyAC < ATT) {
			DAM = rand() % 8 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You heavily bring down your war pick onto the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You swing with reckless abandon and miss the target! \n";
		}
	}
	if (equippedWeapon == "Warhammer") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = WarhammerMOD + dice + STRmod;
		if (enemyAC < ATT) {
			DAM = rand() % 8 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You heavily bring down your warhammer onto the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You swing with reckless abandon and miss the target! \n";
		}
	}
	if (equippedWeapon == "Whip") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = WhipMOD + STRmod + dice;
		if (enemyAC < ATT) {
			DAM = rand() % 4 + 1;
			if (Raging == true) {
				DAM = DAM + RageDamage;
			}
			std::cout << "You uncurl your whip and strike forward with it make contact with the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You swing with reckless abandon and miss the target! \n";
		}
	}
	if (equippedWeapon == "Blowgun") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = BlowgunMOD + DEXmod + dice;
		if (enemyAC < ATT) {
			DAM = 1;
			std::cout << "Exhaling forcfully into your blowgun you sned the dart flying towards the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You launch the dart but lack the momentum and the " << enemy << " dodges the attack!\n";
		}
	}
	if (equippedWeapon == "Hand Crossbow") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = HandCrossbowMOD + DEXmod + dice;
		if (enemyAC < ATT) {
			DAM = rand() % 6 + 1;
			std::cout << "Aiming, you fire your hand crossbow at the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "The bolt falls short of the target!\n";
		}
	}
	if (equippedWeapon == "Heavy Crossbow") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = HeavyCrossbowMOD + DEXmod + dice;
		if (enemyAC < ATT) {
			DAM = rand() % 10 + 1;
			std::cout << "Aiming, you fire your heavy crossbow at the " << enemy << "!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "The bolt falls short of the target!\n";
		}
	}
	if (equippedWeapon == "Longbow") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = LongbowMOD + DEXmod + dice;
		if (enemyAC < ATT) {
			DAM = rand() % 8 + 1;
			std::cout << "Drawing your longbow, you loose your arrow. It finds the target and pierces through!\n";
			std::cout << "You deal " << DAM << " damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You loose you arrow but you misread the distance and the arrow falls short!\n";
		}
	}
	if (equippedWeapon == "Net") {
		dice = rand() % 20 + 1;
		if (AttackAdv = true) {
			temp = dice;
			std::cin.get();
			dice = rand() % 20 + 1;
			if (temp > dice) {
				dice = temp;
			}
		}
		ATT = DEXmod + NetMOD + dice;
		if (enemyAC < ATT) {
			std::cout << "You swing around and throw the net at the top of your speed!\n";
			std::cout << "The net lands and entangles the " << enemy << " until they can release themselves! \n";
		}
		else {
			std::cout << "You swing around and throw the net, however, it becomes entangled on nearby obstructions! \n";
		}
	}
}

void Game::Armours() {
	if (equippedArmour == "Clothes") {
		STELdis = 0;
		AC = 10 + DEXmod;
		if (CLASS == "Monk") {
			AC = 10 + DEXmod + WISmod;
		}
		if (CLASS == "Barbarian") {
			AC = 10 + DEXmod + CONmod;
		}
	}
	if (equippedArmour == "Padded") {
		ARV = 11;
		STELdis = 1;
		AC = DEXmod + ARV;
	}
	if (equippedArmour == "Leather") {
		ARV = 11;
		STELdis = 0;
		AC = DEXmod + ARV;
	}
	if (equippedArmour == "Studded Leather") {
		ARV = 12;
		STELdis = 0;
		AC = DEXmod + ARV;
	}
	if (equippedArmour == "Hide") {
		ARV = 12;
		STELdis = 0;
		AC = DEXmod + ARV;
	}
	if (equippedArmour == "Chain Shirt") {
		ARV = 13;
		STELdis = 0;
		AC = DEXmod + ARV;
	}
	if (equippedArmour == "Scale Mail") {
		ARV = 14;
		STELdis = 1;
		AC = DEXmod + ARV;
	}
	if (equippedArmour == "Breastplate") {
		ARV = 14;
		STELdis = 0;
		AC = DEXmod + ARV;
	}
	if (equippedArmour == "Half Plate") {
		ARV = 15;
		STELdis = 1;
		AC = DEXmod + ARV;
	}
	if (equippedArmour == "Ring Mail") {
		ARV = 14;
		STELdis = 1;
		AC = ARV;
	}
	if (equippedArmour == "Chain Mail") {
		ARV = 16;
		STELdis = 1;
		AC = ARV;
	}
	if (equippedArmour == "Splint") {
		ARV = 17;
		STELdis = 1;
		AC = ARV;
	}
	if (equippedArmour == "Plate") {
		ARV = 18;
		STELdis = 1;
		AC = ARV;
	}
}

void Game::Creatures() {
	if (enemy == "Boar") {
		enemyAC = 11;
		enemyDEX = 0;
		enemyMAXHP = 11;
		enemyHP = 11;
		XPgain = 50;
	}
	if (enemy == "Dire Wolf") {
		enemyAC = 14;
		enemyDEX = 2;
		enemyMAXHP = 37;
		enemyHP = 37;
		XPgain = 200;
	}
	if (enemy == "Wolf") {
		enemyAC = 13;
		enemyDEX = 2;
		enemyMAXHP = 11;
		enemyHP = 11;
		XPgain = 50;
	}
	if (enemy == "Skeleton") {
		enemyAC = 13;
		enemyDEX = 2;
		enemyMAXHP = 13;
		enemyHP = 13;
		XPgain = 50;
	}
	if (enemy == "Lion") {
		enemyAC = 12;
		enemyDEX = 2;
		enemyMAXHP = 26;
		enemyHP = 26;
		XPgain = 200;
	}
	if (enemy == "Imp") {
		enemyAC = 13;
		enemyDEX = 3;
		enemyMAXHP = 10;
		enemyHP = 10;
		XPgain = 200;
	}
	if (enemy == "Giant Eagle") {
		enemyAC = 13;
		enemyDEX = 3;
		enemyMAXHP = 26;
		enemyHP = 26;
		XPgain = 200;
	}
	if (enemy == "Giant Spider") {
		enemyAC = 14;
		enemyDEX = 3;
		enemyMAXHP = 26;
		enemyHP = 26;
		XPgain = 200;
	}
	if (enemy == "Brown Bear") {
		enemyAC = 11;
		enemyDEX = 0;
		enemyMAXHP = 34;
		enemyHP = 34;
		XPgain = 200;
	}
	if (enemy == "Black Bear") {
		enemyAC = 11;
		enemyDEX = 0;
		enemyMAXHP = 19;
		enemyHP = 19;
		XPgain = 100;
	}
	if (enemy == "Zombie") {
		enemyAC = 8;
		enemyDEX = -2;
		enemyHP = 22;
		enemyMAXHP = 22;
		XPgain = 50;
	}
}

void Game::CreatureAttack() {
	if (enemy == "Boar") {
		dice = rand() % 20 + 1;
		enemyATT = 3 + dice;
		if (AC < enemyATT) {
			enemyDAM = 4;
			std::cout << "The boar lunges at you with it's tusks and glances your side, dealing 4 damage to you! \n";
			HP = HP - 4;
		}
		else {
			std::cout << "The boar lunges with it's tusks but misses it's attack on you!\n";
		}
	}
	if (enemy == "Dire Wolf") {
		dice = rand() % 20 + 1;
		enemyATT = 5 + dice;
		if (AC > enemyATT) {
			enemyDAM = 10;
			std::cout << "Bearing tooth and claw, the dire wolf lunges at you, dealing 10 damage to you! \n";
			HP = HP - 10;
		}
		else {
			std::cout << "The dire wolf lunges but you have time to dodge the attack completely!\n";
		}
	}
	if (enemy == "Wolf") {
		dice = rand() % 20 + 1;
		enemyATT = 4 + dice;
		if (AC > enemyATT) {
			enemyDAM = 7;
			std::cout << "Bearing tooth and claw the wolf lunges towards you, dealing 7 damage to you! \n";
			HP = HP - 7;
		}
		else {
			std::cout << "The wolf lunges but you have time to dodge the attack completely!\n";
		}
	}
	if (enemy == "Skeleton") {
		dice = rand() % 20 + 1;
		enemyATT = 4 + dice;
		if (AC > enemyATT) {
			enemyDAM = 5;
			std::cout << "With a greatsword in hand, the skeleton swipes at you, dealing 5 damage! \n";
			HP = HP - 5;
		}
		else {
			std::cout << "The slow movements of the skeleton allow you to side step the attack with ease!\n";
		}
	}
	if (enemy == "Lion") {
		dice = rand() % 20 + 1;
		enemyATT = 5 + dice;
		if (AC > enemyATT) {
			enemyDAM = 7;
			std::cout << "Bearing three inch long claws the lion slashes at you, dealing 7 damage! \n";
			HP = HP - 7;
		}
		else {
			std::cout << "Stepping a foot into the direction of the lion the claw overextendes and you sustain no danage!\n";
		}
	}
	if (enemy == "Imp") {
		dice = rand() % 20 + 1;
		enemyATT = 5 + dice;
		if (AC > enemyATT) {
			enemyDAM = 5;
			std::cout << "Slashing with black curled claws the floating imp lands the attack, dealing 5 damage to you! \n";
			HP = HP - 5;
		}
		else {
			std::cout << "The flying movements of the imp are hard to judge yet The boar lunges with it's tusks but misses it's attack on you!\n";
		}
	}
	if (enemy == "Giant Eagle") {
		dice = rand() % 20 + 1;
		enemyATT = 5 + dice;
		if (AC > enemyATT) {
			enemyDAM = 5;
			std::cout << "The boar lunges at you with it's tusks and glances your side, dealing 4 damage to you! \n";
			HP = HP - 5;
		}
		else {
			std::cout << "The boar lunges with it's tusks but misses it's attack on you!\n";
		}
	}
	if (enemy == "Giant Spider") {
		dice = rand() % 20 + 1;
		enemyATT = 5 + dice;
		if (AC > enemyATT) {
			enemyDAM = 7;
			std::cout << "The boar lunges at you with it's tusks and glances your side, dealing 4 damage to you! \n";
			HP = HP - 7;
		}
		else {
			std::cout << "The boar lunges with it's tusks but misses it's attack on you!\n";
		}
	}
	if (enemy == "Brown Bear") {
		dice = rand() % 20 + 1;
		enemyATT = 3 + dice;
		if (AC > enemyATT) {
			enemyDAM = 5;
			std::cout << "The boar lunges at you with it's tusks and glances your side, dealing 4 damage to you! \n";
			HP = HP - 5;
		}
		else {
			std::cout << "The boar lunges with it's tusks but misses it's attack on you!\n";
		}
	}
	if (enemy == "Black Bear") {
		dice = rand() % 20 + 1;
		enemyATT = 3 + dice;
		if (AC > enemyATT) {
			enemyDAM = 5;
			std::cout << "The boar lunges at you with it's tusks and glances your side, dealing 4 damage to you! \n";
			HP = HP - 5;
		}
		else {
			std::cout << "The boar lunges with it's tusks but misses it's attack on you!\n";
		}
	}
	if (enemy == "Zombie") {
		dice = rand() % 20 + 1;
		enemyATT = 3 + dice;
		if (AC > enemyATT) {
			enemyDAM = 4;
			std::cout << "The boar lunges at you with it's tusks and glances your side, dealing 4 damage to you! \n";
			HP = HP - 4;
		}
		else {
			std::cout << "The boar lunges with it's tusks but misses it's attack on you!\n";
		}
	}
}

void Game::EnemyAttackWithAdv() {
	if (enemy == "Boar") {
		dice = rand() % 20 + 1;
		temp = dice;
		std::cin.get();
		dice = rand() % 20 + 1;
		if (temp > dice) {
			dice = temp;
		}
		enemyATT = 3 + dice;
		if (AC < enemyATT) {
			enemyDAM = 4;
			std::cout << "The boar lunges at you with it's tusks and glances your side, dealing 4 damage to you! \n";
			HP = HP - 4;
		}
		else {
			std::cout << "The boar lunges with it's tusks but misses it's attack on you!\n";
		}
	}
	if (enemy == "Dire Wolf") {
		dice = rand() % 20 + 1;
		temp = dice;
		std::cin.get();
		dice = rand() % 20 + 1;
		if (temp > dice) {
			dice = temp;
		}
		enemyATT = 5 + dice;
		if (AC > enemyATT) {
			enemyDAM = 10;
			std::cout << "Bearing tooth and claw, the dire wolf lunges at you, dealing 10 damage to you! \n";
			HP = HP - 10;
		}
		else {
			std::cout << "The dire wolf lunges but you have time to dodge the attack completely!\n";
		}
	}
	if (enemy == "Wolf") {
		dice = rand() % 20 + 1;
		temp = dice;
		std::cin.get();
		dice = rand() % 20 + 1;
		if (temp > dice) {
			dice = temp;
		}
		enemyATT = 4 + dice;
		if (AC > enemyATT) {
			enemyDAM = 7;
			std::cout << "Bearing tooth and claw the wolf lunges towards you, dealing 7 damage to you! \n";
			HP = HP - 7;
		}
		else {
			std::cout << "The wolf lunges but you have time to dodge the attack completely!\n";
		}
	}
	if (enemy == "Skeleton") {
		dice = rand() % 20 + 1;
		temp = dice;
		std::cin.get();
		dice = rand() % 20 + 1;
		if (temp > dice) {
			dice = temp;
		}
		enemyATT = 4 + dice;
		if (AC > enemyATT) {
			enemyDAM = 5;
			std::cout << "With a greatsword in hand, the skeleton swipes at you, dealing 5 damage! \n";
			HP = HP - 5;
		}
		else {
			std::cout << "The slow movements of the skeleton allow you to side step the attack with ease!\n";
		}
	}
	if (enemy == "Lion") {
		dice = rand() % 20 + 1;
		temp = dice;
		std::cin.get();
		dice = rand() % 20 + 1;
		if (temp > dice) {
			dice = temp;
		}
		enemyATT = 5 + dice;
		if (AC > enemyATT) {
			enemyDAM = 7;
			std::cout << "Bearing three inch long claws the lion slashes at you, dealing 7 damage! \n";
			HP = HP - 7;
		}
		else {
			std::cout << "Stepping a foot into the direction of the lion the claw overextendes and you sustain no danage!\n";
		}
	}
	if (enemy == "Imp") {
		dice = rand() % 20 + 1;
		temp = dice;
		std::cin.get();
		dice = rand() % 20 + 1;
		if (temp > dice) {
			dice = temp;
		}
		enemyATT = 5 + dice;
		if (AC > enemyATT) {
			enemyDAM = 5;
			std::cout << "Slashing with black curled claws the floating imp lands the attack, dealing 5 damage to you! \n";
			HP = HP - 5;
		}
		else {
			std::cout << "The flying movements of the imp are hard to judge yet The boar lunges with it's tusks but misses it's attack on you!\n";
		}
	}
	if (enemy == "Giant Eagle") {
		dice = rand() % 20 + 1;
		temp = dice;
		std::cin.get();
		dice = rand() % 20 + 1;
		if (temp > dice) {
			dice = temp;
		}
		enemyATT = 5 + dice;
		if (AC > enemyATT) {
			enemyDAM = 5;
			std::cout << "The boar lunges at you with it's tusks and glances your side, dealing 4 damage to you! \n";
			HP = HP - 5;
		}
		else {
			std::cout << "The boar lunges with it's tusks but misses it's attack on you!\n";
		}
	}
	if (enemy == "Giant Spider") {
		dice = rand() % 20 + 1;
		temp = dice;
		std::cin.get();
		dice = rand() % 20 + 1;
		if (temp > dice) {
			dice = temp;
		}
		enemyATT = 5 + dice;
		if (AC > enemyATT) {
			enemyDAM = 7;
			std::cout << "The boar lunges at you with it's tusks and glances your side, dealing 4 damage to you! \n";
			HP = HP - 7;
		}
		else {
			std::cout << "The boar lunges with it's tusks but misses it's attack on you!\n";
		}
	}
	if (enemy == "Brown Bear") {
		dice = rand() % 20 + 1;
		temp = dice;
		std::cin.get();
		dice = rand() % 20 + 1;
		if (temp > dice) {
			dice = temp;
		}
		enemyATT = 3 + dice;
		if (AC > enemyATT) {
			enemyDAM = 5;
			std::cout << "The boar lunges at you with it's tusks and glances your side, dealing 4 damage to you! \n";
			HP = HP - 5;
		}
		else {
			std::cout << "The boar lunges with it's tusks but misses it's attack on you!\n";
		}
	}
	if (enemy == "Black Bear") {
		dice = rand() % 20 + 1;
		temp = dice;
		std::cin.get();
		dice = rand() % 20 + 1;
		if (temp > dice) {
			dice = temp;
		}
		enemyATT = 3 + dice;
		if (AC > enemyATT) {
			enemyDAM = 5;
			std::cout << "The boar lunges at you with it's tusks and glances your side, dealing 4 damage to you! \n";
			HP = HP - 5;
		}
		else {
			std::cout << "The boar lunges with it's tusks but misses it's attack on you!\n";
		}
	}
	if (enemy == "Zombie") {
		dice = rand() % 20 + 1;
		temp = dice;
		std::cin.get();
		dice = rand() % 20 + 1;
		if (temp > dice) {
			dice = temp;
		}
		enemyATT = 3 + dice;
		if (AC > enemyATT) {
			enemyDAM = 4;
			std::cout << "The boar lunges at you with it's tusks and glances your side, dealing 4 damage to you! \n";
			HP = HP - 4;
		}
		else {
			std::cout << "The boar lunges with it's tusks but misses it's attack on you!\n";
		}
	}
}

void Game::DeathCheck() {
	if (HP <= 0) {
		std::cout << std::endl;
		std::cout << "With a final blow you fall to the ground broken and defeated\n";
		std::cout << "Your HP has reached zero, you have died.\n";
		std::cout << std::endl;
		std::cout << "Returning you to the main menu\n";
		std::cin.ignore();
		std::cin.get();
		system("CLS");
		MainMenu();
	}
}

void Game::EnemyDeathCheck() {
  if (enemyHP <= 0) {
    std::cout << std::endl;
    std::cout << "With a final blow you defeat the " << enemy << " and they fall to the ground\n";
    std::cout << "Their HP has reached zero and they have died.\n";
    std::cout << std::endl;
    std::cout << "You gain " << XPgain << " XP for defeating them\n";
    XP = XP + XPgain;
	std::cin.ignore();
	std::cin.get();
    LvlUpCheck();
    system("CLS");
  }
}

void Game::LvlUpCheck() {
	if (LVL == 1 && XP >= 300) {
		system("CLS");
		std::cout << "Congratulations! You have advanced to level 2!\n";
		std::cin.get();
		LVL = LVL + 1;
		XPneeded = 900;
		LvlUp();
	}
	if (LVL == 2 && XP >= 900) {
		system("CLS");
		std::cout << "Congratulations! You have advanced to level 3!\n";
		std::cin.get();
		LVL = LVL + 1;
		XPneeded = 2700;
		LvlUp();
	}
	if (LVL == 3 && XP >= 2700) {
		system("CLS");
		std::cout << "Congratulations! You have advanced to level 4!\n";
		std::cin.get();
		LVL = LVL + 1;
		XPneeded = 6500;
		LvlUp();
	}
	if (LVL == 4 && XP >= 6500) {
		system("CLS");
		std::cout << "Congratulations! You have advanced to level 5!\n";
		std::cin.get();
		LVL = LVL + 1;
		XPneeded = 14000;
		PROMOD = 3;
		LvlUp();
	}
	if (LVL == 5 && XP >= 14000) {
		system("CLS");
		std::cout << "Congratulations! You have advanced to level 6!\n";
		std::cin.get();
		LVL = LVL + 1;
		XPneeded = 23000;
		LvlUp();
	}
	if (LVL == 6 && XP >= 23000) {
		system("CLS");
		std::cout << "Congratulations! You have advanced to level 7!\n";
		std::cin.get();
		LVL = LVL + 1;
		XPneeded = 34000;
		LvlUp();
	}
	if (LVL == 7 && XP >= 34000) {
		system("CLS");
		std::cout << "Congratulations! You have advanced to level 8!\n";
		std::cin.get();
		LVL = LVL + 1;
		XPneeded = 48000;
		LvlUp();
	}
	if (LVL == 8 && XP >= 48000) {
		system("CLS");
		std::cout << "Congratulations! You have advanced to level 9!\n";
		std::cin.get();
		LVL = LVL + 1;
		XPneeded = 64000;
		PROMOD = 4;
		LvlUp();
	}
	if (LVL == 9 && XP >= 64000) {
		system("CLS");
		std::cout << "Congratulations! You have advanced to level 10!\n";
		std::cin.get();
		LVL = LVL + 1;
		XPneeded = 85000;
		LvlUp();
	}
	if (LVL == 10 && XP >= 85000) {
		system("CLS");
		std::cout << "Congratulations! You have advanced to level 11!\n";
		std::cin.get();
		LVL = LVL + 1;
		XPneeded = 100000;
		LvlUp();
	}
	if (LVL == 11 && XP >= 100000) {
		system("CLS");
		std::cout << "Congratulations! You have advanced to level 12!\n";
		std::cin.get();
		LVL = LVL + 1;
		XPneeded = 120000;
		LvlUp();
	}
	if (LVL == 12 && XP >= 120000) {
		system("CLS");
		std::cout << "Congratulations! You have advanced to level 13!\n";
		std::cin.get();
		LVL = LVL + 1;
		XPneeded = 140000;
		PROMOD = 5;
		LvlUp();
	}
	if (LVL == 13 && XP >= 140000) {
		system("CLS");
		std::cout << "Congratulations! You have advanced to level 14!\n";
		std::cin.get();
		LVL = LVL + 1;
		XPneeded = 165000;
		LvlUp();
	}
	if (LVL == 14 && XP >= 165000) {
		system("CLS");
		std::cout << "Congratulations! You have advanced to level 15!\n";
		std::cin.get();
		LVL = LVL + 1;
		XPneeded = 195000;
		LvlUp();
	}
	if (LVL == 15 && XP >= 195000) {
		system("CLS");
		std::cout << "Congratulations! You have advanced to level 16!\n";
		std::cin.get();
		LVL = LVL + 1;
		XPneeded = 225000;
		LvlUp();
	}
	if (LVL == 16 && XP >= 225000) {
		system("CLS");
		std::cout << "Congratulations! You have advanced to level 17!\n";
		std::cin.get();
		LVL = LVL + 1;
		XPneeded = 265000;
		PROMOD = 6;
		LvlUp();
	}
	if (LVL == 17 && XP >= 265000) {
		system("CLS");
		std::cout << "Congratulations! You have advanced to level 18!\n";
		std::cin.get();
		LVL = LVL + 1;
		XPneeded = 305000;
		LvlUp();
	}
	if (LVL == 18 && XP >= 305000) {
		system("CLS");
		std::cout << "Congratulations! You have advanced to level 19!\n";
		std::cin.get();
		LVL = LVL + 1;
		XPneeded = 355000;
		LvlUp();
	}
	if (LVL == 19 && XP >= 355000) {
		system("CLS");
		std::cout << "Congratulations! You have advanced to level 20!\n";
		std::cin.get();
		LVL = LVL + 1;
		XPneeded = 0;
		LvlUp();
	}
}

void Game::LvlUp() {
	if (CLASS == "Barbarian") {
		if (LVL == 2) {
			MAXHP = MAXHP + 7 + CONmod;
			HP = HP + 7 + CONmod;
			abilityThree = "Reckless Attack";
		}
		if (LVL == 3) {
			MAXHP = MAXHP + 7 + CONmod;
			HP = HP + 7 + CONmod;
			do {
				system("CLS");
				std::cout << "Choose a path that shapes the nature of your rage\n" << std::endl;
				std::cout << "1) The Path of the Berserker\n";
				std::cout << "2) The Path of the Totem Warrior\n";
				std::cout << std::endl;
				std::cout << "Which path do you choose to follow?  ";
				getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2"));
			if (choice == "1") {
				PrimalPath = "Berserker";
				abilityFour = "Frenzy";
			}
			if (choice == "2") {
				PrimalPath = "Totem";
				abilityFour = "Spirit Seeker";
			}
		}
		if (LVL == 4) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 4!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 7 + CONmod;
			HP = HP + 7 + CONmod;
		}
		if (LVL == 5) {
			MAXHP = MAXHP + 7 + CONmod;
			HP = HP + 7 + CONmod;
			abilityFive = "Extra Attack";
		}
		if (LVL == 6) {
			MAXHP = MAXHP + 7 + CONmod;
			HP = HP + 7 + CONmod;
			if (PrimalPath == "Berserker") {
				abilitySix = "Mindless Rage";
			}
			if (PrimalPath == "Totem") {
				abilitySix = "Aspect of the Beast";
			}
			
		}
		if (LVL == 7) {
			MAXHP = MAXHP + 7 + CONmod;
			HP = HP + 7 + CONmod;
			abilitySeven = "Feral Instinct";
			InitAdv = true;
		}
		if (LVL == 8) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 8!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 7 + CONmod;
			HP = HP + 7 + CONmod;
		}
		if (LVL == 9) {
			MAXHP = MAXHP + 7 + CONmod;
			HP = HP + 7 + CONmod;
			abilityEight = "Brutal Critical";
			RageDamage = 3;
		}
		if (LVL == 10) {
			MAXHP = MAXHP + 7 + CONmod;
			HP = HP + 7 + CONmod;
		}
		if (LVL == 11) {
			MAXHP = MAXHP + 7 + CONmod;
			HP = HP + 7 + CONmod;
			abilityNine = "Relentless Rage";
		}
		if (LVL == 12) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 12!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 7 + CONmod;
			HP = HP + 7 + CONmod;
		}
		if (LVL == 13) {
			MAXHP = MAXHP + 7 + CONmod;
			HP = HP + 7 + CONmod;
		}
		if (LVL == 14) {
			MAXHP = MAXHP + 7 + CONmod;
			HP = HP + 7 + CONmod;
			abilityEight = "Retaliation";
		}
		if (LVL == 15) {
			MAXHP = MAXHP + 7 + CONmod;
			HP = HP + 7 + CONmod;
			abilityTen = "Persistent Rage";
		}
		if (LVL == 16) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 16!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 7 + CONmod;
			HP = HP + 7 + CONmod;
		}
		if (LVL == 17) {
			MAXHP = MAXHP + 7 + CONmod;
			HP = HP + 7 + CONmod;
		}
		if (LVL == 18) {
			MAXHP = MAXHP + 7 + CONmod;
			HP = HP + 7 + CONmod;
		}
		if (LVL == 19) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 19!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 7 + CONmod;
			HP = HP + 7 + CONmod;
		}
		if (LVL == 20) {
			ability11 = "Primal Champion";
			STR = STR + 4;
			CON = CON + 4;
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 7 + CONmod;
			HP = HP + 7 + CONmod;
		}
	}
	if (CLASS == "Bard") {
		if (LVL == 2) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 3) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 4) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 4!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 5) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 6) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 7) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 8) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 8!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 9) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 10) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 11) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 12) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 12!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 13) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 14) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 15) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 16) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 16!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 17) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 18) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 19) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 19!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 20) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
	}
	if (CLASS == "Cleric") {
		if (LVL == 2) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 3) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 4) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 4!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 5) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 6) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 7) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 8) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 8!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 9) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 10) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 11) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 12) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 12!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 13) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 14) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 15) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 16) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 16!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 17) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 18) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 19) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 19!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 20) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
	}
	if (CLASS == "Druid") {
		if (LVL == 2) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
			abilityOne = "Wild Shape";
		}
		if (LVL == 3) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 4) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 4!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 5) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 6) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 7) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 8) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 8!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 9) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 10) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 11) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 12) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 12!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 13) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 14) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 15) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 16) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 16!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 17) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 18) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 19) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 19!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 20) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
	}
	if (CLASS == "Fighter") {
		if (LVL == 2) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
			abilityTwo = "Fighting Style";
		}
		if (LVL == 3) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 4) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 4!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 5) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
			abilityThree = "Extra Attack";
		}
		if (LVL == 6) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 6!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 7) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 8) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 8!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 9) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 10) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 11) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 12) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 12!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 13) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 14) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 14!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 15) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 16) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 16!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 17) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 18) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 19) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 19!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 20) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
	}
	if (CLASS == "Monk") {
		if (LVL == 2) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
			Ki = LVL;
			abilityOne = "Flurry of Blows";
			abilityTwo = "Patient Defence";
		}
		if (LVL == 3) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
			Ki = LVL;
			abilityThree = "Deflect Attacks";
		}
		if (LVL == 4) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 4!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
			Ki = LVL;
		}
		if (LVL == 5) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
			Ki = LVL;
			abilityFour = "Extra Attack";
		}
		if (LVL == 6) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
			Ki = LVL;
		}
		if (LVL == 7) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
			Ki = LVL;
		}
		if (LVL == 8) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 8!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
			Ki = LVL;
		}
		if (LVL == 9) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
			Ki = LVL;
		}
		if (LVL == 10) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
			Ki = LVL;
		}
		if (LVL == 11) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
			Ki = LVL;
		}
		if (LVL == 12) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 12!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
			Ki = LVL;
		}
		if (LVL == 13) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
			Ki = LVL;
		}
		if (LVL == 14) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
			Ki = LVL;
		}
		if (LVL == 15) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
			Ki = LVL;
		}
		if (LVL == 16) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 16!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
			Ki = LVL;
		}
		if (LVL == 17) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
			Ki = LVL;
		}
		if (LVL == 18) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
			Ki = LVL;
		}
		if (LVL == 19) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 19!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
			Ki = LVL;
		}
		if (LVL == 20) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
			abilityFive = "Perfect Self";
			Ki = LVL;
		}
	}
	if (CLASS == "Paladin") {
		if (LVL == 2) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
			abilityOne = "Fighting Style";
			abilityTwo = "Divine Smite";
		}
		if (LVL == 3) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 4) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 4!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 5) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
			abilityThree = "Extra Attack";
		}
		if (LVL == 6) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 7) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 8) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 8!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 9) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 10) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 11) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
			abilityFour = "Improved Divine Smite";
		}
		if (LVL == 12) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 12!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 13) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 14) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 15) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 16) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 16!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 17) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 18) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 19) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 19!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 20) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
	}
	if (CLASS == "Ranger") {
		if (LVL == 2) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
			abilityOne = "Fighting Style";
			abilityTwo = "Spellcasting";
		}
		if (LVL == 3) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 4) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 4!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 5) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
			abilityThree = "Extra Attack";
		}
		if (LVL == 6) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 7) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 8) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 8!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 9) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 10) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 11) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 12) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 12!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 13) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 14) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 15) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 16) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 16!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 17) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 18) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 19) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 19!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
		if (LVL == 20) {
			MAXHP = MAXHP + 6 + CONmod;
			HP = HP + 6 + CONmod;
		}
	}
	if (CLASS == "Rogue") {
		if (LVL == 2) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
			abilityOne = "Sneak Attack";
		}
		if (LVL == 3) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 4) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 4!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 5) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
			abilityTwo = "Uncanny Dodge";
		}
		if (LVL == 6) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 7) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 8) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 8!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 9) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 10) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 10!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 11) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 12) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 12!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 13) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 14) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 15) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 16) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 16!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 17) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 18) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 19) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 19!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 20) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
	}
	if (CLASS == "Sorcerer") {
		if (LVL == 2) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 3) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 4) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 4!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 5) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 6) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 7) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 8) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 8!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 9) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 10) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 11) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 12) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 12!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 13) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 14) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 15) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 16) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 16!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 17) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 18) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 19) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 19!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 20) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
	}
	if (CLASS == "Warlock") {
		if (LVL == 2) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 3) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 4) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 4!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 5) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 6) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 7) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 8) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 8!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 9) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 10) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 11) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 12) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 12!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 13) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 14) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 15) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 16) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 16!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 17) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 18) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 19) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 19!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
		if (LVL == 20) {
			MAXHP = MAXHP + 5 + CONmod;
			HP = HP + 5 + CONmod;
		}
	}
	if (CLASS == "Wizard") {
		if (LVL == 2) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 3) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 4) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 4!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 5) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 6) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 7) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 8) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 8!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 9) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 10) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 11) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 12) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 12!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 13) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 14) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 15) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 16) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 16!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 17) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 18) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 19) {
			do {
				system("CLS");
				std::cout << "Congratulations! You have advanced to level 19!\n";
				std::cout << std::endl;
				std::cout << "Please choose the first of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			do {
				system("CLS");
				std::cout << "Please choose the second of two ability scores to improve:\n";
				std::cout << "1) Strength            Current: " << STR << std::endl;
				std::cout << "2) Dexterity           Current: " << DEX << std::endl;
				std::cout << "3) Constitution        Current: " << CON << std::endl;
				std::cout << "4) Intelligence        Current: " << INT << std::endl;
				std::cout << "5) Wisdom              Current: " << WIS << std::endl;
				std::cout << "6) Charisma            Current: " << CHA << std::endl;
				std::cout << std::endl;
				std::cout << "Note that increasing an ability score above 20 will have no benefits. \n";
				std::cout << "Choice 1~6:  ";
				std::getline(std::cin,choice);
			} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
			if (choice == "1") {
				STR = STR + 1;
			}
			if (choice == "2") {
				DEX = DEX + 1;
			}
			if (choice == "3") {
				CON = CON + 1;
			}
			if (choice == "4") {
				INT = INT + 1;
			}
			if (choice == "5") {
				WIS = WIS + 1;
			}
			if (choice == "6") {
				CHA = CHA + 1;
			}
			StatModifiers();
			SkillModifiers();
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
		if (LVL == 20) {
			MAXHP = MAXHP + 4 + CONmod;
			HP = HP + 4 + CONmod;
		}
	}
}

void Game::Initiative() {
	INIT = DEXmod + rand() % 20 + 1;
	if (InitAdv == true) {
		temp = INIT;
		std::cin.get();
		INIT = DEXmod + rand() % 20 + 1;
		if (temp > INIT) {
			INIT = temp;
		}
	}
	enemyINIT = enemyDEX + rand() % 20 + 1;
	Fighting();
}

void Game::Fighting() {
fighting:
	system("title In Battle");
	do {
		system("CLS");
		std::cout << "  " << NAME << "             " << enemy << std::endl;
		std::cout << "  HP: " << HP << "/" << MAXHP << "            " << "HP: " << enemyHP << "/" << enemyMAXHP << std::endl;
		std::cout << "\n";
		std::cout << "1) Attack\n";
		std::cout << "2) Use a " << CLASS << " ability\n";
		std::cout << "3) Check you Character Sheet\n";
		std::cout << std::endl;
		std::cout << "What do you wish to do?  ";
		std::getline(std::cin,choice);
	} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "save"));
	if (choice == "1") {
		if (INIT >= enemyINIT) {
			Weapons();
			std::cout << std::endl;
			EnemyDeathCheck();
			CreatureAttack();
			std::cin.ignore();
			std::cin.get();
			DeathCheck();
			goto fighting;
		}
		else {
			CreatureAttack();
			DeathCheck();
			std::cout << std::endl;
			Weapons();
			EnemyDeathCheck();
			std::cin.ignore();
			std::cin.get();
			goto fighting;
		}
	}
	if (choice == "2") {
		Abilities();
		goto fighting;
	}
	if (choice == "3") {
		CharacterSheet();
		goto fighting;
	}
	if (choice == "save") {
		Save();
		goto fighting;
	}
}

void Game::Spells() {
	if (equippedWeapon == "Fireball") {
		dice = rand() % 20 + 1;
		ATT = ClubMOD + dice;
		if (enemyAC < ATT) {
			DAM = rand() % 4 + 1;
			std::cout << "You swing your club wide and make contact with the " << enemy << "!\n";
			std::cout << "You deal " << DAM << "damage with your attack! \n";
			enemyHP = enemyHP - DAM;
		}
		else {
			std::cout << "You swing your club with reckless abandon and miss the target! \n";
		}
	}

}

void Game::StatModifiers() {
	if (STR > 7 && STR < 10) {
		STRmod = -1;
	}
	if (STR > 9 && STR < 12) {
		STRmod = 0;
	}
	if (STR > 11 && STR < 14) {
		STRmod = 1;
	}
	if (STR > 13 && STR < 16) {
		STRmod = 2;
	}
	if (STR > 15 && STR < 18) {
		STRmod = 3;
	}
	if (STR > 17 && STR < 20) {
		STRmod = 4;
	}
	if (DEX > 7 && DEX < 10) {
		DEXmod = -1;
	}
	if (DEX > 9 && DEX < 12) {
		DEXmod = 0;
	}
	if (DEX > 11 && DEX < 14) {
		DEXmod = 1;
	}
	if (DEX > 13 && DEX < 16) {
		DEXmod = 2;
	}
	if (DEX > 15 && DEX < 18) {
		DEXmod = 3;
	}
	if (DEX > 17 && DEX < 20) {
		DEXmod = 4;
	}
	if (CON > 7 && CON < 10) {
		CONmod = -1;
	}
	if (CON > 9 && CON < 12) {
		CONmod = 0;
	}
	if (CON > 11 && CON < 14) {
		CONmod = 1;
	}
	if (CON > 13 && CON < 16) {
		CONmod = 2;
	}
	if (CON > 15 && CON < 18) {
		CONmod = 3;
	}
	if (CON > 17 && CON < 20) {
		CONmod = 4;
	}
	if (INT > 7 && INT < 10) {
		INTmod = -1;
	}
	if (INT > 9 && INT < 12) {
		INTmod = 0;
	}
	if (INT > 11 && INT < 14) {
		INTmod = 1;
	}
	if (INT > 13 && INT < 16) {
		INTmod = 2;
	}
	if (INT > 15 && INT < 18) {
		INTmod = 3;
	}
	if (INT > 17 && INT < 20) {
		INTmod = 4;
	}
	if (WIS > 7 && WIS < 10) {
		WISmod = -1;
	}
	if (WIS > 9 && WIS < 12) {
		WISmod = 0;
	}
	if (WIS > 11 && WIS < 14) {
		WISmod = 1;
	}
	if (WIS > 13 && WIS < 16) {
		WISmod = 2;
	}
	if (WIS > 15 && WIS < 18) {
		WISmod = 3;
	}
	if (WIS > 17 && WIS < 20) {
		WISmod = 4;
	}
	if (CHA > 7 && CHA < 10) {
		CHAmod = -1;
	}
	if (CHA > 9 && CHA < 12) {
		CHAmod = 0;
	}
	if (CHA > 11 && CHA < 14) {
		CHAmod = 1;
	}
	if (CHA > 13 && CHA < 16) {
		CHAmod = 2;
	}
	if (CHA > 15 && CHA < 18) {
		CHAmod = 3;
	}
	if (CHA > 17 && CHA < 20) {
		CHAmod = 4;
	}
}

void Game::SkillModifiers() {
	if (ATH > STRmod) {
		ATH = STRmod + PROMOD;
	}
	else {
		ATH = STRmod;
	}
	if (ACRO > DEXmod) {
		ACRO = DEXmod + PROMOD;
	}
	else {
		ACRO = DEXmod;
	}
	if (SOH > DEXmod) {
		SOH = DEXmod + PROMOD;
	}
	else {
		SOH = DEXmod;
	}
	if (STEL > DEXmod) {
		STEL = DEXmod + PROMOD;
	}
	else {
		STEL = DEXmod;
	}
	if (ARCA > INTmod) {
		ARCA = INTmod + PROMOD;
	}
	else {
		ARCA = INTmod;
	}
	if (HIST > INTmod) {
		HIST = INTmod + PROMOD;
	}
	else {
		HIST = INTmod;
	}
	if (INVEST > INTmod) {
		INVEST = INTmod + PROMOD;
	}
	else {
		INVEST = INTmod;
	}
	if (NATU > INTmod) {
		NATU = INTmod + PROMOD;
	}
	else {
		NATU = INTmod;
	}
	if (RELIG > INTmod) {
		RELIG = INTmod + PROMOD;
	}
	else {
		RELIG = INTmod;
	}
	if (ANIMHAND > WISmod) {
		ANIMHAND = WISmod + PROMOD;
	}
	else {
		ANIMHAND = WISmod;
	}
	if (INSI > WISmod) {
		INSI = WISmod + PROMOD;
	}
	else {
		INSI = WISmod;
	}
	if (MEDI > WISmod) {
		MEDI = WISmod + PROMOD;
	}
	else {
		MEDI = WISmod;
	}
	if (PERCP > WISmod) {
		PERCP = WISmod + PROMOD;
	}
	else {
		PERCP = WISmod;
	}
	if (SURV > WISmod) {
		SURV = WISmod + PROMOD;
	}
	else {
		SURV = WISmod;
	}
	if (DECP > CHAmod) {
		DECP = CHAmod + PROMOD;
	}
	else {
		DECP = CHAmod;
	}
	if (INTIMI > CHAmod) {
		INTIMI = CHAmod + PROMOD;
	}
	else {
		INTIMI = CHAmod;
	}
	if (PERFO > CHAmod) {
		PERFO = CHAmod + PROMOD;
	}
	else {
		PERFO = CHAmod;
	}
	if (PERSU > CHAmod) {
		PERSU = CHAmod + PROMOD;
	}
	else {
		PERSU = CHAmod;
	}
}

void Game::CharacterSheet() {
charactersheet:
	do {
		system("title Character Sheet");
		system("CLS");
		std::cout << "Character Sheet - \n";
		std::cout << std::endl;
		std::cout << "Name: " << NAME << std::endl;
		std::cout << "Race: " << RACE << std::endl;
		std::cout << "Class: " << CLASS << std::endl;
		std::cout << "Background: " << BACKGROUND << std::endl;
		std::cout << "Level: " << LVL << std::endl;
		std::cout << "XP: " << XP << std::endl;
		std::cout << "XP for Level Up: " << XPneeded << std::endl;
		std::cout << "AC: " << AC << std::endl;
		std::cout << std::endl;
		std::cout << "Stats -\n";
		std::cout << "HP:             " << HP << "/" << MAXHP << std::endl;
		std::cout << "Strength:       " << STR << "     Modifier: " << STRmod << std::endl;
		std::cout << "Dexterity:      " << DEX << "     Modifier: " << DEXmod << std::endl;
		std::cout << "Constitution:   " << CON << "     Modifier: " << CONmod << std::endl;
		std::cout << "Intelligence:   " << INT << "     Modifier: " << INTmod << std::endl;
		std::cout << "Wisdom:         " << WIS << "     Modifier: " << WISmod << std::endl;
		std::cout << "Charisma:       " << CHA << "     Modifier: " << CHAmod << std::endl;
		std::cout << std::endl;
		std::cout << "Skills -          Governing Stat -    Modifier - \n";
		std::cout << "Athletics         (Strength)          [" << ATH << "]\n";
		std::cout << "Acrobatics        (Dexterity)         [" << ACRO << "]\n";
		std::cout << "Sleight of Hand   (Dexterity)         [" << SOH << "]\n";
		std::cout << "Stealth           (Dexterity)         [" << STEL << "]\n";
		std::cout << "Arcana            (Intelligence)      [" << ARCA << "]\n";
		std::cout << "History           (Intelligence)      [" << HIST << "]\n";
		std::cout << "Investigation     (Intelligence)      [" << INVEST << "]\n";
		std::cout << "Nature            (Intelligence)      [" << NATU << "]\n";
		std::cout << "Religion          (Intelligence)      [" << RELIG << "]\n";
		std::cout << "Animal Handling   (Wisdom)            [" << ANIMHAND << "]\n";
		std::cout << "Insight           (Wisdom)            [" << INSI << "]\n";
		std::cout << "Medicine          (Wisdom)            [" << MEDI << "]\n";
		std::cout << "Perception        (Wisdom)            [" << PERCP << "]\n";
		std::cout << "Survival          (Wisdom)            [" << SURV << "]\n";
		std::cout << "Deception         (Charisma)          [" << DECP << "]\n";
		std::cout << "Intimidation      (Charisma)          [" << INTIMI << "]\n";
		std::cout << "Performance       (Charisma)          [" << PERFO << "]\n";
		std::cout << "Persuasion        (Charisma)          [" << PERSU << "]\n";
		std::cout << std::endl;
		AbilityList();
		std::cout << std::endl;
		std::cout << "Wealth - \n";
		if (PP > 0) {
			std::cout << "Platinum Pieces: " << PP << std::endl;
		}
		if (GP > 0) {
			std::cout << "Gold Pieces: " << GP << std::endl;
		}
		if (SP > 0) {
			std::cout << "Silver Pieces: " << SP << std::endl;
		}
		if (CP > 0) {
			std::cout << "Copper Pieces: " << CP << std::endl;
		}
		std::cout << std::endl;
		ProficiencyList();
		std::cout << std::endl;
		WeaponList();
		std::cout << std::endl;
		ArmourList();
		if (Shield > 0) {
			std::cout << "Shield: " << Shield << std::endl;
		}
		std::cout << std::endl;
		std::cout << "Equipped Weapon: " << equippedWeapon << std::endl;
		std::cout << "Equipped Armour: " << equippedArmour << std::endl;
		std::cout << "Shield Equipped: " << equippedShield << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "Options: \n";
		std::cout << std::endl;
		std::cout << "1) Change equipped weapon \n";
		std::cout << "2) Change equipped armour \n";
		std::cout << "3) Equip a Shield \n";
		std::cout << "4) Use a consumable item \n";
		std::cout << "5) Exit the Character Sheet \n";
		std::cout << std::endl;
		std::cout << "Your choice?  ";
		std::getline(std::cin,choice);
	} while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5"));
	if (choice == "1") {
		system("CLS");
		WeaponList(); 
		std::cout << std::endl;
		std::cout << "Equipped Weapon: " << equippedWeapon << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "Which weapon do you wish to equip?  ";
		std::getline(std::cin,choice);
		equippedWeapon = choice;
		goto charactersheet;
	}
	if (choice == "2") {
		system("CLS");
		ArmourList();
		std::cout << std::endl;
		std::cout << "Equipped Armour: " << equippedArmour << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "Which armour do you wish to change into?  ";
		std::getline(std::cin,choice);
		equippedArmour = choice;
		Armours();
		goto charactersheet;
	}
	if (choice == "3") {
		do {
			system("CLS");
			std::cout << "Shields - \n";
			if (Shield > 0) {
				std::cout << "Shield: " << Shield << std::endl;
			}
			else {
				std::cout << "You don't have a shield to equip.\n";
			}
			std::cout << std::endl;
			std::cout << "Shield Equipped: " << equippedShield << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << "Would you like to have a shield equipped?  ";
			std::getline(std::cin,choice);
		} while (!(choice == "Yes" || choice == "yes" || choice == "No" || choice == "no"));
		if (choice == "yes" || choice == "Yes") {
			choice = "Yes";
		}
		if (choice == "no" || choice == "No") {
			choice = "No";
		}
		if (equippedShield == "Yes" && choice == "Yes") {
			AC = AC;
			equippedShield = "Yes";
		}
		if (equippedShield == "Yes" && choice == "No") {
			AC = AC - 2;
			equippedShield = "No";
		}
		if (equippedShield == "No" && choice == "Yes") {
			AC = AC + 2;
			equippedShield = "Yes";
		}
		if (equippedShield == "No" && choice == "No") {
			AC = AC;
			equippedShield = "No";
		}
		goto charactersheet;
	}
	if (choice == "4") {
		system("CLS");
		ConsumableList();
		std::cout << std::endl;
		std::cout << "Which consumable do you wish to use?  ";
		std::getline(std::cin,choice);
		consumable = choice;
		Consumables();
		goto charactersheet;
	}
}

void Game::WeaponList() {
	if (Bagpipes > 0 || Drum > 0 || Dulcimer > 0 || Flute > 0 || Lute > 0 || Lyre > 0 || Horn > 0 || PanFlute > 0 || Shawm > 0 || Viol > 0 || HolySymbol > 0 || DruidicFocus > 0 || SpellBook > 0 || ArcaneFocus > 0) {
		std::cout << "Magical Items -\n";
		if (Bagpipes > 0) {
			std::cout << "Bagpipes: " << Bagpipes << std::endl;
		}
		if (Drum > 0) {
			std::cout << "Drum: " << Drum << std::endl;
		}
		if (Dulcimer > 0) {
			std::cout << "Dulcimer: " << Dulcimer << std::endl;
		}
		if (Flute > 0) {
			std::cout << "Flute: " << Flute << std::endl;
		}
		if (Lute > 0) {
			std::cout << "Lute: " << Lute << std::endl;
		}
		if (Lyre > 0) {
			std::cout << "Lyre: " << Lyre << std::endl;
		}
		if (Horn > 0) {
			std::cout << "Horn: " << Horn << std::endl;
		}
		if (PanFlute > 0) {
			std::cout << "Pan Flute: " << PanFlute << std::endl;
		}
		if (Shawm > 0) {
			std::cout << "Shawm: " << Shawm << std::endl;
		}
		if (Viol > 0) {
			std::cout << "Viol: " << Viol << std::endl;
		}
		if (HolySymbol > 0) {
			std::cout << "Holy Symbol: " << HolySymbol << std::endl;
		}
		if (DruidicFocus > 0) {
			std::cout << "Druidic Focus: " << DruidicFocus << std::endl;
		}
		if (SpellBook > 0) {
			std::cout << "Spell Book: " << SpellBook << std::endl;
		}
		if (ArcaneFocus > 0) {
			std::cout << "Arcane Focus: " << ArcaneFocus << std::endl;
		}
	}
	std::cout << "Weapons - \n";
	if (Club > 0) {
		std::cout << "Club: " << Club << "             |  1d4" << std::endl;
	}
	if (Dagger > 0) {
		std::cout << "Dagger: " << Dagger << "           |  1d4" << std::endl;
	}
	if (Greatclub > 0) {
		std::cout << "Greatclub: " << Greatclub << "        |  1d8" << std::endl;
	}
	if (Handaxe > 0) {
		std::cout << "Handaxe: " << Handaxe << "          |  1d6" << std::endl;
	}
	if (Javelin > 0) {
		std::cout << "Javelin: " << Javelin << "          |  1d6" << std::endl;
	}
	if (LightHammer > 0) {
		std::cout << "Light Hammer: " << LightHammer << "     |  1d4" << std::endl;
	}
	if (Mace > 0) {
		std::cout << "Mace: " << Mace << "             |  1d6" << std::endl;
	}
	if (Quarterstaff > 0) {
		std::cout << "Quarterstaff: " << Quarterstaff << "     |  1d6" << std::endl;
	}
	if (Sickle > 0) {
		std::cout << "Sickle: " << Sickle << "           |  1d4" << std::endl;
	}
	if (Spear > 0) {
		std::cout << "Spear: " << Spear << "            |  1d6" << std::endl;
	}
	if (LightCrossbow > 0) {
		std::cout << "Light Crossbow: " << LightCrossbow << "   |  1d8" << std::endl;
	}
	if (Dart > 0) {
		std::cout << "Dart: " << Dart << "             |  1d4" << std::endl;
	}
	if (Shortbow > 0) {
		std::cout << "Shortbow: " << Shortbow << "         |  1d6" << std::endl;
	}
	if (Sling > 0) {
		std::cout << "Sling: " << Sling << "            |  1d4" << std::endl;
	}
	if (Battleaxe > 0) {
		std::cout << "Battleaxe: " << Battleaxe << "        |  1d8" << std::endl;
	}
	if (Flail > 0) {
		std::cout << "Flail: " << Flail << "            |  1d8" << std::endl;
	}
	if (Glaive > 0) {
		std::cout << "Glaive: " << Glaive << "           |  1d10" << std::endl;
	}
	if (Greataxe > 0) {
		std::cout << "Greataxe: " << Greataxe << "         |  1d12" << std::endl;
	}
	if (Greatsword > 0) {
		std::cout << "Greatsword: " << Greatsword << "       |  2d6" << std::endl;
	}
	if (Halberd > 0) {
		std::cout << "Halberd: " << Halberd << "          |  1d10" << std::endl;
	}
	if (Lance > 0) {
		std::cout << "Lance: " << Lance << "            |  1d12" << std::endl;
	}
	if (Longsword > 0) {
		std::cout << "Longsword: " << Longsword << "        |  1d8" << std::endl;
	}
	if (Maul > 0) {
		std::cout << "Maul: " << Maul << "             |  2d6" << std::endl;
	}
	if (Morningstar > 0) {
		std::cout << "Morningstar: " << Morningstar << "      |  1d8" << std::endl;
	}
	if (Pike > 0) {
		std::cout << "Pike: " << Pike << "             |  1d10" << std::endl;
	}
	if (Rapier > 0) {
		std::cout << "Rapier: " << Rapier << "           |  1d8" << std::endl;
	}
	if (Scimitar > 0) {
		std::cout << "Scimitar: " << Scimitar << "         |  1d6" << std::endl;
	}
	if (Shortsword > 0) {
		std::cout << "Shortsword: " << Shortsword << "       |  1d6" << std::endl;
	}
	if (Trident > 0) {
		std::cout << "Trident: " << Trident << "          |  1d6" << std::endl;
	}
	if (WarPick > 0) {
		std::cout << "War Pick: " << WarPick << "         |  1d8" << std::endl;
	}
	if (Warhammer > 0) {
		std::cout << "Warhammer: " << Warhammer << "        |  1d8" << std::endl;
	}
	if (Whip > 0) {
		std::cout << "Whip: " << Whip << "             |  1d4" << std::endl;
	}
	if (Blowgun > 0) {
		std::cout << "Blowgun: " << Blowgun << "          |  1" << std::endl;
	}
	if (HandCrossbow > 0) {
		std::cout << "Hand Crossbow: " << HandCrossbow << "    |  1d6" << std::endl;
	}
	if (HeavyCrossbow > 0) {
		std::cout << "Heavy Crossbow: " << HeavyCrossbow << "   |  1d10" << std::endl;
	}
	if (Longbow > 0) {
		std::cout << "Longbow: " << Longbow << "          |  1d8" << std::endl;
	}
	if (Net > 0) {
		std::cout << "Net: " << Net << "              |  None" << std::endl;
	}
}

void Game::ArmourList() {
	if (Padded > 0 || Leather > 0 || StuddedLeather > 0 || Hide > 0 || ChainShirt > 0 || ScaleMail > 0 || Breastplate > 0 || HalfPlate > 0 || RingMail > 0 || ChainMail > 0 || Splint > 0 || Plate > 0) {
		std::cout << "Armours - \n";
		if (Padded > 0) {
			std::cout << "Padded: " << Padded << std::endl;
		}
		if (Leather > 0) {
			std::cout << "Leather: " << Leather << std::endl;
		}
		if (StuddedLeather > 0) {
			std::cout << "Studded Leather: " << StuddedLeather << std::endl;
		}
		if (Hide > 0) {
			std::cout << "Hide: " << Hide << std::endl;
		}
		if (ChainShirt > 0) {
			std::cout << "Chain Shirt: " << ChainShirt << std::endl;
		}
		if (ScaleMail > 0) {
			std::cout << "Scale Mail: " << ScaleMail << std::endl;
		}
		if (Breastplate > 0) {
			std::cout << "Breastplate: " << Breastplate << std::endl;
		}
		if (HalfPlate > 0) {
			std::cout << "Half Plate: " << HalfPlate << std::endl;
		}
		if (RingMail > 0) {
			std::cout << "Ring Mail: " << RingMail << std::endl;
		}
		if (ChainMail > 0) {
			std::cout << "Chain Mail: " << ChainMail << std::endl;
		}
		if (Splint > 0) {
			std::cout << "Splint: " << Splint << std::endl;
		}
		if (Plate > 0) {
			std::cout << "Plate: " << Plate << std::endl;
		}
	}
}

void Game::ConsumableList() {
	std::cout << "Consumables - \n";
	if (HealthPotion > 0) {
		std::cout << "Health Potion: " << HealthPotion << std::endl;
	}
	if (MedicalKit > 0) {
		std::cout << "Medical Kit: " << MedicalKit << std::endl;
	}
}

void Game::ProficiencyList() {
	std::cout << "Proficiencies - \n";
	if (ClubMOD > 0 && DaggerMOD > 0 && GreatclubMOD > 0 && HandaxeMOD > 0 && JavelinMOD > 0 && LightHammerMOD > 0 && MaceMOD > 0 && QuarterstaffMOD > 0 && SickleMOD > 0 && SpearMOD > 0) {
		std::cout << "Simple Melee Weapons \n";
	}
	if (!(ClubMOD > 0 && DaggerMOD > 0 && GreatclubMOD > 0 && HandaxeMOD > 0 && JavelinMOD > 0 && LightHammerMOD > 0 && MaceMOD > 0 && QuarterstaffMOD > 0 && SickleMOD > 0 && SpearMOD > 0)) {
		if (ClubMOD > 0) {
			std::cout << "Club" << std::endl;
		}
		if (DaggerMOD > 0) {
			std::cout << "Dagger" << std::endl;
		}
		if (GreatclubMOD > 0) {
			std::cout << "Greatclub" << std::endl;
		}
		if (HandaxeMOD > 0) {
			std::cout << "Handaxe" << std::endl;
		}
		if (JavelinMOD > 0) {
			std::cout << "Javelin" << std::endl;
		}
		if (LightHammerMOD > 0) {
			std::cout << "Light Hammer" << std::endl;
		}
		if (MaceMOD > 0) {
			std::cout << "Mace" << std::endl;
		}
		if (QuarterstaffMOD > 0) {
			std::cout << "Quarterstaff" << std::endl;
		}
		if (SickleMOD > 0) {
			std::cout << "Sickle" << std::endl;
		}
		if (SpearMOD > 0) {
			std::cout << "Spear" << std::endl;
		}
	}
	if (LightCrossbowMOD > 0 && DartMOD > 0 && ShortbowMOD > 0 && SlingMOD > 0) {
		std::cout << "Simple Ranged Weapons \n";
	}
	if (!(LightCrossbowMOD > 0 && DartMOD > 0 && ShortbowMOD > 0 && SlingMOD > 0)) {
		if (LightCrossbowMOD > 0) {
			std::cout << "Light Crossbow" << std::endl;
		}
		if (DartMOD > 0) {
			std::cout << "Dart" << std::endl;
		}
		if (ShortbowMOD > 0) {
			std::cout << "Shortbow" << std::endl;
		}
		if (SlingMOD > 0) {
			std::cout << "Sling" << std::endl;
		}
	}
	if (BattleaxeMOD > 0 && FlailMOD > 0 && GlaiveMOD > 0 && GreataxeMOD > 0 && GreatswordMOD > 0 && HalberdMOD > 0 && LanceMOD > 0 && LongswordMOD > 0 && MaulMOD > 0 && MorningstarMOD > 0 && PikeMOD > 0 && RapierMOD > 0 && ScimitarMOD > 0 && ShortswordMOD > 0 && TridentMOD > 0 && WarPickMOD > 0 && WarhammerMOD > 0 && WhipMOD > 0) {
		std::cout << "Martial Melee Weapons \n";
	}
	if (!(BattleaxeMOD > 0 && FlailMOD > 0 && GlaiveMOD > 0 && GreataxeMOD > 0 && GreatswordMOD > 0 && HalberdMOD > 0 && LanceMOD > 0 && LongswordMOD > 0 && MaulMOD > 0 && MorningstarMOD > 0 && PikeMOD > 0 && RapierMOD > 0 && ScimitarMOD > 0 && ShortswordMOD > 0 && TridentMOD > 0 && WarPickMOD > 0 && WarhammerMOD > 0 && WhipMOD > 0)) {
		if (BattleaxeMOD > 0) {
			std::cout << "Battleaxe" << std::endl;
		}
		if (FlailMOD > 0) {
			std::cout << "Flail" << std::endl;
		}
		if (GlaiveMOD > 0) {
			std::cout << "Glaive" << std::endl;
		}
		if (GreataxeMOD > 0) {
			std::cout << "Greataxe" << std::endl;
		}
		if (GreatswordMOD > 0) {
			std::cout << "Greatsword" << std::endl;
		}
		if (HalberdMOD > 0) {
			std::cout << "Halberd" << std::endl;
		}
		if (LanceMOD > 0) {
			std::cout << "Lance" << std::endl;
		}
		if (LongswordMOD > 0) {
			std::cout << "Longsword" << std::endl;
		}
		if (MaulMOD > 0) {
			std::cout << "Maul" << std::endl;
		}
		if (MorningstarMOD > 0) {
			std::cout << "Morningstar" << std::endl;
		}
		if (PikeMOD > 0) {
			std::cout << "Pike" << std::endl;
		}
		if (RapierMOD > 0) {
			std::cout << "Rapier" << std::endl;
		}
		if (ScimitarMOD > 0) {
			std::cout << "Scimitar" << std::endl;
		}
		if (ShortswordMOD > 0) {
			std::cout << "Shortsword" << std::endl;
		}
		if (TridentMOD > 0) {
			std::cout << "Trident" << std::endl;
		}
		if (WarPickMOD > 0) {
			std::cout << "War Pick" << std::endl;
		}
		if (WarhammerMOD > 0) {
			std::cout << "Warhammer" << std::endl;
		}
		if (WhipMOD > 0) {
			std::cout << "Whip" << std::endl;
		}
	}
	if (BlowgunMOD > 0 && HandCrossbowMOD > 0 && HeavyCrossbowMOD > 0 && LongbowMOD > 0 && NetMOD > 0) {
		std::cout << "Martial Ranged Weapons \n";
	}
	if (!(BlowgunMOD > 0 && HandCrossbowMOD > 0 && HeavyCrossbowMOD > 0 && LongbowMOD > 0 && NetMOD > 0)) {
		if (BlowgunMOD > 0) {
			std::cout << "Blowgun" << std::endl;
		}
		if (HandCrossbowMOD > 0) {
			std::cout << "Hand Crossbow" << std::endl;
		}
		if (HeavyCrossbowMOD > 0) {
			std::cout << "Heavy Crossbow" << std::endl;
		}
		if (LongbowMOD > 0) {
			std::cout << "Longbow" << std::endl;
		}
		if (NetMOD > 0) {
			std::cout << "Net" << std::endl;
		}
	}
	if (PaddedMOD > 0 && LeatherMOD > 0 && StuddedLeatherMOD > 0) {
		std::cout << "Light Armours \n";
	}
	if (!(PaddedMOD > 0 && LeatherMOD > 0 && StuddedLeatherMOD > 0)) {
		if (PaddedMOD > 0) {
			std::cout << "Padded Armour\n";
		}
		if (LeatherMOD > 0) {
			std::cout << "Leather Armour\n";
		}
		if (StuddedLeatherMOD > 0) {
			std::cout << "Studded Leather Armour\n";
		}
	}
	if (HideMOD > 0 && ChainShirtMOD > 0 && ScaleMailMOD > 0 && BreastplateMOD > 0 && HalfPlateMOD > 0) {
		std::cout << "Medium Armours \n";
	}
	if (!(HideMOD > 0 && ChainShirtMOD > 0 && ScaleMailMOD > 0 && BreastplateMOD > 0 && HalfPlateMOD > 0)) {
		if (HideMOD > 0) {
			std::cout << "Hide Armour\n";
		}
		if (ChainShirtMOD > 0) {
			std::cout << "Chain Shirt Armour\n";
		}
		if (ScaleMailMOD > 0) {
			std::cout << "Scale Mail Armour\n";
		}
		if (BreastplateMOD > 0) {
			std::cout << "Breastplate Armour\n";
		}
		if (HalfPlateMOD > 0) {
			std::cout << "Half Plate Armour\n";
		}
	}
	if (RingMailMOD > 0 && ChainMailMOD > 0 && SplintMOD > 0 && PlateMOD > 0) {
		std::cout << "Heavy Armours \n";
	}
	if (!(RingMailMOD > 0 && ChainMailMOD > 0 && SplintMOD > 0 && PlateMOD > 0)) {
		if (RingMailMOD > 0) {
			std::cout << "Ring Mail Armour\n";
		}
		if (ChainMailMOD > 0) {
			std::cout << "Chain Mail Armour\n";
		}
		if (SplintMOD > 0) {
			std::cout << "Splint Armour\n";
		}
		if (PlateMOD > 0) {
			std::cout << "Plate Armour\n";
		}
	}
	if (ShieldMOD > 0) {
		std::cout << "Shield\n";
	}
}

void Game::AbilityList() {
	if (!(abilityOne == "None")) {
		std::cout << "Abilities -\n";
		std::cout << "Ability 1: " << abilityOne << std::endl;
	}
	if (!(abilityTwo == "None")) {
		std::cout << "Ability 2: " << abilityTwo << std::endl;
	}
	if (!(abilityThree == "None")) {
		std::cout << "Ability 3: " << abilityThree << std::endl;
	}
	if (!(abilityFour == "None")) {
		std::cout << "Ability 4: " << abilityFour << std::endl;
	}
	if (!(abilityFive == "None")) {
		std::cout << "Ability 5: " << abilityFive << std::endl;
	}
	if (!(abilitySix == "None")) {
		std::cout << "Ability 6: " << abilityOne << std::endl;
	}
	if (!(abilitySeven == "None")) {
		std::cout << "Ability 7: " << abilityTwo << std::endl;
	}
	if (!(abilityEight == "None")) {
		std::cout << "Ability 8: " << abilityThree << std::endl;
	}
	if (!(abilityNine == "None")) {
		std::cout << "Ability 9: " << abilityFour << std::endl;
	}
	if (!(abilityTen == "None")) {
		std::cout << "Ability 10: " << abilityFive << std::endl;
	}
	if (!(ability11 == "None")) {
		std::cout << "Ability 11: " << abilityFive << std::endl;
	}
	if (!(ability12 == "None")) {
		std::cout << "Ability 12: " << abilityFive << std::endl;
	}
	if (!(ability13 == "None")) {
		std::cout << "Ability 13: " << abilityFive << std::endl;
	}
	if (!(ability14 == "None")) {
		std::cout << "Ability 14: " << abilityFive << std::endl;
	}
	if (!(ability15 == "None")) {
		std::cout << "Ability 15: " << abilityFive << std::endl;
	}
	if (!(ability16 == "None")) {
		std::cout << "Ability 16: " << abilityFive << std::endl;
	}
	if (!(ability17 == "None")) {
		std::cout << "Ability 17: " << abilityFive << std::endl;
	}
	if (!(ability18 == "None")) {
		std::cout << "Ability 18: " << abilityFive << std::endl;
	}
	if (!(ability19 == "None")) {
		std::cout << "Ability 19: " << abilityFive << std::endl;
	}
	if (!(ability20 == "None")) {
		std::cout << "Ability 20: " << abilityFive << std::endl;
	}
}

void Game::Abilities() {
	system("CLS");
	if (!(abilityOne == "None")) {
		std::cout << "Ability List - \n";
		std::cout << "Ability 1: " << abilityOne << std::endl;
		}
	else {
		std::cout << "You have not unlocked any " << CLASS << " abilities yet \n";
		std::cin.ignore();
		std::cin.get();
	}
	if (!(abilityTwo == "None")) {
		std::cout << "Ability 2: " << abilityTwo << std::endl;
	}
	if (!(abilityThree == "None")) {
		std::cout << "Ability 3: " << abilityThree << std::endl;
	}
	if (!(abilityFour == "None")) {
		std::cout << "Ability 4: " << abilityFour << std::endl;
	}
	if (!(abilityFive == "None")) {
		std::cout << "Ability 5: " << abilityFive << std::endl;
	}
	if (!(abilitySix == "None")) {
		std::cout << "Ability 6: " << abilityOne << std::endl;
	}
	if (!(abilitySeven == "None")) {
		std::cout << "Ability 7: " << abilityTwo << std::endl;
	}
	if (!(abilityEight == "None")) {
		std::cout << "Ability 8: " << abilityThree << std::endl;
	}
	if (!(abilityNine == "None")) {
		std::cout << "Ability 9: " << abilityFour << std::endl;
	}
	if (!(abilityTen == "None")) {
		std::cout << "Ability 10: " << abilityFive << std::endl;
	}
	if (!(ability11 == "None")) {
		std::cout << "Ability 11: " << abilityFive << std::endl;
	}
	if (!(ability12 == "None")) {
		std::cout << "Ability 12: " << abilityFive << std::endl;
	}
	if (!(ability13 == "None")) {
		std::cout << "Ability 13: " << abilityFive << std::endl;
	}
	if (!(ability14 == "None")) {
		std::cout << "Ability 14: " << abilityFive << std::endl;
	}
	if (!(ability15 == "None")) {
		std::cout << "Ability 15: " << abilityFive << std::endl;
	}
	if (!(ability16 == "None")) {
		std::cout << "Ability 16: " << abilityFive << std::endl;
	}
	if (!(ability17 == "None")) {
		std::cout << "Ability 17: " << abilityFive << std::endl;
	}
	if (!(ability18 == "None")) {
		std::cout << "Ability 18: " << abilityFive << std::endl;
	}
	if (!(ability19 == "None")) {
		std::cout << "Ability 19: " << abilityFive << std::endl;
	}
	if (!(ability20 == "None")) {
		std::cout << "Ability 20: " << abilityFive << std::endl;
	}
	std::cout << std::endl << std::endl;
	std::cout << "Which Ability would you like to know more about?  ";
	std::getline(std::cin,choice);
	if (choice == "Extra Attack") {
		ExtraAttack();
	}
	if (choice == "Rage") {
		Rage();
	}
	if (choice == "Unarmoured Defence") {
		UnarmouredDefence();
	}
}

void Game::ExtraAttack() {
	do {
		std::cout << " - Extra Attack - " << std::endl << std::endl;
		std::cout << "Description: \n";
		std::cout << "Allows the user to attack twice during their action.\n";
		std::cout << std::endl;
		std::cout << "Would you like to use this ability during your action? ";
		std::getline(std::cin,choice);
	} while (!(choice == "Yes" || choice == "yes" || choice == "No" || choice == "no"));
	if (choice == "Yes" || choice == "yes") {
		if (INIT >= enemyINIT) {
			Weapons();
			Weapons();
			std::cout << std::endl;
			EnemyDeathCheck();
			CreatureAttack();
			std::cin.ignore();
			std::cin.get();
			DeathCheck();
		}
		else {
			CreatureAttack();
			DeathCheck();
			std::cout << std::endl;
			Weapons();
			Weapons();
			EnemyDeathCheck();
			std::cin.ignore();
			std::cin.get();
		}
	}
}

void Game::Rage() {
	do {
		std::cout << " - Rage - " << std::endl << std::endl;
		std::cout << "Description: \n";
		std::cout << "The user attacks with primal ferocity. Gaining damage when using Strength that grows with their Barbarian level.\n";
		std::cout << std::endl;
		std::cout << "Would you like to use this ability during your action? ";
		std::getline(std::cin, choice);
	} while (!(choice == "Yes" || choice == "yes" || choice == "No" || choice == "no"));
	if (choice == "Yes" || choice == "yes") {
		if (INIT >= enemyINIT) {
			for (int counter = 4; counter > 0; counter--) {
				Raging = true;
				Weapons();
				std::cout << std::endl;
				EnemyDeathCheck();
				CreatureAttack();
				std::cin.ignore();
				std::cin.get();
				DeathCheck();
			}
			std::cout << "You have not rested enough and are unable to enter a rage just now.\n";


		
		
		}
		else {
			for (int counter = 4; counter > 0; counter--) {
				Raging = true;
				CreatureAttack();
				DeathCheck();
				std::cout << std::endl;
				Weapons();
				EnemyDeathCheck();
				std::cin.ignore();
				std::cin.get();
			}
		}
	}
}

void Game::UnarmouredDefence() {
		std::cout << " - Unarmoured Defence - " << std::endl << std::endl;
		std::cout << "Description: \n";
		if (CLASS == "Barbarian") {
			std::cout << "Whilst you are not wearing any armour your AC equals your Dexterity modifier plus your Constitution modifier.\n";
		}
		if (CLASS == "Monk") {
			std::cout << "Whilst you are not wearing any armour your AC equals your Dexterity modifier plus your Wisdom modifier.\n";
		}
		std::cout << std::endl;
		std::cin.ignore();
		std::cin.get();
}

void Game::RecklessAttack() {
	do {
		std::cout << " - Reckless Attack - " << std::endl << std::endl;
		std::cout << "Description: \n";
		std::cout << "The user throws regard of defence to the side when they attack.\n";
		std::cout << "Giving their attack advantage but also their opponenet's.\n";
		std::cout << std::endl;
		std::cout << "Would you like to use this ability during your action? ";
		std::getline(std::cin, choice);
	} while (!(choice == "Yes" || choice == "yes" || choice == "No" || choice == "no"));
	if (choice == "Yes" || choice == "yes") {
		if (INIT >= enemyINIT) {
			Weapons();
			std::cout << std::endl;
			EnemyDeathCheck();
			EnemyAttackWithAdv();
			std::cin.ignore();
			std::cin.get();
			DeathCheck();
		}
		else {
			EnemyAttackWithAdv();
			DeathCheck();
			std::cout << std::endl;
			Weapons();
			EnemyDeathCheck();
			std::cin.ignore();
			std::cin.get();
		}
	}
}

void Game::FeralInstinct() {
	std::cout << " - Feral Instinct - " << std::endl << std::endl;
	std::cout << "Description: \n";
	std::cout << "Due to your instincts being so honed, you now have advantage on initiative checks.\n";
	std::cout << std::endl;
	std::cin.ignore();
	std::cin.get();
}

void Game::BrutalCritical() {

}

void Game::RelentlessRage() {
	std::cout << " - Relentless Rage - " << std::endl << std::endl;
	std::cout << "Description: \n";
	std::cout << "Your rage can keep your fighting even with grievous wounds.\n";
	std::cout << "If your health reaches 0 whilst in a rage you may make a constitution saving throw and if successful, you drop to 1 health instead\n";
	std::cout << std::endl;
	std::cin.ignore();
	std::cin.get();
}

void Game::PersistentRage() {
	std::cout << " - Persistent Rage - " << std::endl << std::endl;
	std::cout << "Description: \n";
	std::cout << "Your rage is do fierce that it doesn't end early unles you choose it to.\n";
	std::cout << std::endl;
	std::cin.ignore();
	std::cin.get();
}

void Game::PrimalChampion() {
	std::cout << " - Primal Champion - " << std::endl << std::endl;
	std::cout << "Description: \n";
	std::cout << "You embody the power of the wilds. Your Strength and Constitution scores are increased by 4 to a maximum of 24.\n";
	std::cout << std::endl;
	std::cin.ignore();
	std::cin.get();
}

void Game::Consumables() {
	if (choice == "Health Potion") {
		HP = MAXHP;
	}
}
