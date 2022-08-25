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

void test(Animal& a) {
	a.run();
}

int main() {

	Labrador labs[5];
	
	Labrador labra;

	/* Animal is an abstract class
	and you cannot instantiate it
	nor can you make an array from it
	you can make a vector of an abstract class but
	won't be able to add elements to it
	but you can make a pointer to that abstract
	class and add other classes that are derived from
	that abstract class.
	eg:-*/

	Animal* animals[5];
	animals[0] = &labra;
	
	animals[0]->speak();
	animals[0]->run();
	
	test(labra);

	return 0;
}

