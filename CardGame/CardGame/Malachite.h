#pragma once
#ifndef MALACHITE_H
#define MALACHITE_H
#include "Card.h"

class Malachite:public Card
{
public:
	Malachite();
	int getCardsPerCoin(int coins)const ;
	void print(ostream & out) const;
};
#endif
