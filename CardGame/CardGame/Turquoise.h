#pragma once
#ifndef TURQUOISE_H
#define TURQUOISE_H

#include "Card.h"

class Turquoise:public Card
{
public:
	Turquoise();
	int getCardsPerCoin(int coins) const; 
	void print(ostream & out) const;
};
#endif
