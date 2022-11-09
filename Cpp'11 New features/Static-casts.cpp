// Learn Advanced C++ Programming
// Static Casts

#include<iostream>

using namespace std;

class Parent {

};

class Brother : public Parent {
	
};

class Sister : public Parent {
	
};



int main() {

	Parent parent;
	Brother brother;

	Parent* pParent = &brother; // Works

	//Brother* pBrother = &parent // Does not work

	// How to make it work?
	// Unsafe btw
	Brother* pBrother = static_cast<Brother*>(&parent);

	Parent* pPBrother = &brother;
	
	Brother* pBBrother = static_cast<Brother *>(pPBrother);

	cout << pPBrother << endl;

	cout << pBrother << endl;
	
	Parent&& p = Parent();

	return 0;
}

