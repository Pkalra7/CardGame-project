#ifndef CARD_H
#define CARD_H
#include <string>
#include <iostream>
using namespace std;

// CARD_H
class Card{
	protected:
	string cardName;
public:

    //how many cards are necessary to receive the corresponding number of coins
	virtual int getCardsPerCoin(int coins) const = 0;
    //returns the full name of the card
    string getName () const;
    //inserts the first character for the card into the output stream supplied as argument
	virtual void print(ostream& out) const= 0;
};

#endif 