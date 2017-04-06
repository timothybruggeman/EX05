//12.4 (Is sorted?) Write the following function to check if the elements in the array are
//sorted.
//template<typename T>
//bool isSorted(const T list[], int size)
//Test the function with array of int, double, and string values

#include <iostream>

using namespace std;

template<typename T>
bool isSorted(const T list[], int size);

void main() {
	int integer[4] = { 1,2,3,4 };
	double dubble[4] = { 1.1,2.2,3.3,4.4 };
	string rope[4] = { "1","2","3","4" };

	cout << isSorted(integer, 3);
	cout << isSorted(dubble, 3);
	cout << isSorted(rope, 3);
	int poop;
	cin >> poop;
}

template<typename T>
bool isSorted(const T list[], int size) {
	for (int i = 1; i <= size; i++) {
		if (list[i] < list[i - 1]) {
			return false;
		}
	}
	return true;
}