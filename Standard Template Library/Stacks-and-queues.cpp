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
		 //cout << "Object destroyed" << endl;
	}
	void print() {
		cout << name << endl;
	}
};

int main() {
	
	//LIFO
	stack<Test> testStack;
	
	testStack.push(Test("Mike"));
	testStack.push(Test("john"));
	testStack.push(Test("sue"));
	

	
	/*
	* This is invalid code the object is destroyed and the reference doesn't work
	Test &test1 = testStack.top();
	testStack.pop();
	test1.print();
	Reference refers to destroy objects
	*/
	
	while (testStack.size() > 0) {
		
		Test& test = testStack.top();
		test.print();
		testStack.pop();

	}

	cout << endl;
	
	//FIFO

	queue<Test> testQueue;
	
	testQueue.push(Test("Mike"));
	testQueue.push(Test("john"));
	testQueue.push(Test("sue"));
	
	testQueue.back().print();
	cout << endl;
	
	while (testQueue.size() > 0)
	{
		Test& test = testQueue.front();
		test.print();
		testQueue.pop();
	}
	
	
	return 0;
	
}