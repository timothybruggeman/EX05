// testDate.cpp - test the Date class.
// compile with: g++ testDate.cpp Date.cpp -std=c++11 -o test
#include <iostream>
#include "Date.h"

using namespace std;

void printDate(const Date& date)
{
	cout << date.getYear()
		<< "/" << date.getMonth()
		<< "/" << date.getDay() << endl;
}

int main()
{
	Date d1;
	printDate(d1);

	Date d2(555550);
	printDate(d2);

	Date d3(555555550);
	printDate(d3);

	Date d4;
	d4.setDate(955555550);
	printDate(d4);
}