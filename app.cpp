//#include "functions.h"
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <time.h>
#include <fstream>

using namespace std;

void charactersheet();
void creation();
void load();
void save();
void weapons();
void armours();



// Character Stats
int MAXHP = 0, HP = 0, STR = 0, DEX = 0, CON = 0, INT = 0, WIS = 0, CHA = 0, LVL = 1, AC = 0;
// Ability Mods
int STRmod = 0, DEXmod = 0, CONmod = 0, INTmod = 0, WISmod = 0, CHAmod = 0;
// More Character Stats
int GP = 0, SP = 0, BP = 0, ARV = 0, score = 0, chkpnt = 0;
// Skills
int ATH = 0, ACRO = 0, SOH = 0, STEL = 0, ARCA = 0, HIST = 0, INVEST = 0, NATU = 0, RELIG = 0, ANIMHAND = 0, INSI = 0, MEDI = 0, PERCP = 0, SURV = 0, DECP = 0, INTIMI = 0, PERFO = 0, PERSU = 0;
// Skills ADVs and DISs
int STELdis = 0;
// Weapons
int Club = 0, Dagger = 0, Greatclub = 0, Handaxe = 0, Javelin = 0, LightHammer = 0, Mace = 0, Quarterstaff = 0, Sickle = 0, Spear = 0, LightCrossbow = 0, Dart = 0, Shortbow = 0, Sling = 0, Battleaxe = 0, Flail = 0, Glaive = 0, Greataxe = 0, Greatsword = 0, Halberd = 0, Lance = 0, Longsword = 0, Maul = 0, Morningstar = 0, Pike = 0, Rapier = 0, Scimitar = 0, Shortsword = 0, Trident = 0, WarPick = 0, Warhammer = 0, Whip = 0, Blowgun = 0, HandCrossbow = 0, HeavyCrossbow = 0, Longbow = 0, Net = 0;
// Instruments
int Bagpipes = 0, Drum = 0, Dulcimer = 0, Flute = 0, Lute = 0, Lyre = 0, Horn = 0, PanFlute = 0, Shawm = 0, Viol = 0;
// Armours
int Padded = 0, Leather = 0, StuddedLeather = 0, Hide = 0, ChainShirt = 0, ScaleMail = 0, Breastplate = 0, HalfPlate = 0, RingMail = 0, ChainMail = 0, Splint = 0, Plate = 0, Shield = 0;
// Magic Stuffs
int HolySymbol = 0, DruidicFocus = 0, SpellBook = 0, ArcaneFocus = 0;

// Character Strings
string CLASS, NAME, RACE, equippedArmour = "None", equippedWeapon = "None";
string a;
string choice;


int main() {
// The title screen of the game
start:
    system("CLS");
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
    if (choice == "2") {
    load();
    if (chkpnt == 0) {
      goto point0;
    }
    } else {
      goto start;
    }
    point0:
        system("CLS");
        charactersheet();
        save();
}

void save() {
    ofstream saveFile ("savetest.txt");
    if (saveFile.is_open()) {
        saveFile << NAME << endl;
        saveFile << RACE << endl;
        saveFile << CLASS << endl;
        saveFile << LVL << endl;
        saveFile << AC << endl;
        saveFile << equippedArmour << endl;
        saveFile << equippedWeapon << endl;
        saveFile << HP << endl;
        saveFile << MAXHP << endl;
        saveFile << STR << endl;
        saveFile << DEX << endl;
        saveFile << CON << endl;
        saveFile << INT << endl;
        saveFile << WIS << endl;
        saveFile << CHA << endl;
        saveFile << STRmod << endl;
        saveFile << DEXmod << endl;
        saveFile << CONmod << endl;
        saveFile << INTmod << endl;
        saveFile << WISmod << endl;
        saveFile << CHAmod << endl;
        saveFile << ATH << endl;
        saveFile << ACRO << endl;
        saveFile << SOH << endl;
        saveFile << STEL << endl;
        saveFile << ARCA << endl;
        saveFile << HIST << endl;
        saveFile << INVEST << endl;
        saveFile << NATU << endl;
        saveFile << RELIG << endl;
        saveFile << ANIMHAND << endl;
        saveFile << INSI << endl;
        saveFile << MEDI << endl;
        saveFile << PERCP << endl;
        saveFile << SURV << endl;
        saveFile << DECP << endl;
        saveFile << INTIMI << endl;
        saveFile << PERFO << endl;
        saveFile << PERSU << endl;
        saveFile << Club << endl;
        saveFile << Dagger << endl;
        saveFile << Greatclub << endl;
        saveFile << Handaxe << endl;
        saveFile << Javelin << endl;
        saveFile << LightHammer << endl;
        saveFile << Mace << endl;
        saveFile << Quarterstaff << endl;
        saveFile << Sickle << endl;
        saveFile << Spear << endl;
        saveFile << LightCrossbow << endl;
        saveFile << Dart << endl;
        saveFile << Shortbow << endl;
        saveFile << Sling << endl;
        saveFile << Battleaxe << endl;
        saveFile << Flail << endl;
        saveFile << Glaive << endl;
        saveFile << Greataxe << endl;
        saveFile << Greatsword << endl;
        saveFile << Halberd << endl;
        saveFile << Lance << endl;
        saveFile << Longsword << endl;
        saveFile << Maul << endl;
        saveFile << Morningstar << endl;
        saveFile << Pike << endl;
        saveFile << Rapier << endl;
        saveFile << Scimitar << endl;
        saveFile << Shortsword << endl;
        saveFile << Trident << endl;
        saveFile << WarPick << endl;
        saveFile << Warhammer << endl;
        saveFile << Whip << endl;
        saveFile << Blowgun << endl;
        saveFile << HandCrossbow << endl;
        saveFile << HeavyCrossbow << endl;
        saveFile << Longbow << endl;
        saveFile << Net << endl;
        saveFile << Padded << endl;
        saveFile << Leather << endl;
        saveFile << StuddedLeather << endl;
        saveFile << Hide << endl;
        saveFile << ChainShirt << endl;
        saveFile << ScaleMail << endl;
        saveFile << Breastplate << endl;
        saveFile << HalfPlate << endl;
        saveFile << RingMail << endl;
        saveFile << ChainMail << endl;
        saveFile << Splint << endl;
        saveFile << Plate << endl;
        saveFile << Shield << endl;
        saveFile << Bagpipes << endl;
        saveFile << Drum << endl;
        saveFile << Dulcimer << endl;
        saveFile << Flute << endl;
        saveFile << Lute << endl;
        saveFile << Lyre << endl;
        saveFile << Horn << endl;
        saveFile << PanFlute << endl;
        saveFile << Shawm << endl;
        saveFile << Viol << endl;
        saveFile << HolySymbol << endl;
        saveFile << DruidicFocus << endl;
        saveFile << SpellBook << endl;
        saveFile << ArcaneFocus << endl;
        saveFile.close();
    } else {
        cout << "Unable to save file";
    }
}

void load() {
    ifstream saveFile ("savetest.txt");
    if (saveFile.is_open()) {
        saveFile >> NAME;
        saveFile >> RACE;
        saveFile >> CLASS;
        saveFile >> LVL;
        saveFile >> AC;
        saveFile >> equippedArmour;
        saveFile >> equippedWeapon;
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

        saveFile.close();
    } else {
        cout << "unable to open file";
    }
}

/*
void accuracy(equippedweapon) {
weapons();
}

void weapons(equippedweapon) {
}
*/

