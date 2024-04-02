#include "ComplexNumber.hpp"
#include <iostream>

using namespace std;
using namespace Complexlib;

int main()
{

    Complex c(1,-6);
    cout << c << endl;

    Complex d(1,6);
    cout << d << endl;

    if(c==d)
        cout << "sono uguali" << endl;
    else
        cout << "Differenza parte reale: " << c.reale - d.reale << endl << "Differenza parte immaginaria: " << c.imm - d.imm << endl;

    Complex e = conj(c);
    cout << e << endl;

    return 0;
}
