// Learn Advance C++ Programming
// Reading Text files

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	
	string inFileName = "text.txt";
	ifstream inFile;
	
	inFile.open(inFileName);

	if (inFile.is_open()) {
		
		string line;
		
		while (inFile) {
			getline(inFile, line);

			cout << line << endl;
		}
		inFile.close();
	}
	else
	{
		cout << "Cannot open file :" << inFileName << endl;
	}

	return 0;
}