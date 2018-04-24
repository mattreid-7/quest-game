#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <time.h>

using namespace std;

void creation();


string choice;
// Character Stats
int MAXHP = 0, HP = 0, STR = 0, DEX = 0, CON = 0, INT = 0, WIS = 0, CHA = 0, LVL = 0;
// More Character Stats
int GOLD = 0, ARMOURCLASS = 0;
// Skills
int ATH = 0, ACRO = 0, SOH = 0, STEL = 0, ARCA = 0, HIST = 0, INVEST = 0, NATU = 0, RELIG = 0, ANIMHAND = 0, INSI = 0, PERCP = 0, SURV = 0, DECP = 0, INTIMI = 0, PERFO = 0, PERSU = 0;
// Weapons
int Club = 0, Dagger = 0, Greatclub = 0, Handaxe = 0, Javelin = 0, LightHammer = 0, Mace = 0, Quarterstaff = 0, Sickle = 0, Spear = 0, LightCrossbow = 0, Dart = 0, Shortbow = 0, Sling = 0, Battleaxe = 0, Flail = 0, Glaive = 0, Greataxe = 0, Greatsword = 0, Halberd = 0, Lance = 0, Longsword = 0, Maul = 0, Morningstar = 0, Pike = 0, Rapier = 0, Scimitar = 0, Shortsword = 0, Trident = 0, WarPick = 0, Warhammer = 0, Whip = 0, Blowgun = 0, HandCrossbow = 0, HeavyCrossbow = 0, Longbow = 0, Net = 0;
// Instruments
int Bagpipes = 0, Drum = 0, Dulcimer = 0, Flute = 0, Lute = 0, Lyre = 0, Horn = 0, PanFlute = 0, Shawm = 0, Viol = 0;
// Armours
int Padded = 0, Leather = 0, StuddedLeather = 0, Hide = 0, ChainShirt = 0, ScaleMail = 0, Breastplate = 0, HalfPlate = 0, RingMail = 0, ChainMail = 0, Splint = 0, Plate = 0, Shield = 0;
// Magic Stuffs
int HolySymbol = 0, DruidicFocus = 0;

// Character Strings
string CLASS, NAME, RACE;
string a;


int main() {
// The title screen of the game
  	cout << "Welcome to Quest, a text-based Adventure Game! \n";
  	cout << "\n";
  	cout << "\n";
  	cout << "1) Start a new game \n";
  	cout << "2) Load a previous game \n";
  	cout << "\n";
  	cout << "What would you like to do?  ";
  	cin >> choice;
  	if (choice == "1") {
  	creation();
    goto point0;
  	}

point0:
    system("CLS");
    cout << "worked";
    system("pause < nul");
}


