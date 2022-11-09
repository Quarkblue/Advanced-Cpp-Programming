// Learn Advancec C++ programming
// Unique Pointers

#include<iostream>
#include<memory>
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

	unique_ptr<Test> pTest(new Test);

	pTest->greet();
	
	cout << "Finished" << endl;
	
	return 0;
}

