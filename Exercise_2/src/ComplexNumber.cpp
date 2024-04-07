#include <iostream>
#include <cmath>
#include "ComplexNumber.hpp"
using namespace std;

namespace Complexlib{

ostream& operator<<(ostream& os, const Complex& c)
{
    if(abs(c.reale)>1.1e-16){
        if(c.imm > 1.1e-16)
            os << c.reale << "+" << c.imm << "i" << endl;
        else if(c.imm < -1.1e-16)
            os << c.reale << c.imm << "i" << endl;
        else
            os << c.reale;
    }
    else{
        if(abs(c.imm) > 1.1e-16)
            os << c.imm << "i" << endl;
        else
            os << 0;
    }

    return os;
}

Complex operator+(const Complex& c1, const Complex& c2)
{
    double sumreale = c1.reale + c2.reale;
    double sumimm = c1.imm + c2.imm;
    Complex sum(sumreale, sumimm);
    return sum;
}

Complex operator+(const Complex& c1, const double& c2)
{
    double sumreale = c1.reale + c2;
    double sumimm = c1.imm;
    Complex sum(sumreale, sumimm);
    return sum;
}

Complex operator+(const double& c1,const Complex& c2)
{
    double sumreale = c1 + c2.reale;
    double sumimm = c2.imm;
    Complex sum(sumreale, sumimm);
    return sum;
}

bool operator==(const Complex& c1, const Complex& c2)
{
    if(abs(c1.reale - c2.reale) < 1.1e-16 && abs(c2.imm - c1.imm) < 1.1e-16)
        return true;
    else
        return false;
}

Complex conj(const Complex& c)
{
    Complex con(c.reale, - c.imm);
    return con;
}
}
