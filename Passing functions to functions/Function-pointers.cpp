// Learn Advance C++ Programming
// Function pointers

#include<iostream>

using namespace std;

void test(string name) {
	
	cout << "Hello: " << name << endl;
}

int main() {

	void (*pTest)(string) = test;

	string name = "quark";
	
	pTest(name);

	return 0;
}


