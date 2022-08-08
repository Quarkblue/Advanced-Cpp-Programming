#pragma once

#ifndef COMPLEX_H_
#define COMPLEX_H_

namespace AdvancedCppProgramming {

	class Complex{
	private:
		double real;
		double imaginary;
		
	public:
		Complex();
		Complex(double real, double imaginary);
		
		Complex(const Complex& other);
	};

}

#endif