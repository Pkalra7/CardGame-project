#include "Malachite.h"

Malachite::Malachite() : Card()
{
	cardName = "Malachite";
}



int Malachite::getCardsPerCoin(int coins) {

	//Malachite 3 5 6 7


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
		return 6;
		break;
	case(4):
		return 7;
		break;
	default:
		return 7;
		break;
	}
}

void Malachite::print(ostream& out) {
	char malac = 'M';
	out.clear();
	out.put(malac);
}
