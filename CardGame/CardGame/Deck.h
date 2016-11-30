#include <iostream>
#include <fstream>
#include <vector>
#include "Card.h"
#include "Ruby.h"

#ifndef DECK_H
#define DECK_H


 class Deck: public std::vector<Card*> {
	 int top = 0;
	 
	
public:
	 Deck() = default;
	 //constructor to reconstruct deck from file
	 // Deck( const istream&, CardFactory* );
	 //returns and removes the top card from the deck
	 Card* draw();

	// ostream& saveDeck(ostream& out);
	 //need insertion operator to insert all cards the cards in the deck to an std::ostream

	 friend ostream& operator<<(ostream&, const Deck&);
 };
#endif 


