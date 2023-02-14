#include "MartialArtist.h"


MartialArtist::MartialArtist() : Character()
{
	currHealth = 15;
	maxHealth = 15;

	currStamina = 10;
	maxStamina = 10;

	attackPower = 15;
}

MartialArtist::MartialArtist(std::string newName, int level, int exp) : Character(newName, level, exp)
{
	maxHealth = 15 * level;
	currHealth = maxHealth;

	maxStamina = 10 * level;
	currStamina = maxStamina;

	attackPower = 15 * level;
}

MartialArtist::~MartialArtist()
{

}

void MartialArtist::LevelUp()
{
	int thisCurrExp = GetCurrExp();
	int thisMaxExp = GetMaxExp();

	if (thisCurrExp >= thisMaxExp)
	{
		int newLevel = GetLevel() + 1;

		std::cout << "LEVEL UP: \n";
		std::cout << "After honing your martial arts through countless battles, you feel like you've reached a new level!\n";

		SetCurrExp(thisCurrExp - thisMaxExp);
		SetLevel(newLevel);

		SetMaxExp(newLevel);

		maxHealth = 15 * newLevel;
		currHealth = maxHealth;

		maxStamina = 10 * newLevel;
		currStamina = maxStamina;

		attackPower = 15 * newLevel;
	}
}

void MartialArtist::SetCurrHealth(int newCurrHealth)
{
	currHealth = newCurrHealth;
}

void MartialArtist::SetCurrStamina(int newCurrStam)
{
	currStamina = newCurrStam;
}

int MartialArtist::GetCurrHealth()
{
	return currHealth;
}

int MartialArtist::GetCharacterClass()
{
	return 2;
}

int MartialArtist::NormalAttack()
{
	std::cout << GetName() << " throws a punch and deals " << attackPower << " damage." << std::endl;

	return attackPower;
}


int MartialArtist::SpecialAttack()
{
	if (currStamina >= 3)
	{
		std::cout << GetName() << " unleashes an intense combo of kicks and punches, dealing " << (2 * attackPower) << " damage." << std::endl;

		currStamina -= 3;

		return attackPower * 2;
	}

	else
	{
		std::cout << GetName() << " is out of breath and cannot do anything at the moment." << std::endl;

		return 0;
	}
}

void MartialArtist::Rest()
{
	SetCurrHealth(maxHealth);
	SetCurrStamina(maxStamina);

	std::cout << "After patching yourself up, you sit down to meditate. \n";
}

void MartialArtist::DisplayStatus()
{
	std::cout << " Name: " << GetName() << std::endl;
	std::cout << "Class: " + characterClass << std::endl;
	std::cout << "Level: " << GetLevel() << std::endl;
	std::cout << "  EXP: " << GetCurrExp() << "/" << GetMaxExp() << std::endl;
	std::cout << "   HP: " << currHealth << "/" << maxHealth << std::endl;
	std::cout << "   SP: " << currStamina << "/" << maxStamina << std::endl;
	std::cout << "  Atk: " << attackPower << std::endl;
}

void MartialArtist::BattleStatus()
{
	std::cout << " Name: " << GetName() << std::endl;
	std::cout << "   HP: " << currHealth << "/" << maxHealth << std::endl;
	std::cout << "   SP: " << currStamina << "/" << maxStamina << std::endl;
}