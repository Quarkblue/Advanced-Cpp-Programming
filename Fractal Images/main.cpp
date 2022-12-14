// Learn Advanced C++ Programming
// Main

#include<iostream>
#include<memory>
#include<cstdint>
#include <math.h>

#include"Bitmap.h"
#include"Mandelbrot.h"
#include"Zoom.h"
#include "ZoomList.h"

using namespace std;
using namespace fractal;



int main() {

	int const WIDTH = 800;
	int const HEIGHT = 600;
	
	Bitmap bitmap(WIDTH, HEIGHT);

	double min = 99999;
	double max = -99999;
	
	ZoomList zoomList(WIDTH, HEIGHT);
	
	zoomList.add(Zoom(WIDTH/2, HEIGHT/2, 0.1/WIDTH));

	unique_ptr<int[]> histogram(new int[Mandelbrot::MAX_ITERATIONS]{0});
	unique_ptr<int[]> fractal(new int[WIDTH * HEIGHT] {0});
	

	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {
			pair<double, double> coords = zoomList.doZoom(x, y);

			int iterations = Mandelbrot::getIteration(coords.first, coords.second);

			fractal[y * WIDTH + x] = iterations;

			if (iterations != Mandelbrot::MAX_ITERATIONS) {

				histogram[iterations]++;
			}

		}
	}

	int total = 0;
	for (int i = 0; i < Mandelbrot::MAX_ITERATIONS; i++) {
		total += histogram[i];
	}

	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {

			uint8_t red = 0;
			uint8_t green = 0;
			uint8_t blue = 0;

			int iterations = fractal[y * WIDTH + x];

			if (iterations != Mandelbrot::MAX_ITERATIONS) {



				double hue = 0.0;
				for (int i = 0; i <= iterations; i++) {
					hue += ((double)histogram[i]) / total;
				}

				green = pow(255, hue);

			}
			
			bitmap.setPixel(x, y, red, green, blue);

			
		}
	}


	bitmap.write("test.bmp");

	cout << "Finished" << endl;

	return 0;
}


