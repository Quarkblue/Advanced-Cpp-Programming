// Learn Advance C++ Programming
// Structs and Padding

#include<iostream>
#include<fstream>
#include<string>
using namespace std;


#pragma pack(push,1)
struct Person {
	char name[50];
	int age;
	double weight;
};

int main() {
	
	cout << sizeof(Person) << endl;
	
	return 0;
}