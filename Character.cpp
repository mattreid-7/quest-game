//Includes anything tied to the character, so levelling up, creation, stat modifiers. 
//However, it will leave almost nothing in Game.cpp.
//Unless we make it so Game.h still holds all the variables but then we'll have to call to it all the time.
//Soooooo..
//Although, we could move the related variables over the their own class. So name, race and stuff would be variables initialised in Character.h

#include "stdafx.h"
#include "Character.h"


Character::Character()
{
}

Character::~Character()
{
}

//Functions
void Character::StatModifiers() {

}

void Character::CharacterSheet() {

}

void Character::Creation() {

}

void Character::Load() {
}

void Character::LvlUp() {

}

void Character::LvlUpCheck() {

}

void Character::ProficiencyList() {

}

void Character::Save() {
}

void Character::SkillModifiers() {

}

void Character::WeaponList() {

}

void Character::AbilityList() {

}

void Character::ArmourList() {

}
