#include<iostream>
using namespace std ;
int main ()
{
 char sym;
    double a, b;
    cout << "Enter Symbol (+, -, *, /): ";
    cin >> sym;
    cout << "Enter the value of a: ";
    cin >> a ;
     cout << "Enter the value of b: ";
    cin >> b;

    switch (sym) {
        case '+': cout << a << " + " << b << " = " << a + b; break;
        case '-': cout << a << " - " << b << " = " << a - b; break;
        case '*': cout << a << " * " << b << " = " << a * b; break;
        case '/':
            if (b != 0) cout << a << " / " << b << " = " << a / b;
            else cout << "Error! Division by zero.";
            break;

    }
    return 0;

}
