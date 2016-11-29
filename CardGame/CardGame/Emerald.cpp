#include "Emerald.h"

Emerald::Emerald() : Card() {

	cardName = "Emerald";

}

void Emerald::print(ostream& out) const{
	char emer = 'E';
	out.clear();
	out.put(emer);
}

int Emerald::getCardsPerCoin(int coins) const {

	//Emerald 2 3 3


	int c = coins;
	 
	switch (c) {
	case(0):
		return 0;
		break;
	case(2):
		return 2;
		break;
	case(3):
		return 3;
		break;
	default:
		return 3;
		break;
	}
}
