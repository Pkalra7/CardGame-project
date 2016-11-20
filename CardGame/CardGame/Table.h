#ifndef TABLE_H
#define TABLE_H
#endif // PLAYER_H

#include <iostream>
#include <fstream>
#include <vector>

//Table will manage all the game components. It will hold two objects of type Player, the Deck and the
//DiscardPile, as well as the TradeArea.
class Table{

public:
    //Returns true when a player has won. The name of the player is returned by reference
    //The winning condition is that all cards from the deck must have been picked up
    //and then the player with the most cards wins
    bool win( std::string& );
    //Prints the complete table with all content. Intended for serialization to the file.
    void print(std::ostream&);
    //Insertion operator goes here

    //Table constructor with istream used to reconstruct Table
    Table( const istream&, CardFactory* );
    //It says Player( const istream&, CardFactory* ) in the pdf...
};
