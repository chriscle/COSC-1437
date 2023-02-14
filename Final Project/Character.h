#pragma once
#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>

class Character
{
public:
	Character();
	Character(std::string newName, int level, int exp);
	~Character();

	std::string GetName();
	virtual void LevelUp();
	int GetLevel();
	void SetLevel(int newLevel);
	void SetMaxExp(int newMaxExp);
	int GetMaxExp();
	void SetCurrExp(int newCurrExp);
	int GetCurrExp();

	virtual void Rest() = 0;
	virtual void DisplayStatus() = 0;
	virtual void BattleStatus() = 0;
	virtual int NormalAttack() = 0;
	virtual int SpecialAttack() = 0;

protected:
	//bool CheckIfPlayer();

private:
	std::string name;
	int level;
	int currExp;
	int maxExp;
	bool isPlayer;
};

#endif // !1