void armours() {
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

void creation() {
// character creation screen

    int token = 1;
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
        RACE = "Mountain-Dwarf";
        goto clas;
      }
      if (RACE == "hill" || RACE == "Hill") {
        RACE = "Hill-Dwarf";
        goto clas;
      }
      goto race;
    }
    if (RACE == "elf" || RACE == "Elf") {
      cout << endl;
      cout << "Which subrace are you from? High, Wood or Dark?  ";
      cin >> RACE;
      if (RACE == "high" || RACE == "High") {
        RACE = "High-Elf";
        goto clas;
      }
      if (RACE == "wood" || RACE == "Wood") {
        RACE = "Wood-Elf";
        goto clas;
      }
      if (RACE == "dark" || RACE == "Dark") {
        RACE = "Dark-Elf";
        goto clas;
      }
      goto race;
    }
    if (RACE == "halfling" || RACE == "Halfling") {
      cout << endl;
      cout << "Which subrace are you from? Lightfoot or Stout?  ";
      cin >> RACE;
      if (RACE == "lightfoot" || RACE == "Lightfoot") {
        RACE = "Lightfoot-Halfling";
        goto clas;
      }
      if (RACE == "stout" || RACE == "Stout") {
        RACE = "Stout-Halfling";
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
        RACE = "Forest-Gnome";
        goto clas;
      }
      if (RACE == "rock" || RACE == "Rock") {
        RACE = "Rock-Gnome";
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
    token = 1;
    }
bard0:
    if (CLASS == "bard" || CLASS == "Bard") {
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
    token = 1;
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
    token = 1;
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
    cout << "4) Handaxe       10) Spear \n";
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
    token = 1;
    }
fig0:
    if (CLASS == "fighter" || CLASS == "Fighter") {
      CLASS == "Fighter";
      cout << endl;
      cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
      cout << endl;
      cout << "1) Chain Mail \n";
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
    do {
      system("CLS");
      cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
      cout << endl;
      cout << "1) Light Crossbow \n";
      cout << "2) Handaxe x2 \n";
      cout << endl;
      cout << "Which one of these weapons do you have?  ";
      cin >> choice;
    } while (choice < "1" || choice > "2");
      if (choice == "1") {
        LightCrossbow = LightCrossbow + 1;
        token = 1;
      }
      if (choice == "2") {
        Handaxe = Handaxe + 2;
        token = 1;
      }
    }
mon0:
    if (CLASS == "monk" || CLASS == "Monk") {
      CLASS = "Monk";
      cout << endl;
      cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
      cout << endl;
      cout << "1) Club          9) Sickle \n";
      cout << "2) Dagger        10) Spear \n";
      cout << "3) Greatclub     11) Light Crossbow \n";
      cout << "4) Handaxe       12) Dart \n";
      cout << "5) Javelin       13) Shortbow \n";
      cout << "6) Light Hammer  14) Sling \n";
      cout << "7) Mace          15) Shortsword \n";
      cout << "8) Quarterstaff \n";
      cout << endl;
      cout << "Which one of these weapons do you have?  ";
      cin >> choice;
      if (choice == "1") {
        Club = Club + 1;
        goto mon1;
      }
      if (choice == "2") {
        Dagger = Dagger + 1;
        goto mon1;
      }
      if (choice == "3") {
        Greatclub = Greatclub + 1;
        goto mon1;
      }
      if (choice == "4") {
        Handaxe = Handaxe + 1;
        goto mon1;
      }
      if (choice == "5") {
        Javelin = Javelin + 1;
        goto mon1;
      }
      if (choice == "6") {
        LightHammer = LightHammer + 1;
        goto mon1;
      }
      if (choice == "7") {
        Mace = Mace + 1;
        goto mon1;
      }
      if (choice == "8") {
        Quarterstaff = Quarterstaff + 1;
        goto mon1;
      }
      if (choice == "9") {
        Sickle = Sickle + 1;
        goto mon1;
      }
      if (choice == "10") {
        Spear = Spear + 1;
        goto mon1;
      }
      if (choice == "11") {
        LightCrossbow = LightCrossbow + 1;
        goto mon1;
      }
      if (choice == "12") {
        Dart = Dart + 1;
        goto mon1;
      }
      if (choice == "13") {
        Shortbow = Shortbow + 1;
        goto mon1;
      }
      if (choice == "14") {
        Sling = Sling + 1;
        goto mon1;
      }
      if (choice == "15") {
        Shortsword = Shortsword + 1;
        goto mon1;
      }
      goto mon0;
mon1:
    Dart = Dart + 10;
    token = 1;
    }
pal0:
    if (CLASS == "paladin" || CLASS == "Paladin") {
      CLASS = "Paladin";
      cout << endl;
      cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
      cout << endl;
      cout << "1) Battleaxe      11) Pike \n";
      cout << "2) Flail          12) Rapier \n";
      cout << "3) Glaive         13) Scimitar \n";
      cout << "4) Greataxe       14) Shortsword \n";
      cout << "5) Greatsword     15) Trident \n";
      cout << "6) Halberd        16) Warpick \n";
      cout << "7) Lance          17) Warhammer \n";
      cout << "8) Longsword      18) Whip \n";
      cout << "9) Maul           19) Shield \n";
      cout << "10) Morningstar\n";
      cout << endl;
      cout << "Which one of these weapons do you have?  ";
      cin >> choice;
      if (choice == "1") {
          Battleaxe = Battleaxe + 1;
          goto pal1;
        }
      if (choice == "2") {
          Flail = Flail + 1;
          goto pal1;
        }
      if (choice == "3") {
          Glaive = Glaive + 1;
          goto pal1;
        }
      if (choice == "4") {
          Greataxe = Greataxe + 1;
          goto pal1;
        }
      if (choice == "5") {
          Greatsword = Greatsword + 1;
          goto pal1;
        }
      if (choice == "6") {
          Halberd = Halberd + 1;
          goto pal1;
        }
      if (choice == "7") {
          Lance = Lance + 1;
          goto pal1;
        }
      if (choice == "8") {
          Longsword = Longsword + 1;
          goto pal1;
        }
      if (choice == "9") {
          Maul = Maul + 1;
          goto pal1;
        }
      if (choice == "10") {
          Morningstar = Morningstar + 1;
          goto pal1;
        }
      if (choice == "11") {
          Pike = Pike + 1;
          goto pal1;
        }
      if (choice == "12") {
          Rapier = Rapier + 1;
          goto pal1;
        }
      if (choice == "13") {
          Scimitar = Scimitar + 1;
          goto pal1;
        }
      if (choice == "14") {
          Shortsword = Shortsword + 1;
          goto pal1;
        }
      if (choice == "15") {
          Trident = Trident + 1;
          goto pal1;
        }
      if (choice == "16") {
          WarPick = WarPick + 1;
          goto pal1;
        }
      if (choice == "17") {
          Warhammer = Warhammer + 1;
          goto pal1;
        }
      if (choice == "18") {
          Whip = Whip + 1;
          goto pal1;
        }
      if (choice == "19") {
        Shield = Shield + 1;
        goto pal1;
      }
      goto pal0;
pal1:
    system("CLS");
    cout << endl;
    cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
    cout << endl;
    cout << "1) Battleaxe      11) Pike \n";
    cout << "2) Flail          12) Rapier \n";
    cout << "3) Glaive         13) Scimitar \n";
    cout << "4) Greataxe       14) Shortsword \n";
    cout << "5) Greatsword     15) Trident \n";
    cout << "6) Halberd        16) Warpick \n";
    cout << "7) Lance          17) Warhammer \n";
    cout << "8) Longsword      18) Whip \n";
    cout << "9) Maul           19) Shield \n";
    cout << "10) Morningstar\n";
    cout << endl;
    cout << "Which one of these weapons do you have?  ";
    cin >> choice;
    if (choice == "1") {
        Battleaxe = Battleaxe + 1;
        goto pal2;
      }
    if (choice == "2") {
        Flail = Flail + 1;
        goto pal2;
      }
    if (choice == "3") {
        Glaive = Glaive + 1;
        goto pal2;
      }
    if (choice == "4") {
        Greataxe = Greataxe + 1;
        goto pal2;
      }
    if (choice == "5") {
        Greatsword = Greatsword + 1;
        goto pal2;
      }
    if (choice == "6") {
        Halberd = Halberd + 1;
        goto pal2;
      }
    if (choice == "7") {
        Lance = Lance + 1;
        goto pal2;
      }
    if (choice == "8") {
        Longsword = Longsword + 1;
        goto pal2;
      }
    if (choice == "9") {
        Maul = Maul + 1;
        goto pal2;
      }
    if (choice == "10") {
        Morningstar = Morningstar + 1;
        goto pal2;
      }
    if (choice == "11") {
        Pike = Pike + 1;
        goto pal2;
      }
    if (choice == "12") {
        Rapier = Rapier + 1;
        goto pal2;
      }
    if (choice == "13") {
        Scimitar = Scimitar + 1;
        goto pal2;
      }
    if (choice == "14") {
        Shortsword = Shortsword + 1;
        goto pal2;
      }
    if (choice == "15") {
        Trident = Trident + 1;
        goto pal2;
      }
    if (choice == "16") {
        WarPick = WarPick + 1;
        goto pal2;
      }
    if (choice == "17") {
        Warhammer = Warhammer + 1;
        goto pal2;
      }
    if (choice == "18") {
        Whip = Whip + 1;
        goto pal2;
      }
    if (choice == "19") {
      Shield = Shield + 1;
      goto pal2;
    }
    goto pal1;
pal2:
    system("CLS");
    cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
    cout << endl;
    cout << "1) Club          6) Light Hammer  \n";
    cout << "2) Dagger        7) Mace \n";
    cout << "3) Greatclub     8) Quarterstaff \n";
    cout << "4) Handaxe       9) Sickle \n";
    cout << "5) Javelin x5    10) Spear \n";
    cout << endl;
    cout << "Which one of these weapons do you have?  ";
    cin >> choice;
    if (choice == "1") {
      Club = Club + 1;
      goto pal3;
    }
    if (choice == "2") {
      Dagger = Dagger + 1;
      goto pal3;
    }
    if (choice == "3") {
      Greatclub = Greatclub + 1;
      goto pal3;
    }
    if (choice == "4") {
      Handaxe = Handaxe + 1;
      goto pal3;
    }
    if (choice == "5") {
      Javelin = Javelin + 5;
      goto pal3;
    }
    if (choice == "6") {
      LightHammer = LightHammer + 1;
      goto pal3;
    }
    if (choice == "7") {
      Mace = Mace + 1;
      goto pal3;
    }
    if (choice == "8") {
      Quarterstaff = Quarterstaff + 1;
      goto pal3;
    }
    if (choice == "9") {
      Sickle = Sickle + 1;
      goto pal3;
    }
    if (choice == "10") {
      Spear = Spear + 1;
      goto pal3;
    }
    goto pal2;
pal3:
    ChainMail = ChainMail + 1;
    HolySymbol = HolySymbol + 1;
    token = 1;
    }
ran0:
    if (CLASS == "ranger" || CLASS == "Ranger") {
      CLASS = "Ranger";
      cout << endl;
      cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
      cout << endl;
      cout << "1) Scale Mail \n";
      cout << "2) Leather Armour \n";
      cout << endl;
      cout << "Which one of these packs do you have?  ";
      cin >> choice;
      if (choice == "1") {
        ScaleMail = ScaleMail + 1;
        goto ran1;
      }
      if (choice == "2") {
        Leather = Leather + 1;
        goto ran1;
      }
      goto ran0;
ran1:
    system("CLS");
    cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
    cout << endl;
    cout << "1) Club          7) Mace  \n";
    cout << "2) Dagger        8) Quarterstaff \n";
    cout << "3) Greatclub     9) Sickle \n";
    cout << "4) Handaxe       10) Spear \n";
    cout << "5) Javelin       11) Shortsword x2 \n";
    cout << "6) Light Hammer  \n";
    cout << endl;
    cout << "Which one of these weapons do you have?  ";
    cin >> choice;
    if (choice == "1") {
      Club = Club + 1;
      goto ran2;
    }
    if (choice == "2") {
      Dagger = Dagger + 1;
      goto ran2;
    }
    if (choice == "3") {
      Greatclub = Greatclub + 1;
      goto ran2;
    }
    if (choice == "4") {
      Handaxe = Handaxe + 1;
      goto ran2;
    }
    if (choice == "5") {
      Javelin = Javelin + 1;
      goto ran2;
    }
    if (choice == "6") {
      LightHammer = LightHammer + 1;
      goto ran2;
    }
    if (choice == "7") {
      Mace = Mace + 1;
      goto ran2;
    }
    if (choice == "8") {
      Quarterstaff = Quarterstaff + 1;
      goto ran2;
    }
    if (choice == "9") {
      Sickle = Sickle + 1;
      goto ran2;
    }
    if (choice == "10") {
      Spear = Spear + 1;
      goto ran2;
    }
    if (choice == "11") {
      Shortsword = Shortsword + 2;
      goto ran2;
    }
    goto ran1;
ran2:
    system("CLS");
    cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
    cout << endl;
    cout << "1) Club          6) Light Hammer  \n";
    cout << "2) Dagger        7) Mace \n";
    cout << "3) Greatclub     8) Quarterstaff \n";
    cout << "4) Handaxe       9) Sickle \n";
    cout << "5) Javelin       10) Spear \n";
    cout << endl;
    cout << "Which one of these weapons do you have?  ";
    cin >> choice;
    if (choice == "1") {
      Club = Club + 1;
      goto ran3;
    }
    if (choice == "2") {
      Dagger = Dagger + 1;
      goto ran3;
    }
    if (choice == "3") {
      Greatclub = Greatclub + 1;
      goto ran3;
    }
    if (choice == "4") {
      Handaxe = Handaxe + 1;
      goto ran3;
    }
    if (choice == "5") {
      Javelin = Javelin + 1;
      goto ran3;
    }
    if (choice == "6") {
      LightHammer = LightHammer + 1;
      goto ran3;
    }
    if (choice == "7") {
      Mace = Mace + 1;
      goto ran3;
    }
    if (choice == "8") {
      Quarterstaff = Quarterstaff + 1;
      goto ran3;
    }
    if (choice == "9") {
      Sickle = Sickle + 1;
      goto ran3;
    }
    if (choice == "10") {
      Spear = Spear + 1;
      goto ran3;
    }
    goto pal2;
ran3:
    Longbow = Longbow + 1;
    token = 1;
    }
rog0:
    if (CLASS == "rogue" || CLASS == "Rogue") {
      CLASS = "Rogue";
      cout << endl;
      cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
      cout << endl;
      cout << "1) Rapier \n";
      cout << "2) Shortsword \n";
      cout << endl;
      cout << "Which one of these weapons do you have?  ";
      cin >> choice;
      if (choice == "1") {
        Rapier = Rapier + 1;
        goto rog1;
      }
      if (choice == "2") {
        Shortsword = Shortsword + 1;
        goto rog1;
      }
      goto rog0;
rog1:
    system("CLS");
    cout << endl;
    cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
    cout << endl;
    cout << "1) Shortbow \n";
    cout << "2) Shortsword \n";
    cout << endl;
    cout << "Which one of these weapons do you have?  ";
    cin >> choice;
    if (choice == "1") {
      Shortbow = Shortbow + 1;
      goto rog2;
    }
    if (choice == "2") {
      Shortsword = Shortsword + 1;
      goto rog2;
    }
    goto rog1;
rog2:
    Leather = Leather + 1;
    Dagger = Dagger + 2;
    token = 1;
    }
sor0:
    if (CLASS == "sorcerer" || CLASS == "Sorcerer") {
      CLASS = "Sorcerer";
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
        goto sor1;
      }
      if (choice == "2") {
        Dagger = Dagger + 1;
        goto sor1;
      }
      if (choice == "3") {
        Greatclub = Greatclub + 1;
        goto sor1;
      }
      if (choice == "4") {
        Handaxe = Handaxe + 1;
        goto sor1;
      }
      if (choice == "5") {
        Javelin = Javelin + 1;
        goto sor1;
      }
      if (choice == "6") {
        LightCrossbow = LightCrossbow + 1;
        goto sor1;
      }
      if (choice == "7") {
        LightHammer = LightHammer + 1;
        goto sor1;
      }
      if (choice == "8") {
        Mace = Mace + 1;
        goto sor1;
      }
      if (choice == "9") {
        Quarterstaff = Quarterstaff + 1;
        goto sor1;
      }
      if (choice == "10") {
        Sickle = Sickle + 1;
        goto sor1;
      }
      if (choice == "11") {
        Spear = Spear + 1;
        goto sor1;
      }
      if (choice == "12") {
        Dart = Dart + 1;
        goto sor1;
      }
      if (choice == "13") {
        Shortbow = Shortbow + 1;
        goto sor1;
      }
      if (choice == "14") {
        Sling = Sling + 1;
        goto sor1;
      }
      goto sor1;
sor1:
    ArcaneFocus = ArcaneFocus + 1;
    Dagger = Dagger + 2;
    token = 1;
    }
