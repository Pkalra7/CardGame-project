#ifndef DECK_H
#define DECK_H


#include <iostream>
#include <fstream>
#include <vector>
#include "Card.h"
#include "Ruby.h"
#include "CardFactory.h"
class CardFactory;
class Deck: public std::vector<Card*> {
	 int top = 0;   ///

	 
	
public:
	 Deck();
	 //constructor to reconstruct deck from file
	 Deck(istream& is, CardFactory* cf);
	 //returns and removes the top card from the deck
	 Card* draw();
	 //insertion operator to insert all cards the cards in the deck to an std::ostream
	 friend ostream& operator<<(ostream&,  const Deck&);
	
	 //Deck getDeck();
 };
#endif 


