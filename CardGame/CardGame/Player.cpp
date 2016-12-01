#include "Player.h"
#include "Chain.cpp"

#include <string>

string name;
int numCoins;
int numChains;

Player::Player( const istream&, CardFactory* ){

}

Player::Player(string name){
    this.name = name;
    numChains = 2;
}

Player::getName(){
    return name;
}

Player::buyThirdChain(){
    if (numCoins >= 2){
        numCoins -= 2;
    }
    else {
        throw NotEnoughCoins(std::string("Not enough coins (Need at least 2): ") + c);
    }
}
