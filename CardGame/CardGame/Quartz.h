#pragma once
#ifndef QUARTZ_H
#define QUARTZ_H
#include "Card.h"

class Quartz :public Card {
public:
	Quartz();
	int getCardsPerCoin(int coins);
	virtual string getName();
	void print(ostream & out);
	
};
#endif