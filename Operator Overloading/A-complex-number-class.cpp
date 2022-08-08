// Learn Advance C++ Programming
// A Complex number Class

#include<iostream>
#include "Complex.h"

using namespace std;
using namespace AdvancedCppProgramming;

int main() {

	Complex c1(2,3);
	Complex c2(c1);

	Complex c3 = c2;
	
	cout << c1 << " : " << c3 << endl;

	return 0;
}


