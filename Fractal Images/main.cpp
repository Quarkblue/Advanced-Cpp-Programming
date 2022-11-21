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

	double min = 99999;
	double max = -99999;

	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {
			double xFractal{ (x - WIDTH/2) * (2.0/WIDTH) };
			double yFractal{ (y - HEIGHT / 2) * (2.0 / HEIGHT) };

			if (xFractal < min) min = xFractal;
			if (xFractal > max) max = xFractal;

		}
	}

	cout << min << " " << max << endl;

	bitmap.write("test.bmp");

	cout << "Finished" << endl;

	return 0;
}


