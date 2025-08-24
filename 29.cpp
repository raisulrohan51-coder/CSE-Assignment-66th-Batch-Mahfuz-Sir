#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num, originalNum, remainder, n;
    double result;
    cout << "Armstrong numbers between 1 and 1000 are:\n";

    for (num = 1; num <= 1000; num++) {
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

