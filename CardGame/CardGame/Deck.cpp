#include "Deck.h"

Deck::Deck() {
}

Deck::Deck(istream& is, CardFactory* cf){
	char type;
	if (!is) {
		std::cerr << "Error opening file :\n";
		exit(1);
	}

	while (is >> type) {
		Card* toBeInserted = cf->getCard(type);
		this->push_back(toBeInserted);
	}
}


 Card* Deck::draw() {
	 
		Card* toBeDrawn = this->back();
		this->pop_back();
		return toBeDrawn;
	
}

ostream& operator<<(ostream& os, const Deck& deck) {
	for (auto card : deck) {
		card->print(os);
		os << "\n";
	}
	return os;
}


