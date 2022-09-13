#include<iostream>
#include"Ring.h"

using namespace std;


int main() {

	ring<string> textring(3);
	
	textring.add("one");
	textring.add("two");
	textring.add("three");
	textring.add("four");
	textring.add("five");

	for (ring<string>::iterator it = textring.begin(); it != textring.end(); it++) {
		cout << *it << endl;
	}
	
	for (auto value : textring) {
		cout << value << endl;
	}


	
	return 0;
}

