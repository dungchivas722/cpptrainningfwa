#include "complex.h"

Complex :: Complex()
{
    this->re = 0;
    this->im = 0;
}

Complex :: Complex(double im, double re)
    : im(im), re(re){}

Complex :: Complex(const Complex &other)
{
    // cout << "Copy" << endl;
    this->re = other.re;
    this->im = other.im;
}

Complex :: ~Complex(){}

void Complex :: setIm(double im)
{
    this->im = im;
}

double Complex :: getIm()
{
    return this->im;
}

void Complex :: setRe(double re)
{
    this->re = re;
}

double Complex :: getRe()
{
    return this->re;
}

void Complex :: enterComplex()
{
    cout << "Enter complex number!" << endl;
    cout << "Enter the real part: ";
    cin >> this->re;
    cout << "Enter the imaginary part: ";
    cin >> this->im;
}

void Complex :: showComplex()
{
    cout << re << " + " << im << "i" << endl;
}

Complex* Complex :: addTwoComplex(Complex a, Complex b)
{
    this->re = a.re + b.re;
    this->im = a.im + b.im;
}

Complex* Complex :: mulTwoComplex(Complex a, Complex b)
{
    this->re = a.re * b.re - a.im * b.im;
    this->im = a.re * b.im + a.im * b.re;
    // return this;
}
