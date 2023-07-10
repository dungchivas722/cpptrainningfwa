#include "Complex.h"

Complex :: Complex()
{
    this->re = 0;
    this->im = 0;
}

Complex :: Complex(double im, double re) : im(im), re(re) {}


void Complex::inputComplex()
{
    cout << "Nhap so phuc:" << endl;
    cout << "Nhap phan thuc: ";
    cin >> this->re;
    cout << "Nhap phan ao: ";
    cin >> this->im;
}

void Complex :: showComplex()
{
    cout << re << " + " << im << "i" << endl;
}

Complex Complex :: addTwoComplex(Complex a, Complex b)
{
    Complex result;
    this->re = a.re + b.re;
    this->im = a.im + b.im;
    return result;
}

Complex Complex :: mulTwoComplex(Complex a, Complex b)
{
    Complex result;
    this->re = a.re * b.re - a.im * b.im;
    this->im = a.re * b.im + a.im * b.re;
    return result;
}
