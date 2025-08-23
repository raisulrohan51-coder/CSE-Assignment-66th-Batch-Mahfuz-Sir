#include<iostream>
using namespace std;
struct complex {
 float real, imag ;
};
int main ()
{
    complex a, b, sum;

      cout << "Enter first complex number : ";
    cin >> a.real >> a.imag;

    cout << "Enter second complex number : ";
    cin >> b.real >> b.imag;
    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;


    cout << "Sum = " << sum.real << " + " << sum.imag << "i" ;
    return 0;

}
