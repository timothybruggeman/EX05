//12.20 (Shuffle vector) Write a function that shuffles the contents in a vector using the
//following header:
//template<typename T>
//void shuffle(vector<T>& v)
//Write a test program that reads in 10 int values into a vector and displays a
//shuffled result.

#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

template <typename T>
void shuffle(vector<T>& v);

void main() {
	srand(time(NULL));
	vector<int> v(10);
	cout << "Pre-shuffled numbers are: ";
	for (int i = 0; i < 10; i++) {
		v[i] = rand() % 100;
		cout << v[i] << ", ";
	}
	shuffle(v);
	cout << endl << "Post-shuffled numbers are: ";
	for (int i = 0; i < 10; i++) {
		cout << v[i] << ", ";
	}
	int poop;
	cin >> poop;
}

template <typename T>
void shuffle(vector<T>& v) {
	bool already;
	int shuffler[10];
	shuffler[0] = rand() % 10;
	for (short count = 1; count < 10;) {
		shuffler[count] = rand() % 10;
		already = false;
		for (short count2 = 0; count2 < count; count2++) {
			if (shuffler[count] == shuffler[count2]) {
				already = true;
			}
		}
		if (!already)
			count++;
	}
	int temp[10];
	for (int i = 0; i < 10; i++) {
		temp[i] = v[i];
	}
	for (int i = 0; i < 10; i++) {
		v[i] = temp[shuffler[i]];
	}
}