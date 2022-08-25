// Learn Advance CPP programming
//Abstract Classes and Pure Virtual Functions

#include<iostream>

using namespace std;


// A class that contains pure virtual functions is called an Abstract class
class Animal {
public:
	virtual void speak() = 0; // A pure virtual function
	
	
};

class Dog: public Animal {
public:
	virtual void speak() {
		cout << "Woof!" << endl;
	}
};


int main() {
	
	Dog dog;
	dog.speak();

	return 0;
}

