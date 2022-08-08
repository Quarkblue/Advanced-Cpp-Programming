#include "Complex.h"

namespace AdvancedCppProgramming {
	
	ostream& operator<<(ostream& out, const Complex& c) {
		out << "(" << c.getReal() << "." << c.getImaginary() << ")";
		return out;
	
	}

	Complex::Complex() : real(0), imaginary(0) {
		
	}

	Complex::Complex(double real, double imaginary): real(real), imaginary(imaginary) {
		
	}
	
	Complex::Complex(const Complex& other) {
		real = other.real;
		imaginary = other.imaginary;
	}

	const Complex &Complex::operator=(const Complex& other) {
		real = other.real;
		imaginary = other.imaginary;

		return *this;
	}


}
