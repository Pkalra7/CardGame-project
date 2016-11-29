#pragma once
#ifndef AMETHYST_H
#define AMETHYST_H
#include "Card.h"

class Amethyst : public Card
{
public:
	Amethyst();
	int getCardsPerCoin(int coins) const;
	void print(ostream& out) const;
	
};
#endif