war0:
    if (CLASS == "warlock" || CLASS == "Warlock") {
      CLASS = "Warlock";
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
        goto war1;
      }
      if (choice == "2") {
        Dagger = Dagger + 1;
        goto war1;
      }
      if (choice == "3") {
        Greatclub = Greatclub + 1;
        goto war1;
      }
      if (choice == "4") {
        Handaxe = Handaxe + 1;
        goto war1;
      }
      if (choice == "5") {
        Javelin = Javelin + 1;
        goto war1;
      }
      if (choice == "6") {
        LightCrossbow = LightCrossbow + 1;
        goto war1;
      }
      if (choice == "7") {
        LightHammer = LightHammer + 1;
        goto war1;
      }
      if (choice == "8") {
        Mace = Mace + 1;
        goto war1;
      }
      if (choice == "9") {
        Quarterstaff = Quarterstaff + 1;
        goto war1;
      }
      if (choice == "10") {
        Sickle = Sickle + 1;
        goto war1;
      }
      if (choice == "11") {
        Spear = Spear + 1;
        goto war1;
      }
      if (choice == "12") {
        Dart = Dart + 1;
        goto war1;
      }
      if (choice == "13") {
        Shortbow = Shortbow + 1;
        goto war1;
      }
      if (choice == "14") {
        Sling = Sling + 1;
        goto war1;
      }
      goto war0;
war1:
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
      goto war2;
    }
    if (choice == "2") {
      Dagger = Dagger + 1;
      goto war2;
    }
    if (choice == "3") {
      Greatclub = Greatclub + 1;
      goto war2;
    }
    if (choice == "4") {
      Handaxe = Handaxe + 1;
      goto war2;
    }
    if (choice == "5") {
      Javelin = Javelin + 1;
      goto war2;
    }
    if (choice == "6") {
      LightCrossbow = LightCrossbow + 1;
      goto war2;
    }
    if (choice == "7") {
      LightHammer = LightHammer + 1;
      goto war2;
    }
    if (choice == "8") {
      Mace = Mace + 1;
      goto war2;
    }
    if (choice == "9") {
      Quarterstaff = Quarterstaff + 1;
      goto war2;
    }
    if (choice == "10") {
      Sickle = Sickle + 1;
      goto war2;
    }
    if (choice == "11") {
      Spear = Spear + 1;
      goto war2;
    }
    if (choice == "12") {
      Dart = Dart + 1;
      goto war2;
    }
    if (choice == "13") {
      Shortbow = Shortbow + 1;
      goto war2;
    }
    if (choice == "14") {
      Sling = Sling + 1;
      goto war2;
    }
    goto war1;
war2:
    Leather = Leather + 1;
    Dagger = Dagger + 2;
    ArcaneFocus = ArcaneFocus + 1;
    token = 1;
    }
wiz0:
    if (CLASS == "wizard" || CLASS == "Wizard") {
      CLASS = "Wizard";
      cout << endl;
      cout << "In addition to the equipment granted in your backpack you have a choice for other starting items. \n";
      cout << endl;
      cout << "1) Dagger \n";
      cout << "2) Quarterstaff \n";
      cout << endl;
      cout << "Which one of these weapons do you have?  ";
      cin >> choice;
      if (choice == "1") {
        Dagger = Dagger + 1;
        goto wiz1;
      }
      if (choice == "2") {
        Quarterstaff = Quarterstaff + 1;
        goto wiz1;
      }
      goto wiz0;
wiz1:
    ArcaneFocus = ArcaneFocus + 1;
    SpellBook = SpellBook + 1;
    token = 1;
    }
    if (token == 0) {
      goto clas;
    }

