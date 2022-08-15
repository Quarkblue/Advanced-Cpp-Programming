// Learn Advance C++ Programming
// Function pointers

#include<iostream>

using namespace std;

void test() {
	
	cout << "test()" << endl;
}

int main() {
	test();

	void (*pTest)() = test;

	pTest();

	return 0;
}


