// Learn Advance C++ Programming
// Sets

#include<iostream>
#include<set>

using namespace std;

int main() {
	
	set<int> numbers;
	
	numbers.insert(50);
	numbers.insert(30);
	numbers.insert(20);
	numbers.insert(10);
	numbers.insert(20);

	for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}
	
	set<int>::iterator itFind = numbers.find(10);

	if (itFind != numbers.end()) {
		cout << "Found: " << *itFind << endl;
	}
	
	if (numbers.count(30)) {
		cout << "Found: " << 30 << endl;
	}

	
	
	return 0;
}