#ifndef CARDFACTORY_H
#define CARDFACTORY_H
#endif // CARDFACTORY_H

#include <iostream>
#include <fstream>
#include <vector>
#include <deck>
//Singleton class!
class CardFactory {
	static int count;
	static CardFactory *obj;
	CardFactory();
	~ CardFactory();

	//Need a deck here, not sure of how to implement a templated one.
	//deck newDeck;
public:
    //returns a pointer to the only instance of CardFactory
    static CardFactory* getFactory();
    //Note that the 104 gemstone cards are always the same but their
    //order in the deck needs to be different every time.
    //Use std::shuffle to achieve this.

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
    Deck getDeck();
	

};
