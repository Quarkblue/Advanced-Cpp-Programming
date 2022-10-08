// Learn Advance C++ Programming
// Object Initialization and Default Delete

#include<iostream>
using namespace std;

class Test {
	int id{3};
	string name{"Mike"};

public:
	Test() = default;
	Test(const Test& other) = default;  // Use delete to make the object not copy initializable
	Test& operator=(const Test& other) = default; // Use delete so that equal operator function is deleted

	Test(int d) : id(d) {
		
	}

	void print() {
		cout << id << " : " << name << endl;
	}
};

int main() {

	Test test;
	test.print();
	
	Test test1(24);
	test1.print();

	
	// Won't work if copy constructor and delete operator is set to delete instead of default
	/*Test test2 = test;
	test2 = test1;*/

	return 0;
}