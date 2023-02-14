#pragma once
#ifndef MAGE_H
#define MAGE_H

#include "Character.h"

class Mage : public Character
{
public:
	Mage();
	Mage(std::string newName, int level, int exp);
	~Mage();

	void LevelUp();
	void SetCurrHealth(int newCurrHealth);
	void SetCurrMana(int newCurrStam);

	int GetCurrHealth();
	int GetCharacterClass();

	int NormalAttack();
	int SpecialAttack();
	void Rest();
	void DisplayStatus();
	void BattleStatus();

private:
	int currHealth;
	int maxHealth;

	int currMana;
	int maxMana;

	int attackPower;
	std::string characterClass = "Mage";
};
#endif // !MAGE_H