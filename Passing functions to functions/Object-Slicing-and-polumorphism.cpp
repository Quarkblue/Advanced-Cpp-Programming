// Learn Advance C++ Programming
// Object Slicing and Polymorphism

#include<iostream>

using namespace std;

class Parent {
public:
	virtual void print() {
		cout << "parent" << endl;
	}
};

class Child : public Parent {
public:
	void print() {
		cout << "child" << endl;
	}
};

int main() {

	Child c1;
	Parent& p1 = c1;
	p1.print();

	Parent p2 = Child();
	p2.print();
	
	return 0;
}



