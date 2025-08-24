#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;
    cout << "Enter an integer: ";
    cin >> num;
    originalNum = num;

    for (int temp = num; temp != 0; temp /= 10, ++n);

    for (int temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        result += pow(remainder, n);
    }

    if ((int)result == originalNum)
        cout << originalNum << " is an Armstrong number.";
    else
        cout << originalNum << " is not an Armstrong number.";
    return 0;
}

