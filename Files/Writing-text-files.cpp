// Learn Advance C++ Programming
// Writing in text files

#include<iostream>
#include<fstream>
using namespace std;

int main() {

	ofstream outFile;
	//fstream outFile;       <-- using fstream instead of ofstream
	
	string outFileName = "text.txt";
	
	outFile.open(outFileName);
	//outFile.open(outFileName, ios::out);
	
	if (outFile.is_open()) {
		
		outFile << "Hello file" << endl;
		outFile << 123 << endl;
		outFile.close();
		
	}
	else
	{
		cout << "could not create file: " << outFileName << endl;
	}
	
	return 0;
}