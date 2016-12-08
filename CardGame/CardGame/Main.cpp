#include <iostream>
#include "Deck.h"
#include "CardFactory.h"
#include "Chain.h"
#include "Obsidian.h"
#include "Turquoise.h"
#include "Player.h"
#include "TradeArea.h"



using namespace std; 


int main(int narg, char *args[]){
	cout << "Hello";
	TradeArea ta;
	bool buyChainChoice, sellChoice, discardChoice;
	int sellChainChoice;
	vector<Player> players;
	Player p1("Ishaaq");
	Player p2("Pritish");
	players.push_back(p1);
	players.push_back(p2);
	CardFactory * cf = CardFactory::getFactory();
	Deck d = cf->getDeck();
	for (auto p : players) {
		for (int i = 0; i < 5; i++) {
			p.hand += d.draw();
			cout << i << endl;
		}
	}
	int j;
	//Printing each hand to test. Hand is busted.
	for (auto p : players) {
		for (int i = 0; i < 5; i++) {
			//Hand is busted
			Card *c = p.hand.top();
			cout << p.getName() << endl;
			cin >> j;
		}
	}
	for (auto p : players) {
		//display table

		//If Player has 3 coins and two chains and decides to buy extra chain
		cout << p.getName() << ", would you like to buy a chain? (0 or 1)" << endl;
		cin >> buyChainChoice;
		p.buyThirdChain();
		//Player draws top card from Deck
		p.getHand() += d.draw();
		//If TradeArea is not empty
		if (ta.numCards() != 0) {
			//Add gemstone cards from the TradeArea to chains or discard them.
			for (auto ch : p.chain) {
				for (auto card1 : ta) {
					//enum type bullshit
					//ch += card1;
				}
			}
		}
		//Play topmost card from Hand.
		//p.getHand().play();
		//If chain is ended, cards for chain are removed and player receives coin(s).
		cout << p.getName() << ", would you like to sell your chain? (0 or 1)" << endl;
		cin >> sellChoice;
		if (sellChoice) {
			cout << p.getName() << ", which chain would you like to sell (1,2 or 3 if you have 3 chains)" << endl;
			cin >> sellChainChoice;
			//How to redirect to chain, not chain base?
			//p1+=p1.chain[sellChainChoice]->sell();
		}
		//If player decides to show hand, select random card, discard
		cout << p.getName() << ", would you like to discard a card?" << endl;
		cin >> discardChoice;
		if (discardChoice) {
			//Show the player's full hand and player selects an arbitrary card
		}
	
		
	}




	//Testing to see if Get Deck works and to see if it has all the cards we need
	
	
	
	/*Deck dec = cf->getDeck();

	int i= 1;

	Card* removed = dec.draw();
	for (Deck::iterator iter = dec.begin(); iter != dec.end(); iter++)
	{
		cout << i << ". " << (*iter)->getName() << " " << endl;
		i++;
	}
	cout << removed->getName();
	

	ofstream outfile("deckkkk.txt");
	outfile << dec << endl;
	outfile.close();*/

	
/*
	cout << " " << endl;

	cout << " now writing to chain.txt" << endl;

	ofstream chaintest("Chain.txt");
	chaintest << cl1;
	chaintest.close();

	cout << "now reading from chain.txt" << endl;

	ifstream intest("Chain.txt");

	//Chain<Obsidian>*el=new Chain<Obsidian>(intest, cf);

	cout << "about to print now" << endl;
	*/

	//int s;
	//cin >> s;



	

	
    /*Deck<shared_ptr<Card>>deck;
    Table table;
    int noPlayers=0;
    int persistentPlayerTurn=0;
    String playername;
    Player** players;
    //opens the files specified by the argument and loads game data
    if (narg >1){
        //open file and check for errors
        ifstream ifs;
        ifs.open(args[1]);
        if (ifs.fail())
        {
            cout<<"Can't open " << args[1];
            string hold;
            cin >> hold;
            return 2;
        }
        ifs >> table;
        ifs >> noPlayers;
        players = new Player*[noPlayers];
        for {int pl=0; pl<noPlayers; ++pl}{
            players[pl] = new Player("","");
            ifs >> *players[pl]; //will load player
        }
        ifs >> deck;
        ifs >> persistentPlayerTurn;
        ifs.close();
    }
    else{
        cout << "Please enter player 1's name" << endl;
        cin >> playername;
        players[0] = new Player

    }
*/	return 0;
}
