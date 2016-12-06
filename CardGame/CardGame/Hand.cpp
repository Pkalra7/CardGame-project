#include <iostream>
#include "Hand.h"

Hand& Hand::operator+=(Card* c) {
	this->push_back(c);
	return *this;
}
//Card* Hand::play() {
//	Card* c = this->front;
//	this->pop_front();
//	return c;
//}
Card* Hand::top() {
	return this->front();
}
//????
//Card* Hand::operator[](int index) {
//}
Hand::Hand(istream&, CardFactory*) {

}
ostream& operator<<(ostream& os, Hand& h) {
	for (auto i = h.begin(); i != h.end(); i++) {
		os<< *i;
	} 
	return os;
}



