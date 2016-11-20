#ifndef DISCARDPILE_H
#define DISCARDPILE_H
#endif // DISCARDPILE_H

#include <iostream>
#include <fstream>
#include <vector>

class DiscardPile{

public:
    //Discards the card to the pile
    //DiscardPile& operator+=( Card* )

    //returns and removes the top card from the discard pile
    Card* pickUp();
    //returns but does not remove the top card from the discard pile
    Card* top();
    //insert all cards in the DiscardPile to an std::ostream
    void print( std::ostream& );
    //insertion operator to insert only the top card of the discard pile to an std::ostream

    //constructor which accepts an istream and reconstructs the discard pile from the file
    DiscardPile( const istream&, CardFactory* );
};
