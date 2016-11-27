#ifndef CARD_H
#define CARD_H
#include <string>
#include <iostream>
using namespace std;

// CARD_H
class Card{
protected:
	std::string cardName;
public:
	Card();
    //how many cards are necessary to receive the corresponding number of coins
	virtual int getCardsPerCoin(int coins) = 0;
    //returns the full name of the card
	virtual string getName();
    //inserts the first character for the card into the output stream supplied as argument
	virtual void print(ostream& out) = 0;
};

#endif 