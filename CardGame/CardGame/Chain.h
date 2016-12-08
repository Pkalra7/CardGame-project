#ifndef CHAIN_H
#define CHAIN_H


#include <iostream>
#include <fstream>
#include <vector>
#include "Chain_base.h"
#include "CardFactory.h"


template <class T> class Chain:public Chain_base {

	
public:
	vector<T*> chain;
    //adds a card to chain
	Chain<T>() = default;
    //If the run-time type does not match the template type of the chain
    //Exception type of type IllegalType needs to be raised
    Chain<T>& operator+=(const T* );
    //counts the number of cards in the chain and returns the number of coins according
    //to the function Card::getCardsPerCoin
    int sell();
    //Insertion operator to print chain on the ostream goes here
	friend ostream& operator<<(ostream& os, Chain<T>& ch);
    //Constructor of Chain. Reconstructed using istream
    Chain<T>(istream&, CardFactory* );

};
#endif // CHAIN_H

template<class T>
Chain<T>::Chain(istream & is, CardFactory *cf)
{
	string type;
	if (!is) {
		std::cerr << "Error opening file :\n";
		exit(1);
	}
	cout << "reach here at least" << endl;
	while (is >> type) {
		
		char c = type[0];
		cout << c << endl;
		T* toBeInserted =dynamic_cast<T*>(cf->getCard(c));
		this->chain.push_back(toBeInserted);
	}
}
template <class T>
Chain<T>& Chain<T>::operator+=(const T* s) {
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
ostream& operator<<(ostream & os, Chain<T>& ch)
{
	T *obj = new T();
	
	os << obj->getName();
	os << " ";

	for (auto card : ch.chain)
	{
		card->print(os);
		os << " ";
	}

	return os;
}