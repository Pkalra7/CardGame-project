int main(int narg, char *args[]){
    Deck<shared_ptr<Card>>deck;
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
	return 0;
}
