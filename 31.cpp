#include <iostream>
using namespace std;

int main()
{
    int a, reverse = 0;
    cout << "Enter the value of a: ";
    cin >> a;

    while (a > 0) {
        int digit = a % 10;      // take last digit
        reverse = reverse * 10 + digit; // add digit in reverse
        a = a / 10;            // remove last digit
    }

    cout << "Reversed number = " << reverse;
    return 0;
}

