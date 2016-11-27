#pragma once
#ifndef TURQUOISE_H
#define TURQUOISE_H

#include "Card.h"

class Turquoise:public Card
{
public:
	Turquoise();
	int getCardsPerCoin(int coins); 
	void print(ostream & out);
};
#endif
