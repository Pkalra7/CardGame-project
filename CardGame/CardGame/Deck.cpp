#include "Deck.h"


Card* Deck::draw() {
	if (top >= 0) {
		Card* toBeDrawn = this->back();
		return toBeDrawn;
	}
}

