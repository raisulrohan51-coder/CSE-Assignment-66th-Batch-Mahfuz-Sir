#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int low, high, num, originalNum, remainder, n;
    double result;

    cout << "Enter one number (intervals): ";
    cin >> low ;
    cout << "Enter another number (intervals): ";
    cin >> high;

    cout << "Armstrong numbers between " << low << " and " << high << " are:\n";

    for (num = low; num <= high; num++) {
        originalNum = num;
        n = 0;
        result = 0.0;

        for (int temp = num; temp != 0; temp /= 10, ++n);

        for (int temp = num; temp != 0; temp /= 10) {
            remainder = temp % 10;
            result += pow(remainder, n);
        }

        if ((int)result == originalNum)
            cout << originalNum << " ";
    }
    return 0;
}

