// Learn Advanced C++ Programming
// Perfect Forwarding

#include<iostream>

using namespace std;

class Test {
	
};

void check(Test& test) {
	cout << "lvalue" << endl;
}

void check(Test&& test) {
	cout << "rvalue" << endl;
}


int main() {


	return 0;
}

