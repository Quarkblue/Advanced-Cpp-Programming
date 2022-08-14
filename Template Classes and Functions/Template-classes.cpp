// Learn Advance C++ Programming
// Template Classes

#include"Template-class.h"

using namespace std;
using namespace AdvancedCppProgramming;


int main() {

	Test<string> test1("Hello");

	test1.print();
	cout << test1 << endl;
	
	return 0;
}

