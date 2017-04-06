//+vector<elementType>()
//+vector<elementType>(size: int)
//+vector<elementType>(size: int,
//	defaultValue: elementType)
//+push_back(element: elementType): void
//+pop_back(): void
//+size(): unsigned const
//+at(index: int): elementType const
//+empty(): bool const
//+clear(): void
//+swap(v2: vector): void

#ifndef VECTOR_H_
#define VECTOR_H_

#include <vector>

template<typename T>

class Vector {
private:
	int *_First;
	int *_Last;
public:
	Vector() {
		std::vector<T> v(0);
	}
	Vector(int size) {
		std::vector<T> v(size);
		_First = &v[0];
		_Last = &v[size - 1];
	}
	Vector(int size, T defaultValue) {
		std::vector<T> v(size);
		for (int i = 0; i < size; i++) {
			v[i] = defaultValue;
		}
		_First = &v[0];
		_Last = &v[size - 1];
	}
	void push_back(T elementType) {
		int size = size();
		std::vector<T> v(size + 1);
		for (int i = 0; i < size; i++) {
			v[i] = *(_First + i);
		}
		*(_First + (size + 1)) = elementType;
		for (int i = 0; i < size; i++) {
			*(_First + i) = NULL;
		}
		_First = &v[0];
		_Last = &v[(size - 1) + 1];
	}
	void pop_back(T elementType) {
		if (_First == _Last) {
			cout << "Illegal pop_back" << endl;
		}
		else {
			*_Last = NULL;
			_Last -= 1;
		}
	}
	unsigned const size() {
		return (1 + (_Last - _First));
	}
	const T at(int index) {
		if (!empty())
			return (*(_First + index));
		else cout << "The vector is empty" << endl;
	}
	const bool empty() {
		return (_First == _Last)
	}
	void clear() {
		for (int i = 0; i < size(); i++) {
			*(_First + i) = NULL;
		}
	}
	void swap(Vector v2) {
		int v1Size = size();
		int v2Size = v2.size;
		std::vector<T> v3(v1Size);
		for (int i = 0; i < v1Size; i++) {
			v3[i] = *(_First + i);
		}

		if (v1Size < v2Size) {
			v.resize(v2Size);
		}
		else if (v1Size > v2Size) {
			v2.resize(v1Size)
		}

		for (int i = 0; i < v1Size; i++) {
			*(_First + i) = v2[i];
		}
		for (int i = 0; i < size(); i++) {
			v2[i] = v3[i];
		}

		v.resize(v2Size);
		v2.resize(v1Size)
	}
};

#endif
