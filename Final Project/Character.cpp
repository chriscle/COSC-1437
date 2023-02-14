#include "Character.h"

//Default constructor for Character object
Character::Character()
{
	name = "Jeff";
	level = 1;
	currExp = 0;
	maxExp = 50;
	isPlayer = false;
}

//Overloaded constructor for Character object
Character::Character(std::string newName, int level, int exp = 0) 
{
	name = newName;
	this->level = level;
	currExp = exp;
	maxExp = 50 * level;
}

//Deconstructor for Character object
Character::~Character()
{
	//std::cout << "Character deleted";
}

//returns the character's name
std::string Character::GetName()
{
	return name;
}

//when currExp exceeds maxExp, the character's level will increase by 1
void Character::LevelUp()
{
	if (currExp >= maxExp)
	{
		currExp -= maxExp;
		level += 1;
		maxExp = 50 * level;
	}
}

int Character::GetLevel()
{
	return level;
}

void Character::SetLevel(int newLevel)
{
	level = newLevel;
}


//Will increase max exp based on character's level
void Character::SetMaxExp(int currLevel)
{
	maxExp = 50 * currLevel;
}


//returns the required amount of exp a character needs to level up
int Character::GetMaxExp()
{
	return maxExp;
}

//updates the character's current exp
void Character::SetCurrExp(int newCurrExp)
{
	currExp = newCurrExp;
}

//returns the character's current exp
int Character::GetCurrExp()
{
	return currExp;
}

/*
//returns true if the object is a user created character and false if it's a randomly generated enemy
bool Character::CheckIfPlayer()
{
	return isPlayer;
}
*/