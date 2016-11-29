#include "Obsidian.h"

Obsidian::Obsidian() {
	cardName = "Obsidian";
}

void Obsidian::print(ostream& out) const{
	char obsid = 'O';
	out.clear();
	out.put(obsid);
}

int Obsidian::getCardsPerCoin(int coins) const{

	//Obsidian 3 5 7 8

	int c = coins;
	
	switch (c) {
	case(0):
		return 0;
		break;
	case(1):
		return 3;
		break;
	case(2):
		return 5;
		break;
	case(3):
		return 7;
		break;
	case(4):
		return 8;
		break;
	default:
		return 8;
		break;
	}
}
