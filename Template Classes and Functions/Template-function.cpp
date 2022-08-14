// Learn Advance C++ Programming
// Template Functions

#include<iostream>
using namespace std;

template<typename T>
void print(T n){
	cout << n << endl;
}

int main(){

	print<string>("Hello");
	print<int>(5);
	
	print("Hi there");

	return 0;
}