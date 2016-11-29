#include "CardFactory.h"
#include <iostream>
#include "Card.h"

using namespace std;

int CardFactory::count = 0;

CardFactory::CardFactory() {
	count = 1;
}


CardFactory* CardFactory::getFactory() {
	if (count == 0) {
		CardFactory * obj = new CardFactory();
		cout << "cardfactory created" << endl;
		return obj;
	}
}

CardFactory::~CardFactory() {
	 
}

Deck& CardFactory::getDeck() {

	for (vector<Card>::iterator iter= newDeck.begin())

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