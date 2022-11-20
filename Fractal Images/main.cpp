// Learn Advanced C++ Programming
// Main

#include<iostream>
#include"Bitmap.h"

using namespace std;
using namespace fractal;

int main() {

	int const WIDTH = 800;
	int const HEIGHT = 600;
	
	Bitmap bitmap(WIDTH, HEIGHT);

	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {
			bitmap.setPixel(x, y, 255, 0, 0);
		}
	}

	bitmap.write("test.bmp");

	cout << "Finished" << endl;

	return 0;
}


