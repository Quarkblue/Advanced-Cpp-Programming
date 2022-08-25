// Learn Advance CPP programming
//Abstract Classes and Pure Virtual Functions

#include<iostream>

using namespace std;


// A class that contains pure virtual functions is called an Abstract class
class Animal {
public:
	virtual void run() = 0; // A pure virtual function
	virtual void speak() = 0; // A pure virtual function
	
	
};

class Dog: public Animal {
public:
	virtual void speak() {   // Must fulfill the pure virtual function
		cout << "Woof!" << endl;
	}
};

class Labrador : public Dog {
public:
	Labrador() {
		cout << "New labrador" << endl;
	}
	virtual void run() {
		cout << "Labrador is running" << endl;
	}
};


int main() {

	Labrador labs[5];
	
	Labrador labra;
	labra.speak();
	labra.run();

	return 0;
}

