#include "Hematite.h"

Hematite::Hematite() : Card() {
	
	cardName = "Hematite";

}

void Hematite::print(ostream& out){
	char hemat = 'H';
	out.clear();
	out.put(obsid);
}

int Hematite::getCardsPerCoin(int coins) {

	//Hemamtite 3 6 8 9


	int c = coins;

	switch (c) {
	case(0):
		return 0;
		break;
	case(1):
		return 3;
		break;
	case(2):
		return 6;
		break;
	case(3):
		return 8;
		break;
	case(4):
		return 9;
		break;
	default:
		return 9;
		break;
	}
}