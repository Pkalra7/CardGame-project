#include "Player.h"
#include <string>
#include <iostream>
#include "Card.h"
#include "Chain.h"

using namespace std;

Player::Player(const string& name1){
    name = name1;
}
string Player::getName(){
    return name;
}
int Player::getNumCoins(){
    return numCoins;
}

int Player::getMaxNumChains(){
    return maxChainCount;
}
int Player::getNumChains(){
    return numChains;
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
Player& Player::operator+=(int coins){
    numCoins += coins;
    Player newPlayer(name);
    newPlayer.numCoins = numCoins;
    return newPlayer;
}
