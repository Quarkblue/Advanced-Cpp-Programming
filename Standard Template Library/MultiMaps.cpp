//Learn Advance C++ Programming
// Multimaps

#include<iostream>
#include<map>

using namespace std;

int main() {
	
	multimap<int, string> lookup;

	lookup.insert(make_pair(30, "Mike"));
	lookup.insert(make_pair(30, "Vicki"));
	lookup.insert(make_pair(30, "Raj"));
	lookup.insert(make_pair(30, "Bob"));

	
	return 0;
}