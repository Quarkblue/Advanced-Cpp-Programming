// Learn Advanced C++ Programming
// Dynamic Casts

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

	Parent* pPBrother = &brother;
	
	Brother* pBBrother = dynamic_cast<Brother*>(pPBrother);

	if (pBBrother == nullptr) {
		cout << "Invalid Cast" << endl;
	}
	else {
		cout << pBBrother << endl;
	}
	return 0;
}

