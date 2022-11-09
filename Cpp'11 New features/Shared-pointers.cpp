// Learn Advanced C++ programming
// Shared Pointers

#include<iostream>
using namespace std;


class Test {
public:
	Test() {
		cout << "created" << endl;
	}

	void greet() {
		cout << "hello" << endl;
	}

	~Test() {
		cout << "destroyed" << endl;
	}

};


int main() {
	
	shared_ptr<Test> pTest2(nullptr);
	
	{
		shared_ptr<Test> pTest1 = make_shared<Test>();
		pTest2 = pTest1;
	}


	cout << "Finished" << endl;
	return 0;
}

