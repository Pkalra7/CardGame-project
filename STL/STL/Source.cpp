#include <vector>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include 

using namespace std;

template <typename T>
T min(const T& g, const T&d) {
	return ((g > d) ? g : d);
}

template <typename T> T add(const T& g, const T& d) { return g + d; }

template <class T1, class T2, class T3> T1  add2(const T2& g, const T3& d) {
		T1 res = g + d;
		return res;
	}



int main()
{


	Point2d<int> dpt1(2, 3);
	


	_getch();
}