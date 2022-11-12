// Learn Advanced C++ Programming
// Main

#include<iostream>
#include"Bitmap.h"

using namespace std;
using namespace fractal;

int main() {

	Bitmap bitmap(800, 600);
	
	bitmap.write("test.bmp");

	cout << "Finished" << endl;

	return 0;
}


