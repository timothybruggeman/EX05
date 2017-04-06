//12.2 (Linear search) Rewrite the linear search funtion in listing 7.9, LinearSearc.cpp,
//to use a generic type for array elements. Test the function with array of int, 
//double, and string variables.

#include <iostream>
#include <string>

using namespace std;

template <typename T>
int linearSearch(const T list[], T key, int arraySize);

void main() {
	int integer[4] = { 1, 2, 3, 4 };
	double dubble[4] = { 1.1, 2.2, 3.3, 4.4 };
	string rope[4] = { "one", "two", "three", "four" };

	cout << linearSearch(integer, 3, 4) << endl;
	cout << linearSearch(dubble, 3.3, 4) << endl;
	cout << linearSearch<string>(rope, "three", 4) << endl;
	int poop;
	cin >> poop;
}

template <typename T>
int linearSearch(const T list[], T key, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
			return i;
	}
	return -1;
}