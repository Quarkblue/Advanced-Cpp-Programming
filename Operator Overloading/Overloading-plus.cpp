// Learn Advance C++ Programming
// Overloading Plus

#include<iostream>
#include"Complex.h"

using namespace std;
using namespace AdvancedCppProgramming;

int main() {
	
	Complex c1(3, 4);
	Complex c2(2, 3);
	
	Complex c3 = c1 + c2;

	cout << c1 + c2 + c3 << endl;
	
	return 0;
}



