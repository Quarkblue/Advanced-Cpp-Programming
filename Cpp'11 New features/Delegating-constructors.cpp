// Learn Advance C++ Programming
// Delegating Constructors

#include<iostream>

using namespace std;

class Parent {

	int dogs;
	string text;
	
public:
	Parent(): Parent("Hello") {
		dogs = 5;
		cout << "No parameter parent constructor" << endl;
	}
	
	Parent(string text) {
		dogs = 5;
		this->text = text;
		cout << "String parent constructor" << endl;
	}
};

class  Child : public Parent {

public:
	Child() = default;
	
};


int main() {

	Parent parent("Hello");
	Child child;
	return 0;
	
}

