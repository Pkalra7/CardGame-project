#include "DiscardPile.h"

DiscardPile::DiscardPile(istream& is, CardFactory* cf) {
	char type;
	if (!is) {
		std::cerr << "Error opening file :\n";
		//exit(1);
	}

	while (is >> type) {
		Card* toBeInserted = cf->getCard(type);
		this->push_back(toBeInserted);
	}
}

DiscardPile&  DiscardPile::operator+=(Card* card) {
	this->push_back(card);
	return *this;
}

Card* DiscardPile::pickUp() {
	Card* card = this->back();
	this->pop_back();
	return card;
}

Card* DiscardPile::top() {
	Card * card = this->back();
	return card;
}

void DiscardPile::print(ostream& os) {
	for (auto cardtype : *this) {
		cardtype->print(os);
		os << "\n";
	}
}
ostream& operator<<(ostream& os, DiscardPile& dp) {
	os << dp.top();
}