// Learn Advance C++ Programming
// Overloading the Assignment Operator

#include<iostream>

using namespace std;

class Test {
	
private:
	int id;
	string name;
	
public:
	Test() : id(0), name("") {
		
	}
	Test(int id, string name): id(id), name(name) {
		
	}
	void print() {
		cout << id << " : " << name << endl;
	}
};

int main() {
	
	return 0;
}