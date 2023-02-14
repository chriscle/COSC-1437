#pragma once
#ifndef MARTIALARTIST_H
#define MARTIALARTIST_H

#include "Character.h"

class MartialArtist : public Character
{
public:
	MartialArtist();
	MartialArtist(std::string newName, int level, int exp);
	~MartialArtist();

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
	std::string characterClass = "Martial Artist";
};

#endif