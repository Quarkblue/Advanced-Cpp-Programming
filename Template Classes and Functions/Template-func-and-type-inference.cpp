// Learn Advance C++ Programming
// Template functions and Type inference


#include<iostream>

using namespace std;

template<class T>
void print(T n) {
	cout << "Template: " << n << endl;
}

void print(int value) {
	cout << "Non template: " << value << endl;
}

int main() {

	print<string>("Hello");
	print("Hello there");

	print(6);

	return 0;
}