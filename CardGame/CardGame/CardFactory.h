#ifndef CARDFACTORY_H
#define CARDFACTORY_H
#endif // CARDFACTORY_H

#include <iostream>
#include <fstream>
#include <vector>
#include "Deck.h"



//Singleton class!
class CardFactory {
	static int count;
	CardFactory();
	Deck newDeck;
public:

    //returns a pointer to the only instance of CardFactory
    static CardFactory* getFactory();
	~CardFactory();
	//Use std::shuffle for returning a reaaranged deck each time getDeck is called
	Deck& getDeck();


	
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
 
	

};
