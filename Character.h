#ifndef CHARACTER_H
#define CHARACTER_H

#include "Game.h"


class Character
{
public:
	Character();
	virtual ~Character();

	//Operators

	//Accessors
	
	//Functions
	void StatModifiers();
	void CharacterSheet();
	void Creation();
	void Load();
	void LvlUp();
	void LvlUpCheck();
	void ProficiencyList();
	void Save();
	void SkillModifiers();
	void WeaponList();
	void AbilityList();
	void ArmourList();

	//Variables

};
#endif
