#ifndef COMPLEX_H
#define COMPLEX_H

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
        ~Complex();

        void setIm(double im);
        double getIm();
        void setRe(double re);
        double getRe();

        void enterComplex();
        void showComplex();
        Complex* addTwoComplex(Complex a, Complex b);
        Complex* mulTwoComplex(Complex a, Complex b);
};

#endif /* COMPLEX_H */