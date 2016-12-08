#include "Player.h"
#include <string>
#include <iostream>

using namespace std;

Player::Player(const string& name1){
    name = name1;
}
string Player::getName() const{
    return name;
}
int Player::getNumCoins()const{
    return numCoins;
}
int Player::getMaxNumChains()const{
    return maxChainCount;
}
int Player::getNumChains()const{
	//only print number of non-zero chains?
    return chain.size();
}
Chain_base& Player::operator[](int i) {
	Chain_base* c = chain[i];
	return *c;
}
Player& Player::operator+=(const int coins) {
	numCoins += coins;
	return *this;
}
void Player::buyThirdChain(){
    if (numCoins >= 2){
        if (maxChainCount < 3){
            numCoins-= 2;
			Chain_base* cb = new Chain_base();
			//Add new empty chain
			chain.push_back(cb);
            maxChainCount++;
        }
    }
}
/*
ostream: file to write to
printHand: boolean to print entire hand or top card of hand 
*/
void Player::printHand(std::ostream& os, bool printFullHand) {
	if (!printFullHand) {
		hand.top()->print(os);
	}
	else {
		for (auto handCard : hand) {
			handCard->print(os);
		}
	}
}
template <class T>
ostream& operator<<(std::ostream& os, const Player& p) {
	os << p.getName() << endl;
	os << p.getNumCoins() << endl;
	for (auto tempChain : p.chain) {
		os << dynamic_cast<Chain<T>>tempChain;
	}
	return os;
}

Player::Player(istream& is, CardFactory* c) {
	if (is) {
		is >> name;
		is >> numCoins;
	}
	else {
		cerr << "Couldn't open file!";
	}
}


