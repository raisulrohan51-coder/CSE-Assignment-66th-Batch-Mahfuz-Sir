#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, d;
    cout << "Enter values of a, b, c: ";
    cin >> a >> b >> c;

    d = b*b - 4*a*c;

    if (d > 0) {
        cout << "Two roots: " << (-b+sqrt(d))/(2*a)
             << " and " << (-b-sqrt(d))/(2*a);
    }
    else if (d == 0) {
        cout << "One root: " << -b/(2*a);
    }
    else {
        cout << "No real roots (only imaginary roots)";
    }
}

