#include <iostream>
#include <cmath>
#include "ComplexNumber.hpp"
using namespace std;

namespace Complexlib{

ostream& operator<<(ostream& os, const Complex& c)
{
    if(c.imm > 0)
        os << c.reale << "+" << c.imm << "i" << endl;
    else
        os << c.reale << c.imm << "i" << endl;
    return os;
}

Complex operator+(const Complex& c1, const Complex& c2)
{
    double sumreale = c1.reale + c2.reale;
    double sumimm = c1.imm + c2.imm;
    Complex sum(sumreale, sumimm);
    return sum;
}

bool operator==(const Complex& c1, const Complex& c2)
{
    if(c1.reale - c2.reale < 2.2e-16 && c2.imm - c1.imm < 2.2e-16)
        return true;
    else
        return false;
}

Complex conj(const Complex& c)
{
    Complex con;
    con = Complex(c.reale, - c.imm);
    return con;
}
}
