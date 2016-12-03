//SaveGame.cpp


#include "SaveGame.h"
//SaveGame::SaveGame(){}

/*bool SaveGame::saveDeck(Deck<Card> deck){
    std::ofstream outputFile;
    outputFile.open("SaveDeck.txt");
    if(outputFile.fail()){return false;}
    for (unsigned int i = 0; i < deck.size(); i++){
        deck[i]->print(outputFile);
        outputFile << ",";
    }
    return true;
}
bool SaveGame::loadDeck(){
    std::ifstream inputFile;
    inputFile.open("SaveDeck.txt");
    if(inputFile.fail()){return false;}
    Deck<Card> tempDeck;
    std::string line;
    while(getline(inputFile,line,',')){
        std::shared_ptr<Card> card = makeCard();
        tempDeck.addCard(card);
    }
    for (unsigned int i=0; i < tempDeck.size(); i++){
        deck.addCard(tempDeck[i]);
    }
    return true;
}
bool SaveGame::loadPlayers(){
    std::ifstream inputFile;
    inputFile.open("SavePlayers.txt");
    if(inputFile.fail()){return false;}
    std::string input;
    getline(inputFile,input);
    input.erase(input.find("<players>"), input.find(">") + 1);
    getline(inputFile,input);
    input.erase(input.find("Number of Players;"), input.find(":") + 1);
    /* For each player... */
   /* for (int pl = 0; pl < playerCount; pl++){
        /* Get Name: */
       /* getline(inputFile, input);
        input.erase(input.find(":"));
        std::string name = input;
        getline(inputFile,input);
        getline(inputFile,input);
        //Get Number of Cards
        int numCards = 0;
        while (input.size() > 0){
            input.erase(0, input.find("") + 2)
            numCards++;
        }
    }*/
//}
