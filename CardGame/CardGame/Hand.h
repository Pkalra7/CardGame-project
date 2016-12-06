#ifndef HAND_H
#define HAND_H
#include <iostream>
#include <fstream>
#include <vector>
#include <deque>
#include "CardFactory.h"
class Hand : public deque<Card*>{
public:
    //Adds the card to the rear of the hand
    Hand& operator+=(Card*);
    //returns and removes the top card from the players hand
    Card* play();
    //returns but does not remove the top card from the players hand
    Card* top();
    //returns and removes the card at the given index
    Card* operator[](int);
    //Insertion operator goes here
	friend ostream& operator<<(ostream& os, Hand& h);
    //Hand Constructor reconstructed from file
    Hand(istream&, CardFactory* );
};
#endif // HAND_H
