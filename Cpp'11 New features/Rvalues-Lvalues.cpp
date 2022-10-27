// Learn Advance C++ Programming
// Rvalues and Lvalues

#include<iostream>
#include<vector>
#include<memory.h>

using namespace std;

class Test {
private:
	static const int SIZE = 100;
	int* _pBuffer;

public:
	Test() {
		cout << "Constructor" << endl;
		_pBuffer = new int[SIZE] {}; // Setting all the bytes to 0 in the memory block
		//memset(_pBuffer, 0, sizeof(int) * SIZE);  // Setting all the bytes to 0 in the memory block using memset

	}

	Test(int i) {
		cout << "Parameterized Constructor" << endl;
		_pBuffer = new int[SIZE] {};

		for (int i = 0; i < SIZE; i++) {
			_pBuffer[i] = 7 * i;
		}

	}

	Test(const Test& other) {
		cout << "Copy Constructor" << endl;

		_pBuffer = new int[SIZE] {};

		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));

	}

	Test& operator=(const Test& other) {
		cout << "Assignment" << endl;

		_pBuffer = new int[SIZE] {};

		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));

		return *this;
	}

	~Test() {
		cout << "Destructor" << endl;

		delete[] _pBuffer;

	}

	friend ostream& operator<<(ostream& out, const Test& test);

};

ostream& operator<<(ostream& out, const Test& test) {
	out << "Hello from test" << endl;
	return out;
}

Test getTest() {

	return Test();
}

int main() {

	Test test1 = getTest();
	cout << test1 << endl;

	vector<Test> vec;
	vec.push_back(Test());

	int value1 = 7;

	int* pValue1 = &value1;

	// int * pValue2 = &7 // Not happening cause Rvalue

	Test* pTest1 = &test1;

	int* pValue3 = &value1;

	cout << *pValue3 << endl;

	// int* pValue4 = &value1++; // Not Happening because value1++ is an Rvalue.

	return 0;
}

