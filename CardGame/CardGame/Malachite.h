#pragma once
#ifndef MALACHITE_H
#define MALACHITE_H
#include "Card.h"

class Malachite:public Card
{
public:
	Malachite();
	int getCardsPerCoin(int coins);
	virtual string getName();
	void print(ostream & out);
	i
};
#endif
