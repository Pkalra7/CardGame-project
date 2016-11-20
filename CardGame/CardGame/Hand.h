#ifndef HAND_H
#define HAND_H
#endif // HAND_H

#include <iostream>
#include <fstream>
#include <vector>
class Hand {
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

    //Hand Constructor reconstructed from file
    Hand( const istream&, CardFactory* );

};

