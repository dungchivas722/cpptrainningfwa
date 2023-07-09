#ifndef __Complex
#define __Complex

#include <iostream>

using namespace std;

class Complex
{
    private:
        double im;
        double re;

    public:
        Complex();
        Complex(double im, double re);
        Complex(const Complex &other);

        void inputComplex();
        void showComplex();
        Complex addTwoComplex(Complex a, Complex b);
        Complex mulTwoComplex(Complex a, Complex b);
};

#endif 