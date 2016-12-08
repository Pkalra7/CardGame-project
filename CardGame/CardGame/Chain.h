#ifndef CHAIN_H
#define CHAIN_H


#include <iostream>
#include <fstream>
#include <vector>
#include "Chain_base.h"

template <class T> class Chain:public Chain_base {

vector<T*> chain;
public:
    //adds a card to chain
    //If the run-time type does not match the template type of the chain
    //Exception type of type IllegalType needs to be raised
    Chain<T>& operator+=( T* );
    //counts the number of cards in the chain and returns the number of coins according
    //to the function Card::getCardsPerCoin
    int sell();
    //Insertion operator to print chain on the ostream goes here
	friend ostream& operator<<(ostream& os, const Chain<T>&);
    //Constructor of Chain. Reconstructed using istream
    Chain( const istream&, CardFactory* );

};
#endif // CHAIN_H

template <class T>
Chain<T>& Chain<T>::operator+=(T* s) {
	this->chain->push_back(s);
	return *this;
}

template <class T>
int Chain<T>::sell() {
	Card* c = chain[0];
	int coinsAwarded = 0;
	vector<int>cardsNeeded(4, 0);
	while (chain.size() > c.getCardsPerCoin(coinsAwarded)) {
		coinsAwarded++;
	}
	return coinsAwarded;
}


template <class T>
friend ostream& operator<<(ostream& os, const Chain<T*>& ch) {
	os << typeid(Card*).name() << " ";
	for (auto card : ch)
	{
		card->print(os);
		os << " ";
	}
	return os;
}
template <class T>
Chain<T>::Chain(const istream&, CardFactory*) {

}