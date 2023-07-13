#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

using namespace std;

class Complex_Number {
    private:
        double real, imaginary;
    public:
        Complex_Number();
        Complex_Number(double imaginary, double real);
        Complex_Number(const Complex_Number &other);
        ~Complex_Number();

        void setImaginary(double imaginary);
        double getImaginary();
        void setReal(double real);
        double getReal();

        void enterComplex();
        void resultComplex();
        Complex_Number* addTwoComplexNumber(Complex_Number a, Complex_Number b);
        Complex_Number* mulTwoComplexNumber(Complex_Number a, Complex_Number b);
};

#endif 