#pragma once
#ifndef OBSIDIAN_H
#define OBSIDIAN_H
#include "Card.h"

class Obsidian:public Card
{
public:
	Obsidian();
	int getCardsPerCoin(int coins);
	virtual string getName();
	void print(ostream & out);
	
};

#endif