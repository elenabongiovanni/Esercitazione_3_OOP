#ifndef __COMPLEX_H
#define __COMPLEX_H

#include <iostream>
#include <cmath>
using namespace std;

namespace Complexlib{
struct Complex
{
    double reale;
    double imm;

    Complex() = default;

    Complex(double a, double b)
    {
        reale = a;
        imm = b;
    }

};

ostream& operator<<(ostream& os, const Complex& r);

Complex operator+(const Complex& c1, const Complex& c2);

bool operator==(const Complex& c1, const Complex& c2);

Complex conj(const Complex& c);

}

#endif
