#ifndef CARDFACTORY_H
#define CARDFACTORY_H


#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Deck.h"

class Deck;
//Singleton class!
class CardFactory {
	static int count;
	CardFactory();
	static Deck newDeck;
	static CardFactory* factory;
	int rubyCounter = 1;
	int quartzCounter = 1;
	int hematiteCounter = 1;
	int malachiteCounter = 1;
	int obsidianCounter = 1;
	int turquoiseCounter = 1;
	int amethystCounter = 1;
	int emeraldCounter = 1;

public:
	
    //returns a pointer to the only instance of CardFactory
    static CardFactory* getFactory();
	~CardFactory();

	Card* getCard(char type);
	//Use std::shuffle for returning a reaaranged deck each time getDeck is called
	Deck getDeck();
 
	

};
#endif