#include "Turquoise.h"

Turquoise::Turquoise() :Card()
{
	cardName = "Turquoise";
}


int Turquoise::getCardsPerCoin(int coins) {

	//Turquoise 2 4 6 7
	int c = coins;

	switch (c) {
	case(0):
		return 0;
		break;
	case(1):
		return 2;
		break;
	case(2):
		return 4;
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

void Turquoise::print(ostream& out) {
	char turq = 'T';
	out.clear();
	out.put(turq);
}
