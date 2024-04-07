#include "ComplexNumber.hpp"
#include <iostream>

using namespace std;
using namespace Complexlib;

int main()
{

    Complex c(1,2.0000000000000001);
    cout << c << endl;

    Complex d(1,2.000000000000000081);
    cout << d << endl;

    if(c==d)
        cout << "sono uguali" << endl;
    else
        cout << "Differenza parte reale: " << abs(c.reale - d.reale) << endl << "Differenza parte immaginaria: " << abs(c.imm - d.imm) << endl;

    Complex e = conj(c);
    cout << e << endl;

    return 0;
}
