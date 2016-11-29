#include "Ruby.h"

Ruby::Ruby() {

	cardName = "Ruby";

}

void Ruby::print(ostream& out) const{
char ruby = 'R';
out.clear();
out.put(ruby);
}

int Ruby::getCardsPerCoin(int coins) const{

	//Ruby 2 4 5 6


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
		return 5;
		break;
	case(4):
		return 6;
		break;
	default:
		return 6;
		break;
	}
}