#include "Table.h"
#include <iostream>
#include <string>

Table::Table()
{

}

bool Table::win(std::string& winner) {
	Player p1 = players[0];
	Player p2 = players[1];
	//Checking to see if draw returns a null card. Can't use top variable
	if (d.draw() == 0) {
		if (p1.getNumCoins() > p2.getNumCoins()) {
			winner = p1.getName();
		}
		else {
			winner = p2.getName();
		}
		return true;
	}
	return false;
}
void Table::print(std::ostream& os) {
	
	/*for (vector<Player>::iterator iter = players.begin();iter != players.end();iter++)
	{
		os << *iter << endl;
		os << " " << endl;
	}*/
	os << dp;
	os << ta;
	os << d;
}
/*ostream& operator<<(std::ostream & os, const Table& t)
{
	for (vector<Player>::iterator iter = players.begin();iter != players.end();iter++)
	{
		os << *iter << endl;
		os << " " << endl;
	}
	os << t.dp;
	os << t.ta;
	return os;
}*/
Table::Table(const istream& is, CardFactory* c) {
	if (is) {
	}
	else {
		cerr << "could not open file!";
	}
}