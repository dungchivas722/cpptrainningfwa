#include "complex.h"

Complex_Number :: Complex_Number()
{
    this->real = 0;
    this->imaginary = 0;
}

Complex_Number :: Complex_Number(double imaginary, double real)
    : imaginary(imaginary), real(real){}

Complex_Number :: Complex_Number(const Complex_Number &other)
{
    // cout << "Copy" << endl;
    this->real = other.real;
    this->imaginary = other.imaginary;
}

Complex_Number :: ~Complex_Number(){}

void Complex_Number :: setImaginary(double imaginary)
{
    this->imaginary = imaginary;
}

double Complex_Number :: getImaginary()
{
    return this->imaginary;
}

void Complex_Number :: setReal(double real)
{
    this->real = real;
}

double Complex_Number :: getReal()
{
    return this->real;
}

void Complex_Number :: enterComplex()
{
    cout << "Enter complex number!" << endl;
    cout << "Enter the real part: ";
    cin >> this->real;
    cout << "Enter the imaginary part: ";
    cin >> this->imaginary;
}

void Complex_Number :: resultComplex()
{
    cout << real << " + " << imaginary << "i" << endl;
}

Complex_Number* Complex_Number :: addTwoComplexNumber(Complex_Number a, Complex_Number b)
{
    Complex_Number* dung;
    dung->real = a.real + b.real;
    dung->imaginary = a.imaginary + b.imaginary;
    return dung;
}

Complex_Number* Complex_Number :: mulTwoComplexNumber(Complex_Number a, Complex_Number b)
{
    this->real = a.real * b.real - a.imaginary * b.imaginary;
    this->imaginary = a.real * b.imaginary + a.imaginary * b.real;
    return this;
}
