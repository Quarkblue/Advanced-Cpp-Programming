// Learn Advance C++ Programming
// Overloading the Assignment Operator

#include<iostream>

using namespace std;

class Test {
	
private:
	int id;
	string name;
	
public:
	Test() : id(0), name("") {
		
	}
	Test(int id, string name): id(id), name(name) {
		
	}
	void print() const {
		cout << id << " : " << name << endl;
	}
	
	const Test& operator=(const Test& other) {
		
		cout << "Assignment running" << endl;
		
		id = other.id;
		name = other.name;
		
		return *this;
	}
	
	Test(const Test& other) {
		cout << "Copy Constructor Running" << endl;
		*this = other;
	}
	
};

int main() {
	
	Test test1(10, "Mike");
	test1.print();

	Test test2(20, "Bob");
	
	test2 = test1;
	test2.print();

	// Copy initialization
	Test test3 = test1;
	
	
	return 0;
}