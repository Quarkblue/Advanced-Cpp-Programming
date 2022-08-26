// Learn Advance CPP Programming
// Decltype, Typeid and Name Mangling

#include<iostream>
#include<typeinfo>

using namespace std;

int main() {
	
	string value;
	
	cout << typeid(value).name() << endl;

	decltype(value) name = "Bob";
	
	cout << typeid(name).name() << endl;
	
	return 0;
}



