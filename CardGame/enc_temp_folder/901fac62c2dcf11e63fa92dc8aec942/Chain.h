#ifndef CHAIN_H
#define CHAIN_H


#include <iostream>
#include <fstream>
#include <vector>

class Chain{

public:
    //adds a card to chain
    //If the run-time type does not match the template type of the chain
    //Exception type of type IllegalType needs to be raised
    //Chain<T>& operator+=( Card* );
    //counts the number of cards in the chain and returns the number of coins according
    //to the function Card::getCardsPerCoin
    int sell();
    //Insertion operator to print chain on the ostream goes here

    //Constructor of Chain. Reconstructed using istream
//    Chain( const istream&, CardFactory* );
};
#endif // CHAIN_H
