#ifndef TRADEAREA_H
#define TRADEAREA_H
#endif // TRADEAREA_H

#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <string>

class TradeArea{
public:
    //adds the card to the trade area but it does not check if it is legal to place the card
    //TradeArea& operator+=( Card* )

    //returns true if the card can be legally added to the TradeArea
    bool legal(Card*);
    //removes a card of the coorosponding gemstone name from the TradeArea
    Card* trade(string);
    //returns the number of cards in the trade area
    int numCards();

    //insertion operator to insert all the cards in the trade area to an ostream ->>>>

    //TradeArea constructor to reconstruct TradeArea from the file
    TradeArea(const istream&, CardFactory* );

};

