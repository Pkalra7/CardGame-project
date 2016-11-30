#include "Amethyst.h"

Amethyst::Amethyst() : Card() {
	
	cardName = "Amethyst";
}

void Amethyst::print(ostream& out) const{
	out << "a"; 
}

int Amethyst::getCardsPerCoin(int coins) const {

	//Amethyst 2 3 4 5

	int c = coins;

	switch (c) {
	case(0):
		return 0;
		break;
	case(1):
		return 2;
		break;
	case(2):
		return 3;
		break;
	case(3):
		return 4;
		break;
	case(4):
		return 5;
		break;
	default:
		return 5;
		break;
	}

}