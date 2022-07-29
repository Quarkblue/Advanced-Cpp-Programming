// Learn Advance C++ Programming
// Structs and Padding, Reading and writing binary files

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

#pragma pack(push,1)
struct Person {
	char name[50];
	int age;
	double height;
};
#pragma pop()

int main() {
	
	Person someone = { "Frodo",220,0.8 };

	string filename = "test.bin";
	
	ofstream outfile;
	
	outfile.open(filename, ios::binary);

	if (outfile.is_open()) {

		outfile.write(reinterpret_cast<char *>(&someone), sizeof(someone));

		outfile.close();
	}
	else
	{
		cout << "Could not create file: " + filename;
	}
	
	return 0;
}