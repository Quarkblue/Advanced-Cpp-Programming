#pragma once
#ifndef MANDELBROT_H_
#define MANDELBROT_H_

namespace fractal {

	class Mandelbrot{
	public:
		static const int MAX_ITERATION = 1000;
		
	public:
		Mandelbrot();
		virtual ~Mandelbrot();

		static int getIteration(double x, double y);
		
	};

}

#endif /* MANDELBROT_H_ */