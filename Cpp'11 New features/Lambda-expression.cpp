// Learn Advance C++ Programming
// Lambda Expressions

#include<iostream>

using namespace std;

void test(void(*pfunc)()) {
	pfunc();
}

int main() {
	
	auto func = []() {cout << "Being called by a name" << endl; };

	func();

	[]() {cout << "Not being called by a name" << endl; }();

	test(func);
	
	test([]() {cout << "Not being called by a name" << endl; });

	return 0;
}