#pragma once
#ifndef EMERALD_H
#define EMERALD_H
#include "Card.h"

class Emerald:public Card{
public:
	Emerald();
	int getCardsPerCoin(int coins) const;
	void print(ostream & out) const;
	
};

#endif
