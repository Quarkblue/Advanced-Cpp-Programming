// Learn Advance C++ Programming
// Standard Exceptions

#include <iostream>
using namespace std;

class CanGoWrong {
public:
	CanGoWrong() {
		char* pMemory = new char[99999999999999];
		delete[] pMemory;
	}
};


int main() {


	try {
		CanGoWrong wrong;
	}
	catch (bad_alloc &e) {
		cout << "Caught Exception " << e.what() << endl;
	}
	
	return 0;
}