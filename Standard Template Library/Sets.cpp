// Learn Advance C++ Programming
// Sets

#include<iostream>
#include<set>

using namespace std;

class Test
{
	int id;
	string name;
public:
	Test(int id, string name) : id(id), name(name) {
		
	}

	void print() {
		cout << id << " : " << name << endl;
	}

};


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