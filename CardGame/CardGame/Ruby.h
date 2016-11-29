#pragma once
#ifndef HEMATITE_H
#define HEMATITE_H
#include "Card.h"


class Ruby: public Card
{
public:
	Ruby();
	int getCardsPerCoin(int coins) const;
	void print(ostream & out) const;
};

#endif
