#ifndef PLAYER_H
#define PLAYER_H
#endif // PLAYER_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "Card.h"
#include "Chain.h"
#include "Hand.h"

class Player {
protected:
    int numCoins = 0;
    std::string name;
    Chain* chain;
    Hand* hand;
    int numChains = 0;
    int maxChainCount = 0;

public:
    //Constructor that creates a player with a given name
    Player(const std::string& );
    //Gets the name of the player
    std::string getName();
    //Gets the number of coins held by the player
    int getNumCoins();
    //Returns a 2 or 3
    int getMaxNumChains();
    //Returns the number of non-zero chains
    int getNumChains();
    //Returns the chain at position i
    Chain& operator[](int i);
    //Add a number of coins
    Player& operator+=( int );
    //Adds an empty third chain for the player in exchange for 2 coins
    //The functions reduces the coin count for the player by two.
    //If the player does not have enough coins then an exception NotEnoughCoins is thrown.
    void buyThirdChain();
    //Prints the top card of the players hand (if bool is false)
    //and prints the full hand (if bool is true) to the ostream
    void printHand(std::ostream&, bool);
    //Insertion operator to print Player to ostream goes here

    //Constructor which accepts istream and reconstructs Player
    Player( const istream&, CardFactory* );
};

