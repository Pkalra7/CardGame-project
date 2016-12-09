#include <iostream>
#include "Hand.h"

Hand& Hand::operator+=(Card* c) {
	this->push_back(c);
	return *this;
}
Card* Hand::play() {
	Card* c = this->front();
	this->pop_front();
	return c;
}
Card* Hand::top() const{
	return this->front();
}

Card* Hand::operator[](int index) const{
	deque<Card*> d = *this;
	return d[index];
}
Hand::Hand(istream&, CardFactory*) {

}
ostream& operator<<(ostream& os, const Hand& h) {
	for (auto card: h) {
		card->print(os);
	} 
	return os;
}

Hand::Hand() {

}


