#include "Mage.h"


Mage::Mage() : Character()
{
	currHealth = 10;
	maxHealth = 10;

	currMana = 20;
	maxMana = 20;

	attackPower = 20;
}

Mage::Mage(std::string newName, int level, int exp) : Character(newName, level, exp)
{
	maxHealth = 10 * level;
	currHealth = maxHealth;

	maxMana = 20 * level;
	currMana = maxMana;

	attackPower = 20 * level;
}

Mage::~Mage()
{

}

void Mage::LevelUp()
{
	int thisCurrExp = GetCurrExp();
	int thisMaxExp = GetMaxExp();

	if (thisCurrExp >= thisMaxExp)
	{
		int newLevel = GetLevel() + 1;

		std::cout << "LEVEL UP: \n";
		std::cout << "After increasing your control over mana, you feel like you've reached a new level!\n";

		SetCurrExp(thisCurrExp - thisMaxExp);
		SetLevel(newLevel);

		SetMaxExp(newLevel);

		maxHealth = 10 * newLevel;
		currHealth = maxHealth;

		maxMana = 20 * newLevel;
		currMana = maxMana;

		attackPower = 20 * newLevel;
	}
}

void Mage::SetCurrHealth(int newCurrHealth)
{
	currHealth = newCurrHealth;
}

void Mage::SetCurrMana(int newCurrStam)
{
	currMana = newCurrStam;
}

int Mage::GetCurrHealth()
{
	return currHealth;
}

int Mage::GetCharacterClass()
{
	return 3;
}

int Mage::NormalAttack()
{
	if (currMana >= 1)
	{
		std::cout << GetName() << " gathers mana and shoots a fireball to deal " << attackPower << " damage." << std::endl;

		currMana -= 1;

		return attackPower;
	}
	
	else
	{
		std::cout << GetName() << " is out of mana and unable to do anything." << std::endl;

		return 0;
	}
}

int Mage::SpecialAttack()
{
	if (currMana >= 3)
	{
		std::cout << GetName() << " channels a large ammount of mana and shoots a lightning bolt from their staff, dealing " << (2 * attackPower) << " damage." << std::endl;

		currMana -= 3;

		return attackPower * 2;
	}

	else
	{
		std::cout << GetName() << " is out of mana and is unable to move their body.";

		return 0;
	}
}

void Mage::Rest()
{
	SetCurrHealth(maxHealth);
	SetCurrMana(maxMana);

	std::cout << "You study some magic tomes before heading to bed. \n";
}

void Mage::DisplayStatus()
{
	std::cout << " Name: " << GetName() << std::endl;
	std::cout << "Class: " + characterClass << std::endl;
	std::cout << "Level: " << GetLevel() << std::endl;
	std::cout << "  EXP: " << GetCurrExp() << "/" << GetMaxExp() << std::endl;
	std::cout << "   HP: " << currHealth << "/" << maxHealth << std::endl;
	std::cout << "   MP: " << currMana << "/" << maxMana << std::endl;
	std::cout << "  Atk: " << attackPower << std::endl;
}

void Mage::BattleStatus()
{
	std::cout << " Name: " << GetName() << std::endl;
	std::cout << "   HP: " << currHealth << "/" << maxHealth << std::endl;
	std::cout << "   MP: " << currMana << "/" << maxMana << std::endl;
}