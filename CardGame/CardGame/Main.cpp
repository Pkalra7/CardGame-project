#include <iostream>
#include "Deck.h"
#include "CardFactory.h"
#include "Chain.h"
#include "Obsidian.h"
#include "Turquoise.h"



using namespace std; 


int main(int narg, char *args[]){

	//Testing to see if Get Deck works and to see if it has all the cards we need
	
	CardFactory * cf = CardFactory::getFactory();
	
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

	ifstream infile("deckkkk.txt");
	int i = 1;
	Deck test(infile, cf);

	infile.close();

	
	Card* removed = test.draw();

	for (Deck::iterator iter = test.begin(); iter != test.end(); iter++)
	{
		cout << i << ". " << (*iter)->getName() << " " << endl;
		i++;
	}

	removed->print(cout);

	Obsidian* tl = (dynamic_cast<Obsidian*>(removed));

	tl->print(cout);

	Chain<Obsidian> *cl = new Chain<Obsidian>();
	cl->chain.push_back(tl);
	Chain<Obsidian> cl1(*cl);
	

	cout << "Obsidian has been removed and added to chain" << endl;
	
	//cout << test;
	cout << cl1;

	cout << " " << endl;

	cout << " now writing to chain.txt" << endl;

	ofstream chaintest("Chain.txt");
	chaintest << cl1;
	chaintest.close();

	cout << "now reading from chain.txt" << endl;

	ifstream intest("Chain.txt");

	Chain<Obsidian>*el=new Chain<Obsidian>(intest, cf);

	cout << "about to print now" << endl;
	
	cout << *el;
	

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
