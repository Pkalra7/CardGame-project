#include <iostream>
#include "Deck.h"
#include "CardFactory.h"


using namespace std;


ostream& operator<<(ostream& os, const Deck& deck) {
	for (auto card : deck) {
		card->print(os);
		os << "\n";
	}

	os << deck.top << endl;
	return os;
}
int main(int narg, char *args[]) {

	//Testing to see if Get Deck works and to see if it has all the cards we need

	CardFactory * cf = CardFactory::getFactory();


	Deck dec = cf->getDeck();

	int i = 1;

	Card* removed = dec.draw();
	for (Deck::iterator iter = dec.begin(); iter != dec.end(); iter++)
	{
		cout << i << ". " << (*iter)->getName() << " " << endl;
		i++;
	}
	cout << removed->getName();


	ofstream outfile("deckkkk.txt");
	outfile << dec << endl;
	outfile.close();

	ifstream infile("deckkkk.txt");

	Deck test(infile, cf);

	infile.close();

	for (Deck::iterator iter = test.begin(); iter != test.end(); iter++)
	{
		cout << i << ". " << (*iter)->getName() << " " << endl;
		i++;
	}



	int s;
	cin >> s;




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