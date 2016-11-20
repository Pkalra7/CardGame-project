#ifndef SAVEGAME_H
#define SAVEGAME_H
#endif // SAVEGAME_H

#include <iostream>
#include <fstream>
#include <vector>

class SaveGame{

    /* Stores the current players in the game */
    std::vector<Player> players;
    /* Stores the current card positions in the game */
    Table table;
    /* Stores the current deck used in the game */
    Deck<Card> deck;


public:
    /* Constructor */
        SaveGame();
    /* Saves the players who are playing in the game into SavePlayers.txt */
        bool savePlayers(std::vector<Player> players);
    /* Saves the positions of all the cards on the table into a SaveTable.txt */
        bool saveTable(Table table);
    /* Saves the deck being used into SaveDeck.txt */
        bool saveDeck(Deck<Card> deck);
    /* Load the deck being used from SaveDeck.txt */
        bool loadDeck();
    /* Load the players from SavePlayers.txt */
        bool loadPlayers();
};
