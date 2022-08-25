// Learn Advance CPP programming
// Functors

#include<iostream>

using namespace std;

struct Test {
	virtual bool operator()(string &text) = 0;
	
	virtual ~Test() {};

};

struct MatchTest: public Test
{
	bool operator()(string &text) {
		return text == "lion";
	}
};

void check(string &text, Test &test) {
	if (test(text)) {
		cout << "Text match" << endl;
	}
	else {
		cout << "No match" << endl;
	}
}


int main() {

	MatchTest pred;
	
	string value = "lion";
	
	MatchTest n;

	check(value, n);
	
	return 0;
}

