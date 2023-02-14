#pragma once
#ifndef KNIGHT_H
#define KNIGHT_H

#include "Character.h"

class Knight : public Character
{
public:
	Knight();
	Knight(std::string newName, int level, int exp);
	~Knight();

	void LevelUp();
	void SetCurrHealth(int newCurrHealth);
	void SetCurrStamina(int newCurrStam);

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

	int currStamina;
	int maxStamina;

	int attackPower;
	std::string characterClass = "Knight";
	//bool isBlocking = false;
};

#endif // !1