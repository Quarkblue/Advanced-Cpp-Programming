// Learn Advanced C++ Programming
// Reinterpret Casts

#include<iostream>

using namespace std;

class Parent {
	virtual void speak() {
		cout << "parent!" << endl;
	}
};

class Brother : public Parent {

};

class Sister : public Parent {

};



int main() {

	Parent parent;
	Brother brother;
	Sister sister;

	Parent* pPBrother = &brother;

	Sister* pBBrother = reinterpret_cast<Sister*>(pPBrother);

	if (pBBrother == nullptr) {
		cout << "Invalid Cast" << endl;
	}
	else {
		cout << pBBrother << endl;
	}
	return 0;
}