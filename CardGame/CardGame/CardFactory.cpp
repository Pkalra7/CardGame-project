#include <iostream>
#include <algorithm>
#include <random>
#include <chrono> 
#include "CardFactory.h"
#include "Card.h"
#include "Ruby.h"
#include "Quartz.h"
#include "Hematite.h"
#include "Obsidian.h"
#include "Malachite.h"
#include "Turquoise.h"
#include "Amethyst.h"
#include "Emerald.h"

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

Deck CardFactory::getDeck() {

	for (int i = 0;i < 20;i++) {
		Card* q = new Quartz();
		newDeck.push_back(q);
	}

	for (int i = 0;i < 18;i++) {
		Card* h = new Hematite();
		newDeck.push_back(h);
	}

	for (int i = 0;i < 16; i++){
		Card* o=new Obsidian();
		newDeck.push_back(o);
	}

	for (int i = 0; i < 14; i++) {
		Card* m = new Malachite();
		newDeck.push_back(m);
	}

	for (int i = 0;i < 12; i++) {
		Card * t = new Turquoise();
		newDeck.push_back(t);
	}

	for (int i = 0;i < 10;i++) {
		Card * r = new Ruby();
		newDeck.push_back(r);
	}

	for (int i = 0; i < 8;i++) {
		Card* a = new Amethyst();
		newDeck.push_back(a);
	}

	for (int i = 0; i < 6; i++) {
		Card* e = new Emerald();
		newDeck.push_back(e);
	}


	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::shuffle(newDeck.begin(), newDeck.end(), std::default_random_engine(seed));
	
	return newDeck;
}
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
	



//Initilization of static const members of a class can't happen within that cpp....has to be done outside. 