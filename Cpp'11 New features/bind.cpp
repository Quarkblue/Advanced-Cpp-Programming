// Learn Advanced C++ Programming
// Bind

#include<iostream>
#include<functional>

using namespace std;
using namespace placeholders;

int add(int a, int b, int c) {
	cout << a << "," << b << "," << c << endl;
	return a + b + c;
}

void run(function<int(int, int)> func) {
	func(7, 3);
}

int main() {

	auto calci = bind(add, _2, 100, _1);
	
	cout << calci(10, 30) << endl;

	run(calci);
	
	return 0;
}


