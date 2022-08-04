// Learn Advance C++ Programming
// Stacks and Queues

#include<iostream>
#include<stack>
#include<queue>

using namespace std;

class Test {
private:
	string name;

public:
	Test(string name):
		name(name) {
			
		}
	~Test() {
		// cout << "Object destroyed" << endl;
	}
	void print() {
		cout << name << endl;
	}
};

int main() {
	
	

	return 0;
}