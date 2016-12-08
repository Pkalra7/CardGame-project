#ifndef TRADEAREA_H
#define TRADEAREA_H


#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <string>
#include "Card.h"
#include "CardFactory.h"
using namespace std;

class TradeArea: public list<Card*> {
	int count = 0;
public:
    //adds the card to the trade area but it does not check if it is legal to place the card
	TradeArea& operator+=(Card*);
	TradeArea() = default;

    //returns true if the card can be legally added to the TradeArea
    bool legal(const Card*);
    //removes a card of the coorosponding gemstone name from the TradeArea
    Card* trade(const string&);
    //returns the number of cards in the trade area
    int numCards() const;
    //insertion operator to insert all the cards in the trade area to an ostream ->>>>
	friend ostream& operator<<(ostream& os, TradeArea& ta);
	

    //TradeArea constructor to reconstruct TradeArea from the file
    TradeArea(istream&, CardFactory* );

};
#endif // TRADEAREA_H