void creation() {
// character creation screen
		system("CLS");
		cout << "Welcome traveller, by what name shall I call you?  ";
		cin >> NAME;

race:
		system("CLS");
    cout << "Of what race do you come? \n";
    cout << "Dwarf, Elf, Halfling, Human, Dragonborn, Gnome, Half-Elf, Half-Orc, Tiefling?  ";
    cin >> RACE;
    if (RACE == "dwarf" || RACE == "Dwarf") {
      cout << endl;
      cout << "Which subrace are you from? Mountain or Hill?  ";
      cin >> RACE;
      if (RACE == "mountain" || RACE == "Mountain") {
        RACE = "Mountain Dwarf";
        goto clas;
      }
      if (RACE == "hill" || RACE == "Hill") {
        RACE = "Hill Dwarf";
        goto clas;
      }
      goto race;
    }
    if (RACE == "elf" || RACE == "Elf") {
      cout << endl;
      cout << "Which subrace are you from? High, Wood or Dark?  ";
      cin >> RACE;
      if (RACE == "high" || RACE == "High") {
        RACE = "High Elf";
        goto clas;
      }
      if (RACE == "wood" || RACE == "Wood") {
        RACE = "Wood Elf";
        goto clas;
      }
      if (RACE == "dark" || RACE == "Dark") {
        RACE = "Dark Elf";
        goto clas;
      }
      goto race;
    }
    if (RACE == "halfling" || RACE == "Halfling") {
      cout << endl;
      cout << "Which subrace are you from? Lightfoot or Stout?  ";
      cin >> RACE;
      if (RACE == "lightfoot" || RACE == "Lightfoot") {
        RACE = "Lightfoot Halfling";
        goto clas;
      }
      if (RACE == "stout" || RACE == "Stout") {
        RACE = "Stout Halfling";
        goto clas;
      }
      goto race;
    }
    if (RACE == "human" || RACE == "Human") {
      RACE = "Human";
      goto clas;
    }
    if (RACE == "dragonborn" || RACE == "Dragonborn") {
      RACE = "Dragonborn";
      goto clas;
    }
    if (RACE == "gnome" || RACE == "Gnome") {
      cout << endl;
      cout << "Which subrace are you from? Forest or Rock?  ";
      cin >> RACE;
      if (RACE == "forest" || RACE == "Forest") {
        RACE = "Forest Gnome";
        goto clas;
      }
      if (RACE == "rock" || RACE == "Rock") {
        RACE = "Rock Gnome";
        goto clas;
      }
      goto race;
    }
    if (RACE == "half-elf" || RACE == "Half-Elf") {
      RACE = "Half-Elf";
      goto clas;
    }
    if (RACE == "half-orc" || RACE == "Half-Orc") {
      RACE = "Half-Orc";
      goto clas;
    }
    if (RACE == "tiefling" || RACE == "Tiefling") {
      RACE = "Tiefling";
      goto clas;
    }
    goto race;

clas:
    system("CLS");
    cout << "What class are you, " << NAME << "? \n";
    cout << "Barbarian, Bard, Cleric, Druid, Fighter, Monk, Paladin, Ranger, Rogue, Sorcerer, Warlock, Wizard?  ";
    cin >> CLASS;
barb0:
    if (CLASS == "barbarian" || CLASS == "Barbarian") {
    CLASS = "Barbarian";
    cout << endl;
    cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
    cout << endl;
    cout << "1) Battleaxe      10) Morningstar \n";
    cout << "2) Flail          11) Pike \n";
    cout << "3) Glaive         12) Rapier \n";
    cout << "4) Greataxe       13) Scimitar \n";
    cout << "5) Greatsword     14) Shortsword \n";
    cout << "6) Halberd        15) Trident \n";
    cout << "7) Lance          16) Warpick \n";
    cout << "8) Longsword      17) Warhammer\n";
    cout << "9) Maul           18) Whip \n";
    cout << endl;
    cout << "Which one of these weapons do you have?  ";
    cin >> choice;
    if (choice == "1") {
        Battleaxe = Battleaxe + 1;
        goto barb1;
      }
    if (choice == "2") {
        Flail = Flail + 1;
        goto barb1;
      }
    if (choice == "3") {
        Glaive = Glaive + 1;
        goto barb1;
      }
    if (choice == "4") {
        Greataxe = Greataxe + 1;
        goto barb1;
      }
    if (choice == "5") {
        Greatsword = Greatsword + 1;
        goto barb1;
      }
    if (choice == "6") {
        Halberd = Halberd + 1;
        goto barb1;
      }
    if (choice == "7") {
        Lance = Lance + 1;
        goto barb1;
      }
    if (choice == "8") {
        Longsword = Longsword + 1;
        goto barb1;
      }
    if (choice == "9") {
        Maul = Maul + 1;
        goto barb1;
      }
    if (choice == "10") {
        Morningstar = Morningstar + 1;
        goto barb1;
      }
    if (choice == "11") {
        Pike = Pike + 1;
        goto barb1;
      }
    if (choice == "12") {
        Rapier = Rapier + 1;
        goto barb1;
      }
    if (choice == "13") {
        Scimitar = Scimitar + 1;
        goto barb1;
      }
    if (choice == "14") {
        Shortsword = Shortsword + 1;
        goto barb1;
      }
    if (choice == "15") {
        Trident = Trident + 1;
        goto barb1;
      }
    if (choice == "16") {
        WarPick = WarPick + 1;
        goto barb1;
      }
    if (choice == "17") {
        Warhammer = Warhammer + 1;
        goto barb1;
      }
    if (choice == "18") {
        Whip = Whip + 1;
        goto barb1;
      }
    goto barb0;
barb1:
    system("CLS");
    cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
    cout << endl;
    cout << "1) Club          8) Quarterstaff \n";
    cout << "2) Dagger        9) Sickle \n";
    cout << "3) Greatclub     10) Spear \n";
    cout << "4) Handaxe x2    11) Light Crossbow \n";
    cout << "5) Javelin       12) Dart \n";
    cout << "6) Light Hammer  13) Shortbow \n";
    cout << "7) Mace          14) Sling \n";
    cout << endl;
    cout << "Which one of these weapons do you have?  ";
    cin >> choice;
    if (choice == "1") {
      Club = Club + 1;
      goto barb2;
    }
    if (choice == "2") {
      Dagger = Dagger + 1;
      goto barb2;
    }
    if (choice == "3") {
      Greatclub = Greatclub + 1;
      goto barb2;
    }
    if (choice == "4") {
      Handaxe = Handaxe + 2;
      goto barb2;
    }
    if (choice == "5") {
      Javelin = Javelin + 1;
      goto barb2;
    }
    if (choice == "6") {
      LightHammer = LightHammer + 1;
      goto barb2;
    }
    if (choice == "7") {
      Mace = Mace + 1;
      goto barb2;
    }
    if (choice == "8") {
      Quarterstaff = Quarterstaff + 1;
      goto barb2;
    }
    if (choice == "9") {
      Sickle = Sickle + 1;
      goto barb2;
    }
    if (choice == "10") {
      Spear = Spear + 1;
      goto barb2;
    }
    if (choice == "11") {
      LightCrossbow = LightCrossbow + 1;
      goto barb2;
    }
    if (choice == "12") {
      Dart = Dart + 1;
      goto barb2;
    }
    if (choice == "13") {
      Shortbow = Shortbow + 1;
      goto barb2;
    }
    if (choice == "14") {
      Sling = Sling + 1;
      goto barb2;
    }
    goto barb1;
barb2:
    Javelin = Javelin + 4;
    goto test;
    }
bard0:
    if (CLASS == "bard" || CLASS == "BARD") {
    CLASS = "Bard";
    cout << endl;
    cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
    cout << endl;
    cout << "1) Club           9) Quarterstaff \n";
    cout << "2) Dagger         10) Rapier \n";
    cout << "3) Greatclub      11) Sickle \n";
    cout << "4) Handaxe        12) Spear \n";
    cout << "5) Javelin        13) Light Crossbow \n";
    cout << "6) Light Hammer   14) Dart \n";
    cout << "7) Longsword      15) Shortbow \n";
    cout << "8) Mace           16) Sling \n";
    cout << endl;
    cout << "Which one of these weapons do you have?  ";
    cin >> choice;
    if (choice == "1") {
      Club = Club + 1;
      goto bard1;
    }
    if (choice == "2") {
      Dagger = Dagger + 1;
      goto bard1;
    }
    if (choice == "3") {
      Greatclub = Greatclub + 1;
      goto bard1;
    }
    if (choice == "4") {
      Handaxe = Handaxe + 1;
      goto bard1;
    }
    if (choice == "5") {
      Javelin = Javelin + 1;
      goto bard1;
    }
    if (choice == "6") {
      LightHammer = LightHammer + 1;
      goto bard1;
    }
    if (choice == "7") {
      Longsword = Longsword + 1;
      goto bard1;
    }
    if (choice == "8") {
      Mace = Mace + 1;
      goto bard1;
    }
    if (choice == "9") {
      Quarterstaff = Quarterstaff + 1;
      goto bard1;
    }
    if (choice == "10") {
      Rapier = Rapier + 1;
      goto bard1;
    }
    if (choice == "11") {
      Sickle = Sickle + 1;
      goto bard1;
    }
    if (choice == "12") {
      Spear = Spear + 1;
      goto bard1;
    }
    if (choice == "13") {
      LightCrossbow = LightCrossbow + 1;
      goto bard1;
    }
    if (choice == "14") {
      Dart = Dart + 1;
      goto bard1;
    }
    if (choice == "15") {
      Shortbow = Shortbow + 1;
      goto bard1;
    }
    if (choice == "16") {
      Sling = Sling + 1;
      goto bard1;
    }
    goto bard0;
bard1:
    system("CLS");
    cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
    cout << endl;
    cout << "1) Bagpipes    6) Lyre \n";
    cout << "2) Drum        7) Horn \n";
    cout << "3) Dulcimer    8) Pan Flute \n";
    cout << "4) Flute       9) Shawm \n";
    cout << "5) Lute        10) Viol \n";
    cout << endl;
    cout << "Which one of these instruments do you have?  ";
    cin >> choice;
    if (choice == "1") {
      Bagpipes = Bagpipes + 1;
      goto bard2;
    }
    if (choice == "2") {
      Drum = Drum + 1;
      goto bard2;
    }
    if (choice == "3") {
      Dulcimer = Dulcimer + 1;
      goto bard2;
    }
    if (choice == "4") {
      Flute = Flute + 1;
      goto bard2;
    }
    if (choice == "5") {
      Lute = Lute + 1;
      goto bard2;
    }
    if (choice == "6") {
      Lyre = Lyre + 1;
      goto bard2;
    }
    if (choice == "7") {
      Horn = Horn + 1;
      goto bard2;
    }
    if (choice == "8") {
      PanFlute = PanFlute + 1;
      goto bard2;
    }
    if (choice == "9") {
      Shawm = Shawm + 1;
      goto bard2;
    }
    if (choice == "10") {
      Viol = Viol + 1;
      goto bard2;
    }
    goto bard1;
bard2:
    Leather = 1;
    Dagger = Dagger + 1;
    goto test;
  }
cler0:
    if (CLASS == "cleric" || CLASS == "Cleric") {
    CLASS = "Cleric";
    cout << endl;
    cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
    cout << endl;
    cout << "1) Mace \n";
    cout << "2) Warhammer \n";
    cout << "Which one of these weapons do you have?  ";
    cin >> choice;
    if (choice == "1") {
      Mace = Mace + 1;
      goto cler1;
    }
    if (choice == "2") {
      Warhammer = Warhammer + 1;
      goto cler1;
    }
    goto cler0;
cler1:
    system("CLS");
    cout << endl;
    cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
    cout << endl;
    cout << "1) Scale Mail \n";
    cout << "2) Leather Armour \n";
    cout << "3) Chain Mail \n";
    cout << "Which one of these armours do you have?  ";
    cin >> choice;
    if (choice == "1") {
      ScaleMail = ScaleMail + 1;
      goto cler2;
    }
    if (choice == "2") {
      Leather = Leather + 1;
      goto cler2;
    }
    if (choice == "3") {
      ChainMail = ChainMail + 1;
      goto cler2;
    }
    goto cler1;
cler2:
    system("CLS");
    cout << endl;
    cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
    cout << endl;
    cout << "1) Club             8) Mace \n";
    cout << "2) Dagger           9) Quarterstaff \n";
    cout << "3) Greatclub        10) Sickle \n";
    cout << "4) Handaxe          11) Spear \n";
    cout << "5) Javelin          12) Dart \n";
    cout << "6) Light Crossbow   13) Shortbow \n";
    cout << "7) Light Hammer     14) Sling \n";
    cout << endl;
    cout << "Which one of these weapons do you have?  ";
    cin >> choice;
    if (choice == "1") {
      Club = Club + 1;
      goto cler3;
    }
    if (choice == "2") {
      Dagger = Dagger + 1;
      goto cler3;
    }
    if (choice == "3") {
      Greatclub = Greatclub + 1;
      goto cler3;
    }
    if (choice == "4") {
      Handaxe = Handaxe + 1;
      goto cler3;
    }
    if (choice == "5") {
      Javelin = Javelin + 1;
      goto cler3;
    }
    if (choice == "6") {
      LightCrossbow = LightCrossbow + 1;
      goto cler3;
    }
    if (choice == "7") {
      LightHammer = LightHammer + 1;
      goto cler3;
    }
    if (choice == "8") {
      Mace = Mace + 1;
      goto cler3;
    }
    if (choice == "9") {
      Quarterstaff = Quarterstaff + 1;
      goto cler3;
    }
    if (choice == "10") {
      Sickle = Sickle + 1;
      goto cler3;
    }
    if (choice == "11") {
      Spear = Spear + 1;
      goto cler3;
    }
    if (choice == "12") {
      Dart = Dart + 1;
      goto cler3;
    }
    if (choice == "13") {
      Shortbow = Shortbow + 1;
      goto cler3;
    }
    if (choice == "14") {
      Sling = Sling + 1;
      goto cler3;
    }
    goto cler2;
cler3:
    Shield = Shield + 1;
    HolySymbol = HolySymbol + 1;
    goto test;
}
dru0:
    if (CLASS == "druid" || CLASS == "Druid") {
    CLASS = "Druid";
    cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
    cout << endl;
    cout << "1) Club          9) Sickle \n";
    cout << "2) Dagger        10) Spear \n";
    cout << "3) Greatclub     11) Light Crossbow \n";
    cout << "4) Handaxe       12) Dart \n";
    cout << "5) Javelin       13) Shortbow \n";
    cout << "6) Light Hammer  14) Sling \n";
    cout << "7) Mace          15) Wooden Shield \n";
    cout << "8) Quarterstaff \n";
    cout << endl;
    cout << "Which one of these weapons do you have?  ";
    cin >> choice;
    if (choice == "1") {
      Club = Club + 1;
      goto dru1;
    }
    if (choice == "2") {
      Dagger = Dagger + 1;
      goto dru1;
    }
    if (choice == "3") {
      Greatclub = Greatclub + 1;
      goto dru1;
    }
    if (choice == "4") {
      Handaxe = Handaxe + 1;
      goto dru1;
    }
    if (choice == "5") {
      Javelin = Javelin + 1;
      goto dru1;
    }
    if (choice == "6") {
      LightHammer = LightHammer + 1;
      goto dru1;
    }
    if (choice == "7") {
      Mace = Mace + 1;
      goto dru1;
    }
    if (choice == "8") {
      Quarterstaff = Quarterstaff + 1;
      goto dru1;
    }
    if (choice == "9") {
      Sickle = Sickle + 1;
      goto dru1;
    }
    if (choice == "10") {
      Spear = Spear + 1;
      goto dru1;
    }
    if (choice == "11") {
      LightCrossbow = LightCrossbow + 1;
      goto dru1;
    }
    if (choice == "12") {
      Dart = Dart + 1;
      goto dru1;
    }
    if (choice == "13") {
      Shortbow = Shortbow + 1;
      goto dru1;
    }
    if (choice == "14") {
      Sling = Sling + 1;
      goto dru1;
    }
    if (choice == "15") {
      Shield = Shield + 1;
      goto dru1;
    }
    goto dru0;
dru1:
    system("CLS");
    cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
    cout << endl;
    cout << "1) Club          7) Mace  \n";
    cout << "2) Dagger        8) Quarterstaff \n";
    cout << "3) Greatclub     9) Sickle \n";
    cout << "4) Handaxe x2    10) Spear \n";
    cout << "5) Javelin       11) Scimitar \n";
    cout << "6) Light Hammer  \n";
    cout << endl;
    cout << "Which one of these weapons do you have?  ";
    cin >> choice;
    if (choice == "1") {
      Club = Club + 1;
      goto dru2;
    }
    if (choice == "2") {
      Dagger = Dagger + 1;
      goto dru2;
    }
    if (choice == "3") {
      Greatclub = Greatclub + 1;
      goto dru2;
    }
    if (choice == "4") {
      Handaxe = Handaxe + 1;
      goto dru2;
    }
    if (choice == "5") {
      Javelin = Javelin + 1;
      goto dru2;
    }
    if (choice == "6") {
      LightHammer = LightHammer + 1;
      goto dru2;
    }
    if (choice == "7") {
      Mace = Mace + 1;
      goto dru2;
    }
    if (choice == "8") {
      Quarterstaff = Quarterstaff + 1;
      goto dru2;
    }
    if (choice == "9") {
      Sickle = Sickle + 1;
      goto dru2;
    }
    if (choice == "10") {
      Spear = Spear + 1;
      goto dru2;
    }
    if (choice == "11") {
      Scimitar = Scimitar + 1;
      goto dru2;
    }
    goto dru1;
dru2:
    Leather = 1;
    DruidicFocus = 1;
    goto test;
    }
fig0:
    if (CLASS == "fighter" || CLASS == "Fighter") {
      CLASS == "Fighter";
      cout << endl;
      cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
      cout << endl;
      cout << "1)Chain Mail \n";
      cout << "2) Leather Armour & Longbow \n";
      cout << endl;
      cout << "Which one of these packs do you have?  ";
      cin >> choice;
      if (choice == "1") {
        ChainMail = ChainMail + 1;
        goto fig1;
      }
      if (choice == "2") {
        Leather = Leather + 1;
        Longbow = Longbow + 1;
        goto fig1;
      }
      goto fig0;
fig1:
    system("CLS");
    cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
    cout << endl;
    cout << "1) Battleaxe      10) Morningstar \n";
    cout << "2) Flail          11) Pike \n";
    cout << "3) Glaive         12) Rapier \n";
    cout << "4) Greataxe       13) Scimitar \n";
    cout << "5) Greatsword     14) Shortsword \n";
    cout << "6) Halberd        15) Trident \n";
    cout << "7) Lance          16) Warpick \n";
    cout << "8) Longsword      17) Warhammer\n";
    cout << "9) Maul           18) Whip \n";
    cout << "       19) Shield \n";
    cout << endl;
    cout << "Which one of these weapons do you have?  ";
    cin >> choice;
    if (choice == "1") {
        Battleaxe = Battleaxe + 1;
        goto fig2;
      }
    if (choice == "2") {
        Flail = Flail + 1;
        goto fig2;
      }
    if (choice == "3") {
        Glaive = Glaive + 1;
        goto fig2;
      }
    if (choice == "4") {
        Greataxe = Greataxe + 1;
        goto fig2;
      }
    if (choice == "5") {
        Greatsword = Greatsword + 1;
        goto fig2;
      }
    if (choice == "6") {
        Halberd = Halberd + 1;
        goto fig2;
      }
    if (choice == "7") {
        Lance = Lance + 1;
        goto fig2;
      }
    if (choice == "8") {
        Longsword = Longsword + 1;
        goto fig2;
      }
    if (choice == "9") {
        Maul = Maul + 1;
        goto fig2;
      }
    if (choice == "10") {
        Morningstar = Morningstar + 1;
        goto fig2;
      }
    if (choice == "11") {
        Pike = Pike + 1;
        goto fig2;
      }
    if (choice == "12") {
        Rapier = Rapier + 1;
        goto fig2;
      }
    if (choice == "13") {
        Scimitar = Scimitar + 1;
        goto fig2;
      }
    if (choice == "14") {
        Shortsword = Shortsword + 1;
        goto fig2;
      }
    if (choice == "15") {
        Trident = Trident + 1;
        goto fig2;
      }
    if (choice == "16") {
        WarPick = WarPick + 1;
        goto fig2;
      }
    if (choice == "17") {
        Warhammer = Warhammer + 1;
        goto fig2;
      }
    if (choice == "18") {
        Whip = Whip + 1;
        goto fig2;
      }
    if (choice == "19") {
          Shield = Shield + 1;
          goto fig2;
      }
    goto fig1;
fig2:
    system("CLS");
    cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
    cout << endl;
    cout << "1) Battleaxe      10) Morningstar \n";
    cout << "2) Flail          11) Pike \n";
    cout << "3) Glaive         12) Rapier \n";
    cout << "4) Greataxe       13) Scimitar \n";
    cout << "5) Greatsword     14) Shortsword \n";
    cout << "6) Halberd        15) Trident \n";
    cout << "7) Lance          16) Warpick \n";
    cout << "8) Longsword      17) Warhammer\n";
    cout << "9) Maul           18) Whip \n";
    cout << "       19) Shield \n";
    cout << endl;
    cout << "Which one of these weapons do you have?  ";
    cin >> choice;
    if (choice == "1") {
      Battleaxe = Battleaxe + 1;
      goto fig3;
    }
    if (choice == "2") {
      Flail = Flail + 1;
      goto fig3;
    }
    if (choice == "3") {
      Glaive = Glaive + 1;
      goto fig3;
    }
    if (choice == "4") {
      Greataxe = Greataxe + 1;
      goto fig3;
    }
    if (choice == "5") {
      Greatsword = Greatsword + 1;
      goto fig3;
    }
    if (choice == "6") {
      Halberd = Halberd + 1;
      goto fig3;
    }
    if (choice == "7") {
      Lance = Lance + 1;
      goto fig3;
    }
    if (choice == "8") {
      Longsword = Longsword + 1;
      goto fig3;
    }
    if (choice == "9") {
      Maul = Maul + 1;
      goto fig3;
    }
    if (choice == "10") {
      Morningstar = Morningstar + 1;
      goto fig3;
    }
    if (choice == "11") {
      Pike = Pike + 1;
      goto fig3;
    }
    if (choice == "12") {
      Rapier = Rapier + 1;
      goto fig3;
    }
    if (choice == "13") {
      Scimitar = Scimitar + 1;
      goto fig3;
    }
    if (choice == "14") {
      Shortsword = Shortsword + 1;
      goto fig3;
    }
    if (choice == "15") {
      Trident = Trident + 1;
      goto fig3;
    }
    if (choice == "16") {
      WarPick = WarPick + 1;
      goto fig3;
    }
    if (choice == "17") {
      Warhammer = Warhammer + 1;
      goto fig3;
    }
    if (choice == "18") {
      Whip = Whip + 1;
      goto fig3;
    }
    if (choice == "19") {
        Shield = Shield + 1;
        goto fig3;
      }
      goto fig2;
fig3:
    system("CLS");
    cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
    cout << endl;
    cout << "1) Light Crossbow \n";
    cout << "2) Handaxe x2 \n";
    cout << endl;
    cout << "Which one of these weapons do you have?  ";
    cin >> choice;
    if (choice == "1") {
      LightCrossbow = LightCrossbow + 1;
      goto test;
    }
    if (choice == "2") {
      Handaxe = Handaxe + 2;
      goto test;
    }
    goto fig3;
}
goto clas;


test:
    system("CLS");
    cout << "Character \n";
    cout << "Name:  " << NAME << endl;
    cout << "Race:  " << RACE << endl;
    cout << "Class: " << CLASS << endl;
    cout << endl;
    cout << "Simple Weapons \n";
    cout << "Club: " << Club << endl;
    cout << "Dagger: " << Dagger << endl;
    cout << "Greatclub: " << Greatclub << endl;
    cout << "Handaxe: " << Handaxe << endl;
    cout << "Javelin: " << Javelin << endl;
    cout << "LightHammer: " << LightHammer << endl;
    cout << "Mace: " << Mace << endl;
    cout << "Quarterstaff: " << Quarterstaff << endl;
    cout << "Sickle: " << Sickle << endl;
    cout << "Spear: " << Spear << endl;
    cout << "Light Crossbow: " << LightCrossbow << endl;
    cout << "Dart: " << Dart << endl;
    cout << "Shortbow: " << Shortbow << endl;
    cout << "Sling: " << Sling << endl;
    cout << endl;
    cout << "Martial Weapons \n";
    cout << "Battleaxe: " << Battleaxe << endl;
    cout << "Flail: " << Flail << endl;
    cout << "Glaive: " << Glaive << endl;
    cout << "Greataxe: " << Greataxe << endl;
    cout << "Greatsword: " << Greatsword << endl;
    cout << "Halberd: " << Halberd << endl;
    cout << "Lance: " << Lance << endl;
    cout << "Longsword: " << Longsword << endl;
    cout << "Maul: " << Maul << endl;
    cout << "Morningstar: " << Morningstar << endl;
    cout << "Pike: " << Pike << endl;
    cout << "Rapier: " << Rapier << endl;
    cout << "Scimitar: " << Scimitar << endl;
    cout << "Shortsword: " << Shortsword << endl;
    cout << "Trident: " << Trident << endl;
    cout << "War Pick: " << WarPick << endl;
    cout << "Warhammer: " << Warhammer << endl;
    cout << "Whip: " << Whip << endl;
    cout << "Blowgun: " << Blowgun << endl;
    cout << "Hand Crossbow: " << HandCrossbow << endl;
    cout << "Heavy Crossbow: " << HeavyCrossbow << endl;
    cout << "Longbow: " << Longbow << endl;
    cout << "Net: " << Net << endl;
    cout << endl;
    cout << "Armour \n";
    cout << "Padded: " << Padded << endl;
    cout << "Leather: " << Leather << endl;
    cout << "Studded Leather: " << StuddedLeather << endl;
    cout << "Hide: " << Hide << endl;
    cout << "Chain Shirt: " << ChainShirt << endl;
    cout << "Scale Mail: " << ScaleMail << endl;
    cout << "Breastplate: " << Breastplate << endl;
    cout << "Half Plate: " << HalfPlate << endl;
    cout << "Ring Mail: " << RingMail << endl;
    cout << "Chain Mail: " << ChainMail << endl;
    cout << "Splint: " << Splint << endl;
    cout << "Plate: " << Plate << endl;
    cout << "Shield: " << Shield << endl;
    cout << endl;
    cin >> a;
}
