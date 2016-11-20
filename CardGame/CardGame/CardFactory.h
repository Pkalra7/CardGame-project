#ifndef CARDFACTORY_H
#define CARDFACTORY_H
#endif // CARDFACTORY_H

#include <iostream>
#include <fstream>
#include <vector>
//Singleton class!
class CardFactory {

public:
    //returns a pointer to the only instance of CardFactory
    static CardFactory* getFactory();
    //Note that the 104 gemstone cards are always the same but their
    //order in the deck needs to be different every time.
    //Use std::shuffle to achieve this.
    Deck getDeck();

};
