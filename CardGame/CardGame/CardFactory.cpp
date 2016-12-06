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
CardFactory* CardFactory::factory = nullptr;
Deck CardFactory::newDeck;
int CardFactory::count = 0;



CardFactory::CardFactory() {
	count = 1;
}


CardFactory* CardFactory::getFactory() {
	if (count == 0) {
		factory = new CardFactory();
		cout << "cardfactory created" << endl;
		return factory;
	}
	else {
		std::cerr << "Cardfactory already exists:\n";
		exit(1);
	}
}

CardFactory::~CardFactory() {
	for (Deck::iterator iter = newDeck.begin(); iter != newDeck.end(); iter++)
	{
		delete *iter;
	}
}

Card* CardFactory::getCard(char cardtype) {
	Card * type = nullptr;

	switch (cardtype) {
	case('Q'):
		if (quartzCounter < 21) {
			type = new Quartz();
			newDeck.push_back(type);
			quartzCounter++;
		}
		return type;
		break;
	case('A'):
		if (amethystCounter < 9) {
			type = new Amethyst();
			newDeck.push_back(type);
			amethystCounter++;
		}
		return type;
		break;
	case('O'):
		if (obsidianCounter < 17) {
			type = new Obsidian();
			newDeck.push_back(type);
			obsidianCounter++;
		}
		return type;
		break;
	case('H'):
		if (hematiteCounter < 19) {
			type = new Hematite();
			newDeck.push_back(type);
			hematiteCounter++;
		}
		return type;
		break;
	case('M'):
		if (malachiteCounter < 15) {
			type = new Malachite();
			newDeck.push_back(type);
			malachiteCounter++;
		}
		return type;
		break;
	case('E'):
		if (emeraldCounter < 7) {
			type = new Emerald();
			newDeck.push_back(type);
			emeraldCounter++;
		}
		return type;
		break;
	case('R'):
		if (rubyCounter < 11) {
			type = new Ruby();
			newDeck.push_back(type);
			rubyCounter++;
		}
		return type;
		break;
	case('T'):
		if (turquoiseCounter < 13) {
			type = new Turquoise();
			newDeck.push_back(type);
			turquoiseCounter++;
		}
		return type;
		break;
	}

	}


Deck CardFactory::getDeck() {

	for (int i = 0;i < 20;i++) {
		Card* q = new Quartz();
		newDeck.push_back(q);
		quartzCounter = 20;
	}

	for (int i = 0;i < 18;i++) {
		Card* h = new Hematite();
		newDeck.push_back(h);
		hematiteCounter = 18;
	}

	for (int i = 0;i < 16; i++){
		Card* o=new Obsidian();
		newDeck.push_back(o);
		obsidianCounter = 16;
	}

	for (int i = 0; i < 14; i++) {
		Card* m = new Malachite();
		newDeck.push_back(m);
		malachiteCounter = 14;
	}

	for (int i = 0;i < 12; i++) {
		Card * t = new Turquoise();
		newDeck.push_back(t);
		turquoiseCounter = 12;
	}

	for (int i = 0;i < 10;i++) {
		Card * r = new Ruby();
		newDeck.push_back(r);
		rubyCounter = 10;
	}

	for (int i = 0; i < 8;i++) {
		Card* a = new Amethyst();
		newDeck.push_back(a);
		amethystCounter = 8;
	}

	for (int i = 0; i < 6; i++) {
		Card* e = new Emerald();
		newDeck.push_back(e);
		emeraldCounter = 6;
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