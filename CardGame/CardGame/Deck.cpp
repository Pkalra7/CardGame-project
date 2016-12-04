#include "Deck.h"

Deck::Deck() {
}

Deck::Deck(istream& is, CardFactory* cf){
	std::string type;
	if (!is) {
		std::cerr << "Error opening file :\n";
		//exit(1);
	}

	while (is >> type) {
		std::cout << type << endl;
	}
}



Card* Deck::draw() {
	if (top >= 0) {
		Card* toBeDrawn = this->back();
		this->pop_back();
		this->top--;
		return toBeDrawn;
	}
}


