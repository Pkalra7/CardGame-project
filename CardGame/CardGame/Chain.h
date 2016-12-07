#ifndef CHAIN_H
#define CHAIN_H


#include <iostream>
#include <fstream>
#include <vector>
#include "Chain_base.h"

template <Card> class Chain:public Chain_base {

public:
    //adds a card to chain
    //If the run-time type does not match the template type of the chain
    //Exception type of type IllegalType needs to be raised
    Chain& operator+=( Card* );
    //counts the number of cards in the chain and returns the number of coins according
    //to the function Card::getCardsPerCoin
    int sell();
    //Insertion operator to print chain on the ostream goes here
	friend ostream& operator<<(ostream& os, const Chain&);
    //Constructor of Chain. Reconstructed using istream
    Chain( const istream&, CardFactory* );
};

template <Card*>
Chain<Card*>& Chain<Card*>::operator+=(Card* card) {
	
}

template <Card*>
int Chain<Card*>::sell() {
	int numCards = t
	return 2;

}

template <Card*>
ostream& operator<<(ostream& os, const Chain<Card*>& ch) {
	os << typeid(Card*).name() << " ";
	for (Chain_base::iterator iter = ch.begin(); iter != ch.end(); iter++) {
		(*iter)->print(os);
		os << " ";
	}
	os << "/n";
	return os;
}
#endif // CHAIN_H
