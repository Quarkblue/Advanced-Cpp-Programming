// Learn Advancec C++ programming
// Unique Pointers

#include<iostream>
using namespace std;

class Test {
public:
	Test() {
		cout << "created" << endl;
	}
	
	void greet() {
		cout << "Hello" << endl;
	}

	~Test() {
		cout << "destroyed" << endl;
	}
	
};


int main() {

	cout << "Finished" << endl;

	
	return 0;
}

