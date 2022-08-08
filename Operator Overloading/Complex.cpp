#include "Complex.h"


namespace AdvancedCppProgramming {
	
	Complex::Complex() : real(0), imaginary(0) {
		
	}

	Complex::Complex(double real, double imaginary): real(real), imaginary(imaginary) {
		
	}
	
	Complex::Complex(const Complex& other) {
		real = other.real;
		imaginary = other.imaginary;
	}

}
