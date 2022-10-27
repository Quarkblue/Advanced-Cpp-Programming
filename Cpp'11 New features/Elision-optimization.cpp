// Learn Advance C++ programming
// Elision and Optimization

#include<iostream>
#include<vector>

using namespace std;
class Test {
public:
	Test() {
		cout << "Constructor" << endl;
	}

	Test(int i) {
		cout << "Parameterized Constructor" << endl;
	}
	
	Test(const Test& other) {
		cout << "Copy constructor" << endl;
	}

	Test& operator=(const Test& other) {
		cout << "Assignment" << endl;
		return *this;
	}

	~Test() {
		cout << "destructor" << endl;
	}
	
	friend ostream& operator<<(ostream& out, const Test& test);

};


ostream& operator<<(ostream& out, const Test& test) {
	
	out << "Hello" << endl;
	return out;
}

Test getTest() {
	return Test();
}

int main() {
	
	Test test1 = getTest();
	
	cout << test1 << endl;

	return 0;
}


