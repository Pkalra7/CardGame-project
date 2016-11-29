#ifndef DECK_H
#define DECK_H
#endif // DECK_H

#include <iostream>
#include <fstream>
#include <vector>
#include "Card.h"

 class Deck : public std::vector<Card> {
	 int top = 0;
	 Deck* deck;


public:
	 Deck();
	 //constructor to reconstruct deck from file
	 // Deck( const istream&, CardFactory* );
	 //returns and removes the top card from the deck
	 Card* draw();
	 //need insertion operator to insert all cards the cards in the deck to an std::ostream
	 //ostream& operator<<(ostream& os);
 };


