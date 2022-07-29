// Learn Advance C++ Programming
// Parsing Text Files

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {

	string filename = "stats.txt";
	ifstream input;
	
	input.open(filename);
	
	if (!input.is_open()) {
		return 1;
	}
	
	while (input) {
		string line;		
		getline(input, line, ':');
		
		int population;
		input >> population;
		
		input >> ws;
		

		cout << line << " -- " << population << endl;

	}

	input.close();

	return 0;
}