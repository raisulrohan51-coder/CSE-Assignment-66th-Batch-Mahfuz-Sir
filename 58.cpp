#include <iostream>
using namespace std;


int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "GCD = " << gcd(x, y);
}

