#include "CardFactory.h"



CardFactory* CardFactory::getFactory() {
	if (count == 0) {
		obj = new CardFactory();
	}

	return obj;
}

CardFactory::~CardFactory() {
	delete obj; count = 0;
}

CardFactory::getDeck() {
	/*
	Fill Deck with 104 cards
	20 Quartz
	18 Hematite
	16 Obsidian
	14 Malachite
	12 Turqouise
	10 Ruby
	8 Amethyst
	6 Emerald
	*/
}
CardFactory::CardFactory() {
    cout << "In construtor ..." << endl;
}