Stat1:
    do {
      score = 15;
      system("CLS");
      if (CLASS == "Barbarian") {
        cout << "As a Barbarian you'll want your highest \n";
        cout << "ability scores to be Strength and Constitution. \n";
        cout << endl;
      }
      if (CLASS == "Bard") {
        cout << "As a Bard you'll want your highest ability \n";
        cout << "scores to be Charisma and Dexterity. \n";
        cout << endl;
      }
      if (CLASS == "Cleric") {
        cout << "As a Cleric you'll want your highest ability \n";
        cout << "scores to be Wisdom and Strength/ Constitution. \n";
        cout << endl;
      }
      if (CLASS == "Druid") {
        cout << "As a Druid you'll want your highest ability \n";
        cout << "scores to be Wisdom and Constitution. \n";
        cout << endl;
      }
      if (CLASS == "Fighter") {
        cout << "As a Fighter you'll want your highest ability \n";
        cout << "scores to be Strenght/ Dexterity and Constitution/ Intelligence. \n";
        cout << endl;
      }
      if (CLASS == "Monk") {
        cout << "As a Monk you'll want your highest ability \n";
        cout << "scores to be Dexterity and Wisdom. \n";
        cout << endl;
      }
      if (CLASS == "Paladin") {
        cout << "As a Paladin you'll want your highest ability \n";
        cout << "scores to be Strength and Charisma. \n";
        cout << endl;
      }
      if (CLASS == "Ranger") {
        cout << "As a Ranger you'll want your highest ability \n";
        cout << "scores to be Dexterity and Wisdom/ Strength. \n";
        cout << endl;
      }
      if (CLASS == "Rogue") {
        cout << "As a Rogue you'll want your highest ability \n";
        cout << "scores to be Dexterity and Intelligence/ Charisma. \n";
        cout << endl;
      }
      if (CLASS == "Sorcerer") {
        cout << "As a Sorcerer you'll want your highest ability \n";
        cout << "scores to be Charisma/ Constitution. \n";
        cout << endl;
      }
      if (CLASS == "Warlock") {
        cout << "As a Warlock you'll want your highest ability \n";
        cout << "scores to be Charisma/ Constitution. \n";
        cout << endl;
      }
      if (CLASS == "Wizard") {
        cout << "As a Wizard you'll want your highest ability \n";
        cout << "scores to be Intelligence and Constitution/ Dexterity/ Charisma. \n";
        cout << endl;
      }
  	    cout << "What will your highest stat be?  \n";
  	    cout << "1) Strength \n";
  	    cout << "2) Dexterity \n";
  	    cout << "3) Constitution \n";
  	    cout << "4) Intelligence \n";
  	    cout << "5) Wisdom \n";
  	    cout << "6) Charisma \n";
  	    cout << "Choice 1~6:  ";
  	    cin >> choice;
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
    do {
      score = 15;
      system("CLS");
      if (CLASS == "Barbarian") {
        cout << "As a Barbarian you'll want your highest \n";
        cout << "ability scores to be Strength and Constitution. \n";
        cout << endl;
      }
      if (CLASS == "Bard") {
        cout << "As a Bard you'll want your highest ability \n";
        cout << "scores to be Charisma and Dexterity. \n";
        cout << endl;
      }
      if (CLASS == "Cleric") {
        cout << "As a Cleric you'll want your highest ability \n";
        cout << "scores to be Wisdom and Strength/ Constitution. \n";
        cout << endl;
      }
      if (CLASS == "Druid") {
        cout << "As a Druid you'll want your highest ability \n";
        cout << "scores to be Wisdom and Constitution. \n";
        cout << endl;
      }
      if (CLASS == "Fighter") {
        cout << "As a Fighter you'll want your highest ability \n";
        cout << "scores to be Strenght/ Dexterity and Constitution/ Intelligence. \n";
        cout << endl;
      }
      if (CLASS == "Monk") {
        cout << "As a Monk you'll want your highest ability \n";
        cout << "scores to be Dexterity and Wisdom. \n";
        cout << endl;
      }
      if (CLASS == "Paladin") {
        cout << "As a Paladin you'll want your highest ability \n";
        cout << "scores to be Strength and Charisma. \n";
        cout << endl;
      }
      if (CLASS == "Ranger") {
        cout << "As a Ranger you'll want your highest ability \n";
        cout << "scores to be Dexterity and Wisdom/ Strength. \n";
        cout << endl;
      }
      if (CLASS == "Rogue") {
        cout << "As a Rogue you'll want your highest ability \n";
        cout << "scores to be Dexterity and Intelligence/ Charisma. \n";
        cout << endl;
      }
      if (CLASS == "Sorcerer") {
        cout << "As a Sorcerer you'll want your highest ability \n";
        cout << "scores to be Charisma/ Constitution. \n";
        cout << endl;
      }
      if (CLASS == "Warlock") {
        cout << "As a Warlock you'll want your highest ability \n";
        cout << "scores to be Charisma/ Constitution. \n";
        cout << endl;
      }
      if (CLASS == "Wizard") {
        cout << "As a Wizard you'll want your highest ability \n";
        cout << "scores to be Intelligence and Constitution/ Dexterity/ Charisma. \n";
        cout << endl;
      }
  	    cout << "What will your second highest stat be?  \n";
  	    cout << "1) Strength \n";
  	    cout << "2) Dexterity \n";
  	    cout << "3) Constitution \n";
  	    cout << "4) Intelligence \n";
  	    cout << "5) Wisdom \n";
  	    cout << "6) Charisma \n";
  	    cout << "Choice 1~6:  ";
  	    cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
  	if (choice == "1") {
         if (STR >= 7) {
           cout << "You have already picked that stat before, please pick another to level";
  			   cin >> a;
           goto Stat2;
  		   }
         STR = score;
  	    }
  	if (choice == "2") {
       if (DEX >= 7) {
  			  cout << "You have already picked that stat before, please pick another to level";
  			  cin >> a;
  			  goto Stat2;
  		  }
  		  DEX = score;
  	   }
  	if (choice == "3") {
  		if (CON >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat2;
  		}
  		CON = score;
  	}
  	if (choice == "4") {
  		if (INT >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat2;
  		}
  		INT = score;
  	}
  	if (choice == "5") {
  		if (WIS >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat2;
  		}
  		WIS = score;
  	}
  	if (choice == "6") {
  		if (CHA >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat2;
  		}
  		CHA = score;
  	}
Stat3:
    score = 13;
    do {
		system("CLS");
    if (CLASS == "Barbarian") {
      cout << "As a Barbarian you'll want your highest \n";
      cout << "ability scores to be Strength and Constitution. \n";
      cout << endl;
    }
    if (CLASS == "Bard") {
      cout << "As a Bard you'll want your highest ability \n";
      cout << "scores to be Charisma and Dexterity. \n";
      cout << endl;
    }
    if (CLASS == "Cleric") {
      cout << "As a Cleric you'll want your highest ability \n";
      cout << "scores to be Wisdom and Strength/ Constitution. \n";
      cout << endl;
    }
    if (CLASS == "Druid") {
      cout << "As a Druid you'll want your highest ability \n";
      cout << "scores to be Wisdom and Constitution. \n";
      cout << endl;
    }
    if (CLASS == "Fighter") {
      cout << "As a Fighter you'll want your highest ability \n";
      cout << "scores to be Strenght/ Dexterity and Constitution/ Intelligence. \n";
      cout << endl;
    }
    if (CLASS == "Monk") {
      cout << "As a Monk you'll want your highest ability \n";
      cout << "scores to be Dexterity and Wisdom. \n";
      cout << endl;
    }
    if (CLASS == "Paladin") {
      cout << "As a Paladin you'll want your highest ability \n";
      cout << "scores to be Strength and Charisma. \n";
      cout << endl;
    }
    if (CLASS == "Ranger") {
      cout << "As a Ranger you'll want your highest ability \n";
      cout << "scores to be Dexterity and Wisdom/ Strength. \n";
      cout << endl;
    }
    if (CLASS == "Rogue") {
      cout << "As a Rogue you'll want your highest ability \n";
      cout << "scores to be Dexterity and Intelligence/ Charisma. \n";
      cout << endl;
    }
    if (CLASS == "Sorcerer") {
      cout << "As a Sorcerer you'll want your highest ability \n";
      cout << "scores to be Charisma/ Constitution. \n";
      cout << endl;
    }
    if (CLASS == "Warlock") {
      cout << "As a Warlock you'll want your highest ability \n";
      cout << "scores to be Charisma/ Constitution. \n";
      cout << endl;
    }
    if (CLASS == "Wizard") {
      cout << "As a Wizard you'll want your highest ability \n";
      cout << "scores to be Intelligence and Constitution/ Dexterity/ Charisma. \n";
      cout << endl;
    }
		cout << "What will your third highest stat be?  \n";
    cout << "1) Strength            Current: " << STR << endl;
		cout << "2) Dexterity           Current: " << DEX << endl;
		cout << "3) Constitution        Current: " << CON << endl;
		cout << "4) Intelligence        Current: " << INT << endl;
		cout << "5) Wisdom              Current: " << WIS << endl;
		cout << "6) Charisma            Current: " << CHA << endl;
    cout << "Choice 1~6:  ";
		cin >> choice;
  } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
  	if (choice == "1") {
      if (STR >= 7) {
        cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  		  goto Stat3;
  		}
      STR = score;
  	}
  	if (choice == "2") {
  		if (DEX >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat3;
  		}
  		DEX = score;
  	}
  	if (choice == "3") {
  		if (CON >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat3;
  		}
  		CON = score;
  	}
  	if (choice == "4") {
  		if (INT >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat3;
  		}
  		INT = score;
  	}
  	if (choice == "5") {
  		if (WIS >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat3;
  		}
  		WIS = score;
  	}
  	if (choice == "6") {
  		if (CHA >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat3;
  		}
  		CHA = score;
  	}
Stat4:
    score = 12;
    do {
		system("CLS");
    if (CLASS == "Barbarian") {
      cout << "As a Barbarian you'll want your highest \n";
      cout << "ability scores to be Strength and Constitution. \n";
      cout << endl;
    }
    if (CLASS == "Bard") {
      cout << "As a Bard you'll want your highest ability \n";
      cout << "scores to be Charisma and Dexterity. \n";
      cout << endl;
    }
    if (CLASS == "Cleric") {
      cout << "As a Cleric you'll want your highest ability \n";
      cout << "scores to be Wisdom and Strength/ Constitution. \n";
      cout << endl;
    }
    if (CLASS == "Druid") {
      cout << "As a Druid you'll want your highest ability \n";
      cout << "scores to be Wisdom and Constitution. \n";
      cout << endl;
    }
    if (CLASS == "Fighter") {
      cout << "As a Fighter you'll want your highest ability \n";
      cout << "scores to be Strenght/ Dexterity and Constitution/ Intelligence. \n";
      cout << endl;
    }
    if (CLASS == "Monk") {
      cout << "As a Monk you'll want your highest ability \n";
      cout << "scores to be Dexterity and Wisdom. \n";
      cout << endl;
    }
    if (CLASS == "Paladin") {
      cout << "As a Paladin you'll want your highest ability \n";
      cout << "scores to be Strength and Charisma. \n";
      cout << endl;
    }
    if (CLASS == "Ranger") {
      cout << "As a Ranger you'll want your highest ability \n";
      cout << "scores to be Dexterity and Wisdom/ Strength. \n";
      cout << endl;
    }
    if (CLASS == "Rogue") {
      cout << "As a Rogue you'll want your highest ability \n";
      cout << "scores to be Dexterity and Intelligence/ Charisma. \n";
      cout << endl;
    }
    if (CLASS == "Sorcerer") {
      cout << "As a Sorcerer you'll want your highest ability \n";
      cout << "scores to be Charisma/ Constitution. \n";
      cout << endl;
    }
    if (CLASS == "Warlock") {
      cout << "As a Warlock you'll want your highest ability \n";
      cout << "scores to be Charisma/ Constitution. \n";
      cout << endl;
    }
    if (CLASS == "Wizard") {
      cout << "As a Wizard you'll want your highest ability \n";
      cout << "scores to be Intelligence and Constitution/ Dexterity/ Charisma. \n";
      cout << endl;
    }
		cout << "What will your third lowest stat be?  \n";
    cout << "1) Strength            Current: " << STR << endl;
    cout << "2) Dexterity           Current: " << DEX << endl;
    cout << "3) Constitution        Current: " << CON << endl;
    cout << "4) Intelligence        Current: " << INT << endl;
    cout << "5) Wisdom              Current: " << WIS << endl;
    cout << "6) Charisma            Current: " << CHA << endl;
		cout << "Choice 1~6:  ";
		cin >> choice;
  } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
  	if (choice == "1") {
      if (STR >= 7) {
        cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  		  goto Stat4;
  		}
      STR = score;
  	}
  	if (choice == "2") {
  		if (DEX >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat4;
  		}
  		DEX = score;
  	}
  	if (choice == "3") {
  		if (CON >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat4;
  		}
  		CON = score;
  	}
  	if (choice == "4") {
  		if (INT >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat4;
  		}
  		INT = score;
  	}
  	if (choice == "5") {
  		if (WIS >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat4;
  		}
  		WIS = score;
  	}
  	if (choice == "6") {
  		if (CHA >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat4;
  		}
  		CHA = score;
  	}
Stat5:
    score = 10;
    do {
		system("CLS");
    if (CLASS == "Barbarian") {
      cout << "As a Barbarian you'll want your highest \n";
      cout << "ability scores to be Strength and Constitution. \n";
      cout << endl;
    }
    if (CLASS == "Bard") {
      cout << "As a Bard you'll want your highest ability \n";
      cout << "scores to be Charisma and Dexterity. \n";
      cout << endl;
    }
    if (CLASS == "Cleric") {
      cout << "As a Cleric you'll want your highest ability \n";
      cout << "scores to be Wisdom and Strength/ Constitution. \n";
      cout << endl;
    }
    if (CLASS == "Druid") {
      cout << "As a Druid you'll want your highest ability \n";
      cout << "scores to be Wisdom and Constitution. \n";
      cout << endl;
    }
    if (CLASS == "Fighter") {
      cout << "As a Fighter you'll want your highest ability \n";
      cout << "scores to be Strenght/ Dexterity and Constitution/ Intelligence. \n";
      cout << endl;
    }
    if (CLASS == "Monk") {
      cout << "As a Monk you'll want your highest ability \n";
      cout << "scores to be Dexterity and Wisdom. \n";
      cout << endl;
    }
    if (CLASS == "Paladin") {
      cout << "As a Paladin you'll want your highest ability \n";
      cout << "scores to be Strength and Charisma. \n";
      cout << endl;
    }
    if (CLASS == "Ranger") {
      cout << "As a Ranger you'll want your highest ability \n";
      cout << "scores to be Dexterity and Wisdom/ Strength. \n";
      cout << endl;
    }
    if (CLASS == "Rogue") {
      cout << "As a Rogue you'll want your highest ability \n";
      cout << "scores to be Dexterity and Intelligence/ Charisma. \n";
      cout << endl;
    }
    if (CLASS == "Sorcerer") {
      cout << "As a Sorcerer you'll want your highest ability \n";
      cout << "scores to be Charisma/ Constitution. \n";
      cout << endl;
    }
    if (CLASS == "Warlock") {
      cout << "As a Warlock you'll want your highest ability \n";
      cout << "scores to be Charisma/ Constitution. \n";
      cout << endl;
    }
    if (CLASS == "Wizard") {
      cout << "As a Wizard you'll want your highest ability \n";
      cout << "scores to be Intelligence and Constitution/ Dexterity/ Charisma. \n";
      cout << endl;
    }
		cout << "What will your second lowest stat be?  \n";
    cout << "1) Strength            Current: " << STR << endl;
		cout << "2) Dexterity           Current: " << DEX << endl;
		cout << "3) Constitution        Current: " << CON << endl;
		cout << "4) Intelligence        Current: " << INT << endl;
		cout << "5) Wisdom              Current: " << WIS << endl;
		cout << "6) Charisma            Current: " << CHA << endl;
		cout << "Choice 1~6:  ";
		cin >> choice;
  } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
  	if (choice == "1") {
      if (STR >= 7) {
        cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  		  goto Stat5;
  		}
      STR = score;
  	}
  	if (choice == "2") {
  		if (DEX >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat5;
  		}
  		DEX = score;
  	}
  	if (choice == "3") {
  		if (CON >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat5;
  		}
  		CON = score;
  	}
  	if (choice == "4") {
  		if (INT >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat5;
  		}
  		INT = score;
  	}
  	if (choice == "5") {
  		if (WIS >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat5;
  		}
  		WIS = score;
  	}
  	if (choice == "6") {
  		if (CHA >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat5;
  		}
  		CHA = score;
  	}
Stat6:
    score = 8;
    do {
		system("CLS");
    if (CLASS == "Barbarian") {
      cout << "As a Barbarian you'll want your highest \n";
      cout << "ability scores to be Strength and Constitution. \n";
      cout << endl;
    }
    if (CLASS == "Bard") {
      cout << "As a Bard you'll want your highest ability \n";
      cout << "scores to be Charisma and Dexterity. \n";
      cout << endl;
    }
    if (CLASS == "Cleric") {
      cout << "As a Cleric you'll want your highest ability \n";
      cout << "scores to be Wisdom and Strength/ Constitution. \n";
      cout << endl;
    }
    if (CLASS == "Druid") {
      cout << "As a Druid you'll want your highest ability \n";
      cout << "scores to be Wisdom and Constitution. \n";
      cout << endl;
    }
    if (CLASS == "Fighter") {
      cout << "As a Fighter you'll want your highest ability \n";
      cout << "scores to be Strenght/ Dexterity and Constitution/ Intelligence. \n";
      cout << endl;
    }
    if (CLASS == "Monk") {
      cout << "As a Monk you'll want your highest ability \n";
      cout << "scores to be Dexterity and Wisdom. \n";
      cout << endl;
    }
    if (CLASS == "Paladin") {
      cout << "As a Paladin you'll want your highest ability \n";
      cout << "scores to be Strength and Charisma. \n";
      cout << endl;
    }
    if (CLASS == "Ranger") {
      cout << "As a Ranger you'll want your highest ability \n";
      cout << "scores to be Dexterity and Wisdom/ Strength. \n";
      cout << endl;
    }
    if (CLASS == "Rogue") {
      cout << "As a Rogue you'll want your highest ability \n";
      cout << "scores to be Dexterity and Intelligence/ Charisma. \n";
      cout << endl;
    }
    if (CLASS == "Sorcerer") {
      cout << "As a Sorcerer you'll want your highest ability \n";
      cout << "scores to be Charisma/ Constitution. \n";
      cout << endl;
    }
    if (CLASS == "Warlock") {
      cout << "As a Warlock you'll want your highest ability \n";
      cout << "scores to be Charisma/ Constitution. \n";
      cout << endl;
    }
    if (CLASS == "Wizard") {
      cout << "As a Wizard you'll want your highest ability \n";
      cout << "scores to be Intelligence and Constitution/ Dexterity/ Charisma. \n";
      cout << endl;
    }
		cout << "What will your lowest stat be?  \n";
    cout << "1) Strength            Current: " << STR << endl;
    cout << "2) Dexterity           Current: " << DEX << endl;
    cout << "3) Constitution        Current: " << CON << endl;
    cout << "4) Intelligence        Current: " << INT << endl;
    cout << "5) Wisdom              Current: " << WIS << endl;
    cout << "6) Charisma            Current: " << CHA << endl;
		cout << "Choice 1~6:  ";
		cin >> choice;
  } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
  	if (choice == "1") {
      if (STR >= 7) {
        cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  		  goto Stat6;
  		}
      STR = score;
  	}
  	if (choice == "2") {
  		if (DEX >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat6;
  		}
  		DEX = score;
  	}
  	if (choice == "3") {
  		if (CON >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat6;
  		}
  		CON = score;
  	}
  	if (choice == "4") {
  		if (INT >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat6;
  		}
  		INT = score;
  	}
  	if (choice == "5") {
  		if (WIS >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat6;
  		}
  		WIS = score;
  	}
  	if (choice == "6") {
  		if (CHA >= 7) {
  			cout << "You have already picked that stat before, please pick another to level";
  			cin >> a;
  			goto Stat6;
  		}
  		CHA = score;
  	}

RacialBonus:
    if (RACE == "Mountain-Dwarf") {
      STR = STR + 2;
      CON = CON + 2;
    }
    if (RACE == "Hill-Dwarf") {
      WIS = WIS + 1;
      CON = CON + 2;
    }
    if (RACE == "High-Elf") {
      DEX = DEX + 2;
      INT = INT + 1;
    }
    if (RACE == "Wood-Elf") {
      DEX = DEX + 2;
      WIS = WIS + 1;
    }
    if (RACE == "Dark-Elf") {
      DEX = DEX + 2;
      CHA = CHA + 1;
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
    }
    if (RACE == "Tiefling") {
      INT = INT + 1;
      CHA = CHA + 2;
    }

AbilityMods:
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

HP:
    if (CLASS == "Barbarian") {
      HP = 12 + CONmod;
      MAXHP = HP;
    }
    if (CLASS == "Bard") {
      HP = 8 + CONmod;
      MAXHP = HP;
    }
    if (CLASS == "Bard") {
      HP = 8 + CONmod;
      MAXHP = HP;
    }
    if (CLASS == "Cleric") {
      HP = 8 + CONmod;
      MAXHP = HP;
    }
    if (CLASS == "Cleric") {
      HP = 8 + CONmod;
      MAXHP = HP;
    }
    if (CLASS == "Druid") {
      HP = 8 + CONmod;
      MAXHP = HP;
    }
    if (CLASS == "Fighter") {
      HP = 10 + CONmod;
      MAXHP = HP;
    }
    if (CLASS == "Monk") {
      HP = 8 + CONmod;
      MAXHP = HP;
    }
    if (CLASS == "Paladin") {
      HP = 10 + CONmod;
      MAXHP = HP;
    }
    if (CLASS == "Ranger") {
      HP = 10 + CONmod;
      MAXHP = HP;
    }
    if (CLASS == "Rogue") {
      HP = 8 + CONmod;
      MAXHP = HP;
    }
    if (CLASS == "Sorcerer") {
      HP = 6 + CONmod;
      MAXHP = HP;
    }
    if (CLASS == "Warlock") {
      HP = 8 + CONmod;
      MAXHP = HP;
    }
    if (CLASS == "Wizard") {
      HP = 6 + CONmod;
      MAXHP = HP;
    }

Skills:
    if (CLASS == "Barbarian") {
      do {
        system("CLS");
        cout << "Pick your first of two skills to be proficient in: \n";
        cout << endl;
        cout << "1) Animal Handling (Wisdom)\n";
        cout << "2) Athletics (Strength)\n";
        cout << "3) Intimidation (Charisma)\n";
        cout << "4) Nature (Intelligence)\n";
        cout << "5) Perception (Wisdom)\n";
        cout << "6) Survival (Wisdom)\n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
      if (choice == "1") {
        ANIMHAND = 2;
      }
      if (choice == "2") {
        ATH = 2;
      }
      if (choice == "3") {
        INTIMI = 2;
      }
      if (choice == "4") {
        NATU = 2;
      }
      if (choice == "5") {
        PERCP = 2;
      }
      if (choice == "6") {
        SURV = 2;
      }
      do {
        system("CLS");
        cout << "Pick a second of two skills to be proficient in: \n";
        cout << endl;
        cout << "1) Animal Handling (Wisdom)\n";
        cout << "2) Athletics (Strength)\n";
        cout << "3) Intimidation (Charisma)\n";
        cout << "4) Nature (Intelligence)\n";
        cout << "5) Perception (Wisdom)\n";
        cout << "6) Survival (Wisdom)\n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
      if (choice == "1") {
        ANIMHAND = 2;
      }
      if (choice == "2") {
        ATH = 2;
      }
      if (choice == "3") {
        INTIMI = 2;
      }
      if (choice == "4") {
        NATU = 2;
      }
      if (choice == "5") {
        PERCP = 2;
      }
      if (choice == "6") {
        SURV = 2;
      }
    }
    if (CLASS == "Bard") {
      do {
        system("CLS");
        cout << "Pick your first of three skills to be proficient in: \n";
        cout << endl;
        cout << "1) Athletics (Strength) \n";
        cout << "2) Acrobatics (Dexterity) \n";
        cout << "3) Sleight of Hand (Dexterity) \n";
        cout << "4) Stealth (Dexterity) \n";
        cout << "5) Arcana (Intelligence) \n";
        cout << "6) History (Intelligence) \n";
        cout << "7) Investigation (Intelligence) \n";
        cout << "8) Nature (Intelligence) \n";
        cout << "9) Religion (Intelligence) \n";
        cout << "10) Animal Handling (Wisdom) \n";
        cout << "11) Insight (Wisdom) \n";
        cout << "12) Medicine (Wisdom) \n";
        cout << "13) Perception (Wisdom) \n";
        cout << "14) Survival (Wisdom) \n";
        cout << "15) Deception (Charisma) \n";
        cout << "16) Intimidation (Charisma) \n";
        cout << "17) Performance (Charisma) \n";
        cout << "18) Persuasion (Charisma) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11" || choice == "12" || choice == "13" || choice == "14" || choice == "15" || choice == "16" || choice == "17" || choice == "18"));
      if (choice == "1") {
        ATH = 2;
      }
      if (choice == "2") {
        ACRO = 2;
      }
      if (choice == "3") {
        SOH = 2;
      }
      if (choice == "4") {
        STEL = 2;
      }
      if (choice == "5") {
        ARCA = 2;
      }
      if (choice == "6") {
        HIST = 2;
      }
      if (choice == "7") {
        INVEST = 2;
      }
      if (choice == "8") {
        NATU = 2;
      }
      if (choice == "9") {
        RELIG = 2;
      }
      if (choice == "10") {
        ANIMHAND = 2;
      }
      if (choice == "11") {
        INSI = 2;
      }
      if (choice == "12") {
        MEDI = 2;
      }
      if (choice == "13") {
        PERCP = 2;
      }
      if (choice == "14") {
        SURV = 2;
      }
      if (choice == "15") {
        DECP = 2;
      }
      if (choice == "16") {
        INTIMI = 2;
      }
      if (choice == "17") {
        PERFO = 2;
      }
      if (choice == "18") {
        PERSU = 2;
      }
      do {
        system("CLS");
        cout << "Pick your second of three skills to be proficient in: \n";
        cout << endl;
        cout << "1) Athletics (Strength) \n";
        cout << "2) Acrobatics (Dexterity) \n";
        cout << "3) Sleight of Hand (Dexterity) \n";
        cout << "4) Stealth (Dexterity) \n";
        cout << "5) Arcana (Intelligence) \n";
        cout << "6) History (Intelligence) \n";
        cout << "7) Investigation (Intelligence) \n";
        cout << "8) Nature (Intelligence) \n";
        cout << "9) Religion (Intelligence) \n";
        cout << "10) Animal Handling (Wisdom) \n";
        cout << "11) Insight (Wisdom) \n";
        cout << "12) Medicine (Wisdom) \n";
        cout << "13) Perception (Wisdom) \n";
        cout << "14) Survival (Wisdom) \n";
        cout << "15) Deception (Charisma) \n";
        cout << "16) Intimidation (Charisma) \n";
        cout << "17) Performance (Charisma) \n";
        cout << "18) Persuasion (Charisma) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11" || choice == "12" || choice == "13" || choice == "14" || choice == "15" || choice == "16" || choice == "17" || choice == "18"));
      if (choice == "1") {
        ATH = 2;
      }
      if (choice == "2") {
        ACRO = 2;
      }
      if (choice == "3") {
        SOH = 2;
      }
      if (choice == "4") {
        STEL = 2;
      }
      if (choice == "5") {
        ARCA = 2;
      }
      if (choice == "6") {
        HIST = 2;
      }
      if (choice == "7") {
        INVEST = 2;
      }
      if (choice == "8") {
        NATU = 2;
      }
      if (choice == "9") {
        RELIG = 2;
      }
      if (choice == "10") {
        ANIMHAND = 2;
      }
      if (choice == "11") {
        INSI = 2;
      }
      if (choice == "12") {
        MEDI = 2;
      }
      if (choice == "13") {
        PERCP = 2;
      }
      if (choice == "14") {
        SURV = 2;
      }
      if (choice == "15") {
        DECP = 2;
      }
      if (choice == "16") {
        INTIMI = 2;
      }
      if (choice == "17") {
        PERFO = 2;
      }
      if (choice == "18") {
        PERSU = 2;
      }
      do {
        system("CLS");
        cout << "Pick your final of three skills to be proficient in: \n";
        cout << endl;
        cout << "1) Athletics (Strength) \n";
        cout << "2) Acrobatics (Dexterity) \n";
        cout << "3) Sleight of Hand (Dexterity) \n";
        cout << "4) Stealth (Dexterity) \n";
        cout << "5) Arcana (Intelligence) \n";
        cout << "6) History (Intelligence) \n";
        cout << "7) Investigation (Intelligence) \n";
        cout << "8) Nature (Intelligence) \n";
        cout << "9) Religion (Intelligence) \n";
        cout << "10) Animal Handling (Wisdom) \n";
        cout << "11) Insight (Wisdom) \n";
        cout << "12) Medicine (Wisdom) \n";
        cout << "13) Perception (Wisdom) \n";
        cout << "14) Survival (Wisdom) \n";
        cout << "15) Deception (Charisma) \n";
        cout << "16) Intimidation (Charisma) \n";
        cout << "17) Performance (Charisma) \n";
        cout << "18) Persuasion (Charisma) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11" || choice == "12" || choice == "13" || choice == "14" || choice == "15" || choice == "16" || choice == "17" || choice == "18"));
      if (choice == "1") {
        ATH = 2;
      }
      if (choice == "2") {
        ACRO = 2;
      }
      if (choice == "3") {
        SOH = 2;
      }
      if (choice == "4") {
        STEL = 2;
      }
      if (choice == "5") {
        ARCA = 2;
      }
      if (choice == "6") {
        HIST = 2;
      }
      if (choice == "7") {
        INVEST = 2;
      }
      if (choice == "8") {
        NATU = 2;
      }
      if (choice == "9") {
        RELIG = 2;
      }
      if (choice == "10") {
        ANIMHAND = 2;
      }
      if (choice == "11") {
        INSI = 2;
      }
      if (choice == "12") {
        MEDI = 2;
      }
      if (choice == "13") {
        PERCP = 2;
      }
      if (choice == "14") {
        SURV = 2;
      }
      if (choice == "15") {
        DECP = 2;
      }
      if (choice == "16") {
        INTIMI = 2;
      }
      if (choice == "17") {
        PERFO = 2;
      }
      if (choice == "18") {
        PERSU = 2;
      }
      }
    if (CLASS == "Cleric") {
      do {
        system("CLS");
        cout << "Pick your first of two skills to be proficient in: \n";
        cout << endl;
        cout << "1) History (Intelligence)\n";
        cout << "2) Insight (Wisdom)\n";
        cout << "3) Medicine (Wisdom)\n";
        cout << "4) Persuasion (Charisma)\n";
        cout << "5) Religion (Intelligence)\n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5"));
      if (choice == "1") {
        HIST = 2;
      }
      if (choice == "2") {
        INSI = 2;
      }
      if (choice == "3") {
        MEDI = 2;
      }
      if (choice == "4") {
        PERSU = 2;
      }
      if (choice == "5") {
        RELIG = 2;
      }
      do {
        system("CLS");
        cout << "Pick your second of two skills to be proficient in: \n";
        cout << endl;
        cout << "1) History (Intelligence)\n";
        cout << "2) Insight (Wisdom)\n";
        cout << "3) Medicine (Wisdom)\n";
        cout << "4) Persuasion (Charisma)\n";
        cout << "5) Religion (Intelligence)\n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5"));
      if (choice == "1") {
        HIST = 2;
      }
      if (choice == "2") {
        INSI = 2;
      }
      if (choice == "3") {
        MEDI = 2;
      }
      if (choice == "4") {
        PERSU = 2;
      }
      if (choice == "5") {
        RELIG = 2;
      }
    }
    if (CLASS == "Druid") {
      do {
        system("CLS");
        cout << "Pick your first of two skills to be proficient in: \n";
        cout << endl;
        cout << "1) Arcana (Intelligence) \n";
        cout << "2) Nature (Intelligence) \n";
        cout << "3) Religion (Intelligence) \n";
        cout << "4) Animal Handling (Wisdom) \n";
        cout << "5) Insight (Wisdom) \n";
        cout << "6) Medicine (Wisdom) \n";
        cout << "7) Perception (Wisdom) \n";
        cout << "8) Survival (Wisdom) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8"));
      if (choice == "1") {
        ARCA = 2;
      }
      if (choice == "2") {
        NATU = 2;
      }
      if (choice == "3") {
        RELIG = 2;
      }
      if (choice == "4") {
        ANIMHAND = 2;
      }
      if (choice == "5") {
        INSI = 2;
      }
      if (choice == "6") {
        MEDI = 2;
      }
      if (choice == "7") {
        PERCP = 2;
      }
      if (choice == "8") {
        SURV = 2;
      }
      do {
        system("CLS");
        cout << "Pick your final of two skills to be proficient in: \n";
        cout << endl;
        cout << "1) Arcana (Intelligence) \n";
        cout << "2) Nature (Intelligence) \n";
        cout << "3) Religion (Intelligence) \n";
        cout << "4) Animal Handling (Wisdom) \n";
        cout << "5) Insight (Wisdom) \n";
        cout << "6) Medicine (Wisdom) \n";
        cout << "7) Perception (Wisdom) \n";
        cout << "8) Survival (Wisdom) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8"));
      if (choice == "1") {
        ARCA = 2;
      }
      if (choice == "2") {
        NATU = 2;
      }
      if (choice == "3") {
        RELIG = 2;
      }
      if (choice == "4") {
        ANIMHAND = 2;
      }
      if (choice == "5") {
        INSI = 2;
      }
      if (choice == "6") {
        MEDI = 2;
      }
      if (choice == "7") {
        PERCP = 2;
      }
      if (choice == "8") {
        SURV = 2;
      }
    }
    if (CLASS == "Fighter") {
      do {
        system("CLS");
        cout << "Pick your first of two skills to be proficient in: \n";
        cout << endl;
        cout << "1) Athletics (Strength) \n";
        cout << "2) Acrobatics (Dexterity) \n";
        cout << "3) History (Intelligence) \n";
        cout << "4) Animal Handling (Wisdom) \n";
        cout << "5) Insight (Wisdom) \n";
        cout << "6) Perception (Wisdom) \n";
        cout << "7) Survival (Wisdom) \n";
        cout << "8) Intimidation (Charisma) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8"));
      if (choice == "1") {
        ATH = 2;
      }
      if (choice == "2") {
        ACRO = 2;
      }
      if (choice == "3") {
        HIST = 2;
      }
      if (choice == "4") {
        ANIMHAND = 2;
      }
      if (choice == "5") {
        INSI = 2;
      }
      if (choice == "6") {
        PERCP = 2;
      }
      if (choice == "7") {
        SURV = 2;
      }
      if (choice == "8") {
        INTIMI = 2;
      }
      do {
        system("CLS");
        cout << "Pick your second of two skills to be proficient in: \n";
        cout << endl;
        cout << "1) Athletics (Strength) \n";
        cout << "2) Acrobatics (Dexterity) \n";
        cout << "3) History (Intelligence) \n";
        cout << "4) Animal Handling (Wisdom) \n";
        cout << "5) Insight (Wisdom) \n";
        cout << "6) Perception (Wisdom) \n";
        cout << "7) Survival (Wisdom) \n";
        cout << "8) Intimidation (Charisma) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8"));
      if (choice == "1") {
        ATH = 2;
      }
      if (choice == "2") {
        ACRO = 2;
      }
      if (choice == "3") {
        HIST = 2;
      }
      if (choice == "4") {
        ANIMHAND = 2;
      }
      if (choice == "5") {
        INSI = 2;
      }
      if (choice == "6") {
        PERCP = 2;
      }
      if (choice == "7") {
        SURV = 2;
      }
      if (choice == "8") {
        INTIMI = 2;
      }
    }
    if (CLASS == "Monk") {
      do {
        system("CLS");
        cout << "Pick your first of two skills to be proficient in: \n";
        cout << endl;
        cout << "1) Athletics (Strength) \n";
        cout << "2) Acrobatics (Dexterity) \n";
        cout << "3) Stealth (Dexterity) \n";
        cout << "4) History (Intelligence) \n";
        cout << "5) Religion (Intelligence) \n";
        cout << "6) Insight (Wisdom) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
      if (choice == "1") {
        ATH = 2;
      }
      if (choice == "2") {
        ACRO = 2;
      }
      if (choice == "3") {
        STEL = 2;
      }
      if (choice == "4") {
        HIST = 2;
      }
      if (choice == "5") {
        RELIG = 2;
      }
      if (choice == "6") {
        INSI = 2;
      }
      do {
        system("CLS");
        cout << "Pick your second of two skills to be proficient in: \n";
        cout << endl;
        cout << "1) Athletics (Strength) \n";
        cout << "2) Acrobatics (Dexterity) \n";
        cout << "3) Stealth (Dexterity) \n";
        cout << "4) History (Intelligence) \n";
        cout << "5) Religion (Intelligence) \n";
        cout << "6) Insight (Wisdom) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
      if (choice == "1") {
        ATH = 2;
      }
      if (choice == "2") {
        ACRO = 2;
      }
      if (choice == "3") {
        STEL = 2;
      }
      if (choice == "4") {
        HIST = 2;
      }
      if (choice == "5") {
        RELIG = 2;
      }
      if (choice == "6") {
        INSI = 2;
      }
    }
    if (CLASS == "Paladin") {
      do {
        system("CLS");
        cout << "Pick your first of two skills to be proficient in: \n";
        cout << endl;
        cout << "1) Athletics (Strength) \n";
        cout << "2) Religion (Intelligence) \n";
        cout << "3) Insight (Wisdom) \n";
        cout << "4) Medicine (Wisdom) \n";
        cout << "5) Intimidation (Charisma) \n";
        cout << "6) Persuasion (Charisma) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
      if (choice == "1") {
        ATH = 2;
      }
      if (choice == "2") {
        RELIG = 2;
      }
      if (choice == "3") {
        INSI = 2;
      }
      if (choice == "4") {
        MEDI = 2;
      }
      if (choice == "5") {
        INTIMI = 2;
      }
      if (choice == "6") {
        PERSU = 2;
      }
      do {
        system("CLS");
        cout << "Pick your second of two skills to be proficient in: \n";
        cout << endl;
        cout << "1) Athletics (Strength) \n";
        cout << "2) Religion (Intelligence) \n";
        cout << "3) Insight (Wisdom) \n";
        cout << "4) Medicine (Wisdom) \n";
        cout << "5) Intimidation (Charisma) \n";
        cout << "6) Persuasion (Charisma) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
      if (choice == "1") {
        ATH = 2;
      }
      if (choice == "2") {
        RELIG = 2;
      }
      if (choice == "3") {
        INSI = 2;
      }
      if (choice == "4") {
        MEDI = 2;
      }
      if (choice == "5") {
        INTIMI = 2;
      }
      if (choice == "6") {
        PERSU = 2;
      }
    }
    if (CLASS == "Ranger") {
      do {
        system("CLS");
        cout << "Pick your first of three skills to be proficient in: \n";
        cout << endl;
        cout << "1) Athletics (Strength) \n";
        cout << "2) Stealth (Dexterity) \n";
        cout << "3) Investigation (Intelligence) \n";
        cout << "4) Nature (Intelligence) \n";
        cout << "5) Animal Handling (Wisdom) \n";
        cout << "6) Insight (Wisdom) \n";
        cout << "7) Perception (Wisdom) \n";
        cout << "8) Survival (Wisdom) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8"));
      if (choice == "1") {
        ATH = 2;
      }
      if (choice == "2") {
        STEL = 2;
      }
      if (choice == "3") {
        INVEST = 2;
      }
      if (choice == "4") {
        NATU = 2;
      }
      if (choice == "5") {
        ANIMHAND = 2;
      }
      if (choice == "6") {
        INSI = 2;
      }
      if (choice == "7") {
        PERCP = 2;
      }
      if (choice == "8") {
        SURV = 2;
      }
      do {
        system("CLS");
        cout << "Pick your second of three skills to be proficient in: \n";
        cout << endl;
        cout << "1) Athletics (Strength) \n";
        cout << "2) Stealth (Dexterity) \n";
        cout << "3) Investigation (Intelligence) \n";
        cout << "4) Nature (Intelligence) \n";
        cout << "5) Animal Handling (Wisdom) \n";
        cout << "6) Insight (Wisdom) \n";
        cout << "7) Perception (Wisdom) \n";
        cout << "8) Survival (Wisdom) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8"));
      if (choice == "1") {
        ATH = 2;
      }
      if (choice == "2") {
        STEL = 2;
      }
      if (choice == "3") {
        INVEST = 2;
      }
      if (choice == "4") {
        NATU = 2;
      }
      if (choice == "5") {
        ANIMHAND = 2;
      }
      if (choice == "6") {
        INSI = 2;
      }
      if (choice == "7") {
        PERCP = 2;
      }
      if (choice == "8") {
        SURV = 2;
      }
      do {
        system("CLS");
        cout << "Pick your final of three skills to be proficient in: \n";
        cout << endl;
        cout << "1) Athletics (Strength) \n";
        cout << "2) Stealth (Dexterity) \n";
        cout << "3) Investigation (Intelligence) \n";
        cout << "4) Nature (Intelligence) \n";
        cout << "5) Animal Handling (Wisdom) \n";
        cout << "6) Insight (Wisdom) \n";
        cout << "7) Perception (Wisdom) \n";
        cout << "8) Survival (Wisdom) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8"));
      if (choice == "1") {
        ATH = 2;
      }
      if (choice == "2") {
        STEL = 2;
      }
      if (choice == "3") {
        INVEST = 2;
      }
      if (choice == "4") {
        NATU = 2;
      }
      if (choice == "5") {
        ANIMHAND = 2;
      }
      if (choice == "6") {
        INSI = 2;
      }
      if (choice == "7") {
        PERCP = 2;
      }
      if (choice == "8") {
        SURV = 2;
      }
    }
    if (CLASS == "Rogue") {
      do {
        system("CLS");
        cout << "Pick your first of four skills to be proficient in: \n";
        cout << endl;
        cout << "1) Athletics (Strength) \n";
        cout << "2) Acrobatics (Dexterity) \n";
        cout << "3) Sleight of Hand (Dexterity) \n";
        cout << "4) Stealth (Dexterity) \n";
        cout << "5) Investigation (Intelligence) \n";
        cout << "6) Insight (Wisdom) \n";
        cout << "7) Perception (Wisdom) \n";
        cout << "8) Deception (Charisma) \n";
        cout << "9) Intimidation (Charisma) \n";
        cout << "10) Performance (Charisma) \n";
        cout << "11) Persuasion (Charisma) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11"));
      if (choice == "1") {
        ATH = 2;
      }
      if (choice == "2") {
        ACRO = 2;
      }
      if (choice == "3") {
        SOH = 2;
      }
      if (choice == "4") {
        STEL = 2;
      }
      if (choice == "5") {
        INVEST = 2;
      }
      if (choice == "6") {
        INSI = 2;
      }
      if (choice == "7") {
        PERCP = 2;
      }
      if (choice == "8") {
        DECP = 2;
      }
      if (choice == "9") {
        INTIMI = 2;
      }
      if (choice == "10") {
        PERFO = 2;
      }
      if (choice == "11") {
        PERSU = 2;
      }
      do {
        system("CLS");
        cout << "Pick your second of four skills to be proficient in: \n";
        cout << endl;
        cout << "1) Athletics (Strength) \n";
        cout << "2) Acrobatics (Dexterity) \n";
        cout << "3) Sleight of Hand (Dexterity) \n";
        cout << "4) Stealth (Dexterity) \n";
        cout << "5) Investigation (Intelligence) \n";
        cout << "6) Insight (Wisdom) \n";
        cout << "7) Perception (Wisdom) \n";
        cout << "8) Deception (Charisma) \n";
        cout << "9) Intimidation (Charisma) \n";
        cout << "10) Performance (Charisma) \n";
        cout << "11) Persuasion (Charisma) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11"));
      if (choice == "1") {
        ATH = 2;
      }
      if (choice == "2") {
        ACRO = 2;
      }
      if (choice == "3") {
        SOH = 2;
      }
      if (choice == "4") {
        STEL = 2;
      }
      if (choice == "5") {
        INVEST = 2;
      }
      if (choice == "6") {
        INSI = 2;
      }
      if (choice == "7") {
        PERCP = 2;
      }
      if (choice == "8") {
        DECP = 2;
      }
      if (choice == "9") {
        INTIMI = 2;
      }
      if (choice == "10") {
        PERFO = 2;
      }
      if (choice == "11") {
        PERSU = 2;
      }
      do {
        system("CLS");
        cout << "Pick your third of four skills to be proficient in: \n";
        cout << endl;
        cout << "1) Athletics (Strength) \n";
        cout << "2) Acrobatics (Dexterity) \n";
        cout << "3) Sleight of Hand (Dexterity) \n";
        cout << "4) Stealth (Dexterity) \n";
        cout << "5) Investigation (Intelligence) \n";
        cout << "6) Insight (Wisdom) \n";
        cout << "7) Perception (Wisdom) \n";
        cout << "8) Deception (Charisma) \n";
        cout << "9) Intimidation (Charisma) \n";
        cout << "10) Performance (Charisma) \n";
        cout << "11) Persuasion (Charisma) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11"));
      if (choice == "1") {
        ATH = 2;
      }
      if (choice == "2") {
        ACRO = 2;
      }
      if (choice == "3") {
        SOH = 2;
      }
      if (choice == "4") {
        STEL = 2;
      }
      if (choice == "5") {
        INVEST = 2;
      }
      if (choice == "6") {
        INSI = 2;
      }
      if (choice == "7") {
        PERCP = 2;
      }
      if (choice == "8") {
        DECP = 2;
      }
      if (choice == "9") {
        INTIMI = 2;
      }
      if (choice == "10") {
        PERFO = 2;
      }
      if (choice == "11") {
        PERSU = 2;
      }
      do {
        system("CLS");
        cout << "Pick your final of four skills to be proficient in: \n";
        cout << endl;
        cout << "1) Athletics (Strength) \n";
        cout << "2) Acrobatics (Dexterity) \n";
        cout << "3) Sleight of Hand (Dexterity) \n";
        cout << "4) Stealth (Dexterity) \n";
        cout << "5) Investigation (Intelligence) \n";
        cout << "6) Insight (Wisdom) \n";
        cout << "7) Perception (Wisdom) \n";
        cout << "8) Deception (Charisma) \n";
        cout << "9) Intimidation (Charisma) \n";
        cout << "10) Performance (Charisma) \n";
        cout << "11) Persuasion (Charisma) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11"));
      if (choice == "1") {
        ATH = 2;
      }
      if (choice == "2") {
        ACRO = 2;
      }
      if (choice == "3") {
        SOH = 2;
      }
      if (choice == "4") {
        STEL = 2;
      }
      if (choice == "5") {
        INVEST = 2;
      }
      if (choice == "6") {
        INSI = 2;
      }
      if (choice == "7") {
        PERCP = 2;
      }
      if (choice == "8") {
        DECP = 2;
      }
      if (choice == "9") {
        INTIMI = 2;
      }
      if (choice == "10") {
        PERFO = 2;
      }
      if (choice == "11") {
        PERSU = 2;
      }
    }
    if (CLASS == "Sorcerer") {
      do {
        system("CLS");
        cout << "Pick your first of two skills to be proficient in: \n";
        cout << endl;
        cout << "1) Arcana (Intelligence) \n";
        cout << "2) Religion (Intelligence) \n";
        cout << "3) Insight (Wisdom) \n";
        cout << "4) Deception (Charisma) \n";
        cout << "5) Intimidation (Charisma) \n";
        cout << "6) Persuasion (Charisma) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
      if (choice == "1") {
        ARCA = 2;
      }
      if (choice == "2") {
        RELIG = 2;
      }
      if (choice == "3") {
        INSI = 2;
      }
      if (choice == "4") {
        DECP = 2;
      }
      if (choice == "5") {
        INTIMI = 2;
      }
      if (choice == "6") {
        PERSU = 2;
      }
      do {
        system("CLS");
        cout << "Pick your second of two skills to be proficient in: \n";
        cout << endl;
        cout << "1) Arcana (Intelligence) \n";
        cout << "2) Religion (Intelligence) \n";
        cout << "3) Insight (Wisdom) \n";
        cout << "4) Deception (Charisma) \n";
        cout << "5) Intimidation (Charisma) \n";
        cout << "6) Persuasion (Charisma) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
      if (choice == "1") {
        ARCA = 2;
      }
      if (choice == "2") {
        RELIG = 2;
      }
      if (choice == "3") {
        INSI = 2;
      }
      if (choice == "4") {
        DECP = 2;
      }
      if (choice == "5") {
        INTIMI = 2;
      }
      if (choice == "6") {
        PERSU = 2;
      }
    }
    if (CLASS == "Warlock") {
      do {
        system("CLS");
        cout << "Pick your first of two skills to be proficient in: \n";
        cout << endl;
        cout << "1) Arcana (Intelligence) \n";
        cout << "2) History (Intelligence) \n";
        cout << "3) Investigation (Intelligence) \n";
        cout << "4) Nature (Intelligence) \n";
        cout << "5) Religion (Intelligence) \n";
        cout << "6) Deception (Charisma) \n";
        cout << "7) Intimidation (Charisma) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7"));
      if (choice == "1") {
        ARCA = 2;
      }
      if (choice == "2") {
        HIST = 2;
      }
      if (choice == "3") {
        INVEST = 2;
      }
      if (choice == "4") {
        NATU = 2;
      }
      if (choice == "5") {
        RELIG = 2;
      }
      if (choice == "6") {
        DECP = 2;
      }
      if (choice == "7") {
        INTIMI = 2;
      }
      do {
        system("CLS");
        cout << "Pick your first of two skills to be proficient in: \n";
        cout << endl;
        cout << "1) Arcana (Intelligence) \n";
        cout << "2) History (Intelligence) \n";
        cout << "3) Investigation (Intelligence) \n";
        cout << "4) Nature (Intelligence) \n";
        cout << "5) Religion (Intelligence) \n";
        cout << "6) Deception (Charisma) \n";
        cout << "7) Intimidation (Charisma) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7"));
      if (choice == "1") {
        ARCA = 2;
      }
      if (choice == "2") {
        HIST = 2;
      }
      if (choice == "3") {
        INVEST = 2;
      }
      if (choice == "4") {
        NATU = 2;
      }
      if (choice == "5") {
        RELIG = 2;
      }
      if (choice == "6") {
        DECP = 2;
      }
      if (choice == "7") {
        INTIMI = 2;
      }
    }
    if (CLASS == "Wizard") {
      do {
        system("CLS");
        cout << "Pick your first of two skills to be proficient in: \n";
        cout << endl;
        cout << "1) Arcana (Intelligence) \n";
        cout << "2) History (Intelligence) \n";
        cout << "3) Investigation (Intelligence) \n";
        cout << "4) Religion (Intelligence) \n";
        cout << "5) Insight (Wisdom) \n";
        cout << "6) Medicine (Wisdom) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
      if (choice == "1") {
        ARCA = 2;
      }
      if (choice == "2") {
        HIST = 2;
      }
      if (choice == "3") {
        INVEST = 2;
      }
      if (choice == "4") {
        RELIG = 2;
      }
      if (choice == "5") {
        INSI = 2;
      }
      if (choice == "6") {
        MEDI = 2;
      }
      do {
        system("CLS");
        cout << "Pick your final of two skills to be proficient in: \n";
        cout << endl;
        cout << "1) Arcana (Intelligence) \n";
        cout << "2) History (Intelligence) \n";
        cout << "3) Investigation (Intelligence) \n";
        cout << "4) Religion (Intelligence) \n";
        cout << "5) Insight (Wisdom) \n";
        cout << "6) Medicine (Wisdom) \n";
        cout << endl;
        cout << "Which one do you choose?  ";
        cin >> choice;
      } while (!(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6"));
      if (choice == "1") {
        ARCA = 2;
      }
      if (choice == "2") {
        HIST = 2;
      }
      if (choice == "3") {
        INVEST = 2;
      }
      if (choice == "4") {
        RELIG = 2;
      }
      if (choice == "5") {
        INSI = 2;
      }
      if (choice == "6") {
        MEDI = 2;
      }
    }
  }


void charactersheet() {
      system("CLS");
      cout << "Character Sheet - \n";
      cout << "Name:  " << NAME << endl;
      cout << "Race:  " << RACE << endl;
      cout << "Class: " << CLASS << endl;
      cout << "Level: " << LVL << endl;
      cout << "AC:    " << AC << endl;
      cout << endl;
      cout << "Stats -\n";
      cout << "HP:             " << HP << "/" << MAXHP << endl;
      cout << "Strength:       " << STR << "     Modifier: " << STRmod << endl;
      cout << "Dexterity:      " << DEX << "     Modifier: " << DEXmod << endl;
      cout << "Constitution:   " << CON << "     Modifier: " << CONmod << endl;
      cout << "Intelligence:   " << INT << "     Modifier: " << INTmod << endl;
      cout << "Wisdom:         " << WIS << "     Modifier: " << WISmod << endl;
      cout << "Charisma:       " << CHA << "     Modifier: " << CHAmod << endl;
      cout << endl;
      cout << "Skills -\n";
      if (ATH > 0) {
        cout << "Athletics (Strength) [" << ATH << "]\n";
      }
      if (ACRO > 0) {
        cout << "Acrobatics (Dexterity) [" << ACRO << "]\n";
      }
      if (SOH > 0) {
        cout << "Sleight of Hand (Dexterity) [" << SOH << "]\n";
      }
      if (STEL > 0) {
        cout << "Stealth (Dexterity) [" << STEL << "]\n";
      }
      if (ARCA > 0) {
        cout << "Arcana (Intelligence) [" << ARCA << "]\n";
      }
      if (HIST > 0) {
        cout << "History (Intelligence) [" << HIST << "]\n";
      }
      if (INVEST > 0) {
        cout << "Investigation (Intelligence) [" << INVEST << "]\n";
      }
      if (NATU > 0) {
        cout << "Nature (Intelligence) [" << NATU << "]\n";
      }
      if (RELIG > 0) {
        cout << "Religion (Intelligence) [" << RELIG << "]\n";
      }
      if (ANIMHAND > 0) {
        cout << "Animal Handling (Wisdom) [" << ANIMHAND << "]\n";
      }
      if (INSI > 0) {
        cout << "Insight (Wisdom) [" << INSI << "]\n";
      }
      if (MEDI > 0) {
        cout << "Medicine (Wisdom) [" << MEDI << "]\n";
      }
      if (PERCP > 0) {
        cout << "Perception (Wisdom) [" << PERCP << "]\n";
      }
      if (SURV > 0) {
        cout << "Survival (Wisdom) [" << SURV << "]\n";
      }
      if (DECP > 0) {
        cout << "Deception (Charisma) [" << DECP << "]\n";
      }
      if (INTIMI > 0) {
        cout << "Intimidation (Charisma) [" << INTIMI << "]\n";
      }
      if (PERFO > 0) {
        cout << "Performance (Charisma) [" << PERFO << "]\n";
      }
      if (PERSU > 0) {
        cout << "Persuasion (Charisma) [" << PERSU << "]\n";
      }
      cout << endl;
      cout << "Magical Items -\n";
      if (Bagpipes > 0) {
        cout << "Bagpipes: " << Bagpipes << endl;
      }
      if (Drum > 0) {
        cout << "Drum: " << Drum << endl;
      }
      if (Dulcimer > 0) {
        cout << "Dulcimer: " << Dulcimer << endl;
      }
      if (Flute > 0) {
        cout << "Flute: " << Flute << endl;
      }
      if (Lute > 0) {
        cout << "Lute: " << Lute << endl;
      }
      if (Lyre > 0) {
        cout << "Lyre: " << Lyre << endl;
      }
      if (Horn > 0) {
        cout << "Horn: " << Horn << endl;
      }
      if (PanFlute > 0) {
        cout << "Pan Flute: " << PanFlute << endl;
      }
      if (Shawm > 0) {
        cout << "Shawm: " << Shawm << endl;
      }
      if (Viol > 0) {
        cout << "Viol: " << Viol << endl;
      }
      if (HolySymbol > 0) {
        cout << "Holy Symbol: " << HolySymbol << endl;
      }
      if (DruidicFocus > 0) {
        cout << "Druidic Focus: " << DruidicFocus << endl;
      }
      if (SpellBook > 0) {
        cout << "Spell Book: " << SpellBook << endl;
      }
      if (ArcaneFocus > 0) {
        cout << "Arcane Focus: " << ArcaneFocus << endl;
      }
      cout << endl;
      cout << "Weapons - \n";
      if (Club > 0) {
        cout << "Club: " << Club << endl;
      }
      if (Dagger > 0) {
        cout << "Dagger: " << Dagger << endl;
      }
      if (Greatclub > 0) {
        cout << "Greatclub: " << Greatclub << endl;
      }
      if (Handaxe > 0) {
        cout << "Handaxe: " << Handaxe << endl;
      }
      if (Javelin > 0) {
        cout << "Javelin: " << Javelin << endl;
      }
      if (LightHammer > 0) {
        cout << "LightHammer: " << LightHammer << endl;
      }
      if (Mace > 0) {
        cout << "Mace: " << Mace << endl;
      }
      if (Quarterstaff > 0) {
        cout << "Quarterstaff: " << Quarterstaff << endl;
      }
      if (Sickle > 0) {
        cout << "Sickle: " << Sickle << endl;
      }
      if (Spear > 0) {
        cout << "Spear: " << Spear << endl;
      }
      if (LightCrossbow > 0) {
        cout << "Light Crossbow: " << LightCrossbow << endl;
      }
      if (Dart > 0) {
        cout << "Dart: " << Dart << endl;
      }
      if (Shortbow > 0) {
        cout << "Shortbow: " << Shortbow << endl;
      }
      if (Sling > 0) {
        cout << "Sling: " << Sling << endl;
      }
      if (Battleaxe > 0) {
        cout << "Battleaxe: " << Battleaxe << endl;
      }
      if (Flail > 0) {
        cout << "Flail: " << Flail << endl;
      }
      if (Glaive > 0) {
        cout << "Glaive: " << Glaive << endl;
      }
      if (Greataxe > 0) {
        cout << "Greataxe: " << Greataxe << endl;
      }
      if (Greatsword > 0) {
        cout << "Greatsword: " << Greatsword << endl;
      }
      if (Halberd > 0) {
        cout << "Halberd: " << Halberd << endl;
      }
      if (Lance > 0) {
        cout << "Lance: " << Lance << endl;
      }
      if (Longsword > 0) {
        cout << "Longsword: " << Longsword << endl;
      }
      if (Maul > 0) {
        cout << "Maul: " << Maul << endl;
      }
      if (Morningstar > 0) {
        cout << "Morningstar: " << Morningstar << endl;
      }
      if (Pike > 0) {
        cout << "Pike: " << Pike << endl;
      }
      if (Rapier > 0) {
        cout << "Rapier: " << Rapier << endl;
      }
      if (Scimitar > 0) {
        cout << "Scimitar: " << Scimitar << endl;
      }
      if (Shortsword > 0) {
        cout << "Shortsword: " << Shortsword << endl;
      }
      if (Trident > 0) {
        cout << "Trident: " << Trident << endl;
      }
      if (WarPick > 0) {
        cout << "War Pick: " << WarPick << endl;
      }
      if (Warhammer > 0) {
        cout << "Warhammer: " << Warhammer << endl;
      }
      if (Whip > 0) {
        cout << "Whip: " << Whip << endl;
      }
      if (Blowgun > 0) {
        cout << "Blowgun: " << Blowgun << endl;
      }
      if (HandCrossbow > 0) {
        cout << "Hand Crossbow: " << HandCrossbow << endl;
      }
      if (HeavyCrossbow > 0) {
        cout << "Heavy Crossbow: " << HeavyCrossbow << endl;
      }
      if (Longbow > 0) {
        cout << "Longbow: " << Longbow << endl;
      }
      if (Net > 0) {
        cout << "Net: " << Net << endl;
      }
      cout << endl;
      cout << "Armours - \n";
      if (Padded > 0) {
        cout << "Padded: " << Padded << endl;
      }
      if (Leather > 0) {
        cout << "Leather: " << Leather << endl;
      }
      if (StuddedLeather > 0) {
        cout << "Studded Leather: " << StuddedLeather << endl;
      }
      if (Hide > 0) {
        cout << "Hide: " << Hide << endl;
      }
      if (ChainShirt > 0) {
        cout << "Chain Shirt: " << ChainShirt << endl;
      }
      if (ScaleMail > 0) {
        cout << "Scale Mail: " << ScaleMail << endl;
      }
      if (Breastplate > 0) {
        cout << "Breastplate: " << Breastplate << endl;
      }
      if (HalfPlate > 0) {
        cout << "Half Plate: " << HalfPlate << endl;
      }
      if (RingMail > 0) {
        cout << "Ring Mail: " << RingMail << endl;
      }
      if (ChainMail > 0) {
        cout << "Chain Mail: " << ChainMail << endl;
      }
      if (Splint > 0) {
        cout << "Splint: " << Splint << endl;
      }
      if (Plate > 0) {
        cout << "Plate: " << Plate << endl;
      }
      if (Shield > 0) {
        cout << "Shield: " << Shield << endl;
      }
      if (Padded == 0 && Leather == 0 && StuddedLeather == 0 && Hide == 0 && ChainShirt == 0 &&
          ScaleMail == 0 && Breastplate == 0 && HalfPlate == 0 && RingMail == 0 && ChainMail == 0 && Splint == 0 && Plate == 0 && Shield == 0) {
              cout << "Clothed" << endl;
      }
      cout << endl;
      cout << "Equipped Weapon: " << equippedWeapon << endl;
      cout << "Equipped Armour: " << equippedArmour << endl;
      cin.get();
}
