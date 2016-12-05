#include "TradeArea.h"

TradeArea::TradeArea(istream& is, CardFactory* cf) {
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

TradeArea& TradeArea::operator+=(Card* card) {
	this->push_back(card);
	return *this;
}

bool TradeArea::legal(const Card* card) {
	for (TradeArea::iterator iter = this->begin(); iter != this->end();iter++) {
		if((*iter)->getName() == card->getName())
		{return true;}
	}
}

Card* TradeArea::trade(const string& cardType) {
	for (auto toBeRemoved : *this) {
		if (toBeRemoved->getName() == cardType) {
			this->remove(toBeRemoved);
			return toBeRemoved;
		}
	}
}

int TradeArea::numCards() const{
	return this->size();
}

ostream& operator<<(ostream& os, TradeArea& ta)
{
	for (auto card : ta) {
		card->print(os);
		os << "\n";
	}
	return os;
}







