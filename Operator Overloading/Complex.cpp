#include "Complex.h"

namespace AdvancedCppProgramming {
	
	ostream& operator<<(ostream& out, const Complex& c) {
		out << "(" << c.getReal() << "." << c.getImaginary() << ")";
		return out;
	
	}

	Complex operator+(const Complex& c1, const Complex& c2) {
		return Complex(c1.getReal() + c2.getReal(), c2.getImaginary() + c1.getImaginary());
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

	bool Complex::operator==(const Complex& other) const {
		return real == other.real && imaginary == other.imaginary;
	}

	bool Complex::operator!=(const Complex& other) const {
		return !(*this == other);
	}

	Complex Complex::operator*() const {
		return Complex(real, -imaginary);
	}

}
