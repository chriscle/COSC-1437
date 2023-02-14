#pragma once
#ifndef BATTLE_H
#define BATTLE_H

#include "Knight.h"
#include "MartialArtist.h"
#include "Mage.h"

class Battle
{
public:
	Battle(Knight& player);
	Battle(MartialArtist& player);
	Battle(Mage& player);
private:

};

#endif // !BATTLE_H