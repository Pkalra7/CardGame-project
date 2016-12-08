#pragma once
#ifndef HEMATITE_H
#define HEMATITE_H


#include "Card.h"

class Hematite : public Card {
	
	public:
		Hematite();
		int getCardsPerCoin(int coins) const;
		void print(ostream & out) const;

};
#endif//HEMATITE