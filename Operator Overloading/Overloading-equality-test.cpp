// Learn Advance C++ Programming
// Overloading Equality Test

#include<iostream>
#include "Complex.h"

using namespace std;
using namespace AdvancedCppProgramming;


int main() {

	Complex c1(3, 2);
	Complex c2(3, 3);
	
	if (c1 == c2) {
		cout << "they are equal" << endl;
	}
	else {
		cout << "they are not equal" << endl;
	}
	
	if (c1 != c2) {
		cout << "they are not equal" << endl;
	}
	else {
		cout << "they are equal" << endl;
	}
	
	return 0;
}


