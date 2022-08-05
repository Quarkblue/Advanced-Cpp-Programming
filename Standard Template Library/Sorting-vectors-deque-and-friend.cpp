// Learn Advance C++ Programming
// Sorting Vectors, Deque and Friend

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Test {
	int id;
	string name;
	
public:
	Test(int id, string name) : id(id), name(name) {}
	void print() {
		cout << id << " : " << name << endl;
	}
};


int main() {

	vector<Test> tests;
	
	tests.push_back(Test(5, "Mike"));
	tests.push_back(Test(10, "Sue"));
	tests.push_back(Test(7, "Raj"));
	tests.push_back(Test(3, "vicky"));

	sort(tests.begin(), tests.end());

	for (int i = 0; i < tests.size(); i++){
		tests[i].print();
	}

	return 0;
}