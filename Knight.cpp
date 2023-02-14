#include "Knight.h"

Knight::Knight() : Character()
{
	currHealth = 20;
	maxHealth = 20;

	currStamina = 10;
	maxStamina = 10;

	attackPower = 10;
}

Knight::Knight(std::string newName, int level, int exp) : Character(newName, level, exp)
{
	maxHealth = 20 * level;
	currHealth = maxHealth;

	maxStamina = 10 * level;
	currStamina = maxStamina;

	attackPower = 10 * level ;
}

Knight::~Knight()
{

}

void Knight::LevelUp()
{
	int thisCurrExp = GetCurrExp();
	int thisMaxExp = GetMaxExp();

	if (thisCurrExp >= thisMaxExp)
	{
		int newLevel = GetLevel() + 1;

		std::cout << "LEVEL UP: \n";
		std::cout << "After swinging your sowrds countless times, you feel like you've reached a new level!\n";

		SetCurrExp(thisCurrExp - thisMaxExp);
		SetLevel(newLevel);

		SetMaxExp(newLevel);

		maxHealth = 20 * newLevel;
		currHealth = maxHealth;

		maxStamina = 10 * newLevel;
		currStamina = maxStamina;

		attackPower = 10 * newLevel;
	}
}

void Knight::SetCurrHealth(int newCurrHealth)
{
	currHealth = newCurrHealth;
}

void Knight::SetCurrStamina(int newCurrStam)
{
	currStamina = newCurrStam;
}

int Knight::GetCurrHealth()
{
	return currHealth;
}

int Knight::GetCharacterClass()
{
	return 1;
}

int Knight::NormalAttack()
{
	std::cout << GetName() << " stabs with the sword and deals " << attackPower << " damage." << std::endl;

	return attackPower;
}

int Knight::SpecialAttack()
{
	if (currStamina >= 3)
	{
		std::cout << GetName() << " leaps up and slashes down with the sword, dealing " << (2 * attackPower) << " damage." << std::endl;

		currStamina -= 3;

		return attackPower * 2;
	}

	else
	{
		std::cout << GetName() << " is too tired to swing the sword." << std::endl;

		return 0;
	}
}


void Knight::Rest()
{
	SetCurrHealth(maxHealth);
	SetCurrStamina(maxStamina);

	std::cout << "You take off your armor and rest for a day. \n";
}

void Knight::DisplayStatus()
{
	std::cout << " Name: " << GetName() << std::endl;
	std::cout << "Class: " + characterClass << std::endl;
	std::cout << "Level: " << GetLevel() << std::endl;
	std::cout << "  EXP: " << GetCurrExp() << "/" << GetMaxExp() << std::endl;
	std::cout << "   HP: " << currHealth << "/" << maxHealth << std::endl;
	std::cout << "   SP: " << currStamina << "/" << maxStamina << std::endl;
	std::cout << "  Atk: " << attackPower << std::endl;
}

void Knight::BattleStatus()
{
	std::cout << " Name: " << GetName() << std::endl;
	std::cout << "   HP: " << currHealth << "/" << maxHealth << std::endl;
	std::cout << "   SP: " << currStamina << "/" << maxStamina << std::endl;
}