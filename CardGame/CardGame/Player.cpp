#include "Player.h"
#include <string>
#include <iostream>

using namespace std;

Player::Player(const string& name1){
    name = name1;
}
string Player::getName()const{
    return name;
}
int Player::getNumCoins()const{
    return numCoins;
}
int Player::getMaxNumChains()const{
    return maxChainCount;
}
int Player::getNumChains()const{
    return numChains;
}
/*Chain_base& Player::operator[](int i) {
	return chain
}*/
Player& Player::operator+=(const int coins) {
	numCoins += coins;
	return *this;
}
void Player::buyThirdChain(){
    if (numCoins >= 2){
        if (maxChainCount < 3){
            numCoins-= 2;
            //add new chain
            maxChainCount++;
            //non-zero?
            numChains++;
        }
    }
}
/*
ostream: file to write to
printHand: boolean to print entire hand or top card of hand 
*/
void Player::printHand(std::ostream& os, bool printHand) {
	if (!printHand) {
		
	}
	else {
		//os << hand << endl;
	}
}
ostream& operator<<(std::ostream& os, const Player& p) {
	os << p.getName() << endl;
	os << p.getNumCoins() << endl;
	// os << Chain c;
	return os;
}
//istream is constant here. I took it out since it does not work.
Player::Player(istream& is, CardFactory* c) {
	if (is) {
		is >> name;
		is >> numCoins;
	}
	else {
		cerr << "Couldn't open file!";
	}
	//is >> c;
}


