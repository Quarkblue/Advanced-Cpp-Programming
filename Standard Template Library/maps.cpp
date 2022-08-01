// Learn Advance C++ Programming
// Maps

#include<iostream>
#include<map>
#include<string>

using namespace std;


int main() {

	map<string, int> ages;

	ages["john"] = 40;
	ages["raj"] = 20;
	ages["vicki"] = 30;
	
	

	cout << ages["raj"] << endl;
	
	if (ages.find("lol") != ages.end()) {
		cout << "Found lol" << endl;
	}
	else {
		cout << "Key not found" << endl;
	}

	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {

		cout << it->first << " : " << it->second << endl;
		
	}

	return 0;
}