#include "Quartz.h"


Quartz::Quartz() :Card() {
	
	cardName = "Quartz";
}

int Quartz::getCardsPerCoin(int coins) const{

	//Quartz 4 6 8 10


	int c = coins;

	switch (c) {
	case(0):
		return 0;
		break;
	case(1):
		return 4;
		break;
	case(2):
		return 6;
		break;
	case(3):
		return 8;
		break;
	case(4):
		return 10;
		break;
	default:
		return 10;
		break;
	}
}

void Quartz::print(ostream& out) const{
	out << 'Q';
}




