#ifndef CARD_H
#define CARD_H
#endif // CARD_H
class Card{

public:
    Card();
    //how many cards are necessary to receive the corresponding number of coins
    virtual int getCardsPerCoin( int coins );
    //returns the full name of the card
    virtual string getName();
    //inserts the first character for the card into the output stream supplied as argument
    virtual void print(const ostream& out);
};

