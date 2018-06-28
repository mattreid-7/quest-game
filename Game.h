#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <time.h>
#include <fstream>


class Game
{
public:
	Game();
	virtual ~Game();

	//Operators

	//Accessors
	inline const std::string& getNAME() const { return this->NAME; }
		//Creates a single line function that returns a variable eg. getNAME() [returns the character name]

	//Functions
	void StatModifiers();
	void Abilities();
	void AbilityList();
	void Armours();
	void ArmourList();
	void CharacterSheet();
	void ConsumableList();
	void Consumables();
	void Creation();
	void Creatures();
	void CreatureAttack();
	void DeathCheck();
	void EnemyDeathCheck();
	void ExtraAttack();
	void Fighting();
	void Initiative();
	void Load();
	void LvlUp();
	void LvlUpCheck();
	void MainMenu();
	void ProficiencyList();
	void Save();
	void Spells();
	void SkillModifiers();
	void Weapons();
	void WeaponList();
	void Rage();
	void UnarmouredDefence();
	void RecklessAttack();
	void FeralInstinct();
	void BrutalCritical();
	void RelentlessRage();
	void PersistentRage();
	void PrimalChampion();
	void EnemyAttackWithAdv();

	//Variables
	// Character Stats
	int MAXHP = 0, HP = 0, STR = 0, DEX = 0, CON = 0, INT = 0, WIS = 0, CHA = 0, LVL = 1, AC = 0, INIT = 0, DAM = 0, ATT = 0, PROMOD = 2, XP = 0, XPneeded = 300, Ki = 0, RageDamage = 2, SpellSlotOne = 0, SpellSlotTwo = 0, SpellSlotThree = 0, SpellSlotFour = 0, SpellSlotFive = 0, SpellSlotSix = 0, SpellSlotSeven = 0, SpellSlotEight = 0, SpellSlotNine = 0;
	// Enemy Stats
	int enemyAC = 0, enemyMAXHP = 0, enemyHP = 0, enemyATT = 0, enemyDAM = 0, enemyINIT = 0, enemyDEX = 0, XPgain = 0;
	// Ability Mods
	int STRmod = 0, DEXmod = 0, CONmod = 0, INTmod = 0, WISmod = 0, CHAmod = 0;
	// More Character Stats
	int PP = 0, GP = 0, SP = 0, CP = 0, ARV = 0, score = 0, chkpnt = 0;
	// Skills
	int ATH = 0, ACRO = 0, SOH = 0, STEL = 0, ARCA = 0, HIST = 0, INVEST = 0, NATU = 0, RELIG = 0, ANIMHAND = 0, INSI = 0, MEDI = 0, PERCP = 0, SURV = 0, DECP = 0, INTIMI = 0, PERFO = 0, PERSU = 0;
	// Skills ADVs and DISs
	int STELdis = 0;
	// Weapons
	int Club = 0, Dagger = 0, Greatclub = 0, Handaxe = 0, Javelin = 0, LightHammer = 0, Mace = 0, Quarterstaff = 0, Sickle = 0, Spear = 0, LightCrossbow = 0, Dart = 0, Shortbow = 0, Sling = 0, Battleaxe = 0, Flail = 0, Glaive = 0, Greataxe = 0, Greatsword = 0, Halberd = 0, Lance = 0, Longsword = 0, Maul = 0, Morningstar = 0, Pike = 0, Rapier = 0, Scimitar = 0, Shortsword = 0, Trident = 0, WarPick = 0, Warhammer = 0, Whip = 0, Blowgun = 0, HandCrossbow = 0, HeavyCrossbow = 0, Longbow = 0, Net = 0;
	// Weapon Proficiencies
	int ClubMOD = 0, DaggerMOD = 0, GreatclubMOD = 0, HandaxeMOD = 0, JavelinMOD = 0, LightHammerMOD = 0, MaceMOD = 0, QuarterstaffMOD = 0, SickleMOD = 0, SpearMOD = 0, LightCrossbowMOD = 0, DartMOD = 0, ShortbowMOD = 0, SlingMOD = 0, BattleaxeMOD = 0, FlailMOD = 0, GlaiveMOD = 0, GreataxeMOD = 0, GreatswordMOD = 0, HalberdMOD = 0, LanceMOD = 0, LongswordMOD = 0, MaulMOD = 0, MorningstarMOD = 0, PikeMOD = 0, RapierMOD = 0, ScimitarMOD = 0, ShortswordMOD = 0, TridentMOD = 0, WarPickMOD = 0, WarhammerMOD = 0, WhipMOD = 0, BlowgunMOD = 0, HandCrossbowMOD = 0, HeavyCrossbowMOD = 0, LongbowMOD = 0, NetMOD = 0;
	// Instruments
	int Bagpipes = 0, Drum = 0, Dulcimer = 0, Flute = 0, Lute = 0, Lyre = 0, Horn = 0, PanFlute = 0, Shawm = 0, Viol = 0;
	// Armours
	int Padded = 0, Leather = 0, StuddedLeather = 0, Hide = 0, ChainShirt = 0, ScaleMail = 0, Breastplate = 0, HalfPlate = 0, RingMail = 0, ChainMail = 0, Splint = 0, Plate = 0, Shield = 0;
	// Armour Proficiencies
	int PaddedMOD = 0, LeatherMOD = 0, StuddedLeatherMOD = 0, HideMOD = 0, ChainShirtMOD = 0, ScaleMailMOD = 0, BreastplateMOD = 0, HalfPlateMOD = 0, RingMailMOD = 0, ChainMailMOD = 0, SplintMOD = 0, PlateMOD = 0, ShieldMOD = 0;
	// Magic Stuffs
	int HolySymbol = 0, DruidicFocus = 0, SpellBook = 0, ArcaneFocus = 0;
	// Consumables
	int HealthPotion = 1, MedicalKit = 0;
	int temp;
	int counter;
	//Booleans
	bool Raging = false;
	bool InitAdv = false;
	bool AttackAdv = false;

	// Character Strings
	std::string CLASS, NAME, RACE, BACKGROUND, enemy, equippedArmour, equippedWeapon, equippedShield, consumable; 
	std::string abilityOne = "None", abilityTwo = "None", abilityThree = "None", abilityFour = "None", abilityFive = "None", abilitySix = "None", abilitySeven = "None", abilityEight = "None", abilityNine = "None", abilityTen = "None", ability11 = "None", ability12 = "None", ability13 = "None", ability14 = "None", ability15 = "None", ability16 = "None", ability17 = "None", ability18 = "None", ability19 = "None", ability20 = "None";
	std::string PrimalPath = "None";
	std::string a;
	std::string choice;
	int dice;
};

#endif

