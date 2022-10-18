// Learn Advance C++ Programming
// Lambda Capture Expression

#include<iostream>

using namespace std;


int main() {

	int one = 1;
	int two = 2;
	int three = 3;

	// Capture one and two by values
	[one, two]() {cout << one << "," << two << endl; }();
	
	// Capture all local variables by value
	[=]() { cout << one << "," << two << "," << three << endl; }();
	
	// Capture all local variables by value, but capture three by reference
	[=, &three]() { cout << one << "," << two << "," << three << endl; three = 7; }();
	cout << three << endl;

	// Capture all local variables by reference
	[&]() {cout << two << endl; two = 8; cout << two << endl; }();

	return 0;
}