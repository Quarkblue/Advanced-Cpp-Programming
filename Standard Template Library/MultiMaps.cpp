//Learn Advance C++ Programming
// Multimaps

#include<iostream>
#include<map>

using namespace std;

int main() {
	
	multimap<int, string> lookup;

	lookup.insert(make_pair(30, "Mike"));
	lookup.insert(make_pair(10, "Vicki"));
	lookup.insert(make_pair(30, "Raj"));
	lookup.insert(make_pair(20, "Bob"));

	// multimap stores values with the same key unlike normal map
	// not storing same key values and over writing the string

	for (multimap<int, string>::iterator it = lookup.begin(); it != lookup.end(); it++) {
		
		cout << it->first << " : " << it->second << endl;
	}
	
	cout << endl;
	
	// use find in multimaps

	for (multimap<int, string>::iterator it = lookup.find(20); it != lookup.end(); it++) {
		
		cout << it->first << " : " << it->second << endl;
		
	}

	cout << endl;
	
	// Iterate through a range of values with the same key

	pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = lookup.equal_range(30);
	
	for (multimap<int, string>::iterator it = its.first; it != its.second; it++) {
		
		cout << it->first << " : " << it->second << endl;

	}

	cout << endl;
	
	// A really short way to iterate through a range of values with the same key

	auto  its2 = lookup.equal_range(30);
	
	for (multimap<int, string>::iterator it = its2.first; it != its2.second; it++) {
		
		cout << it->first << " : " << it->second << endl;
	}
	
	return 0;
}