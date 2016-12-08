#pragma once
#ifndef RUBY_H
#define RUBY_H
#include "Card.h"


class Ruby: public Card
{
public:
	Ruby();
	int getCardsPerCoin(int coins) const;
	void print(ostream & out) const;
};

#endif
