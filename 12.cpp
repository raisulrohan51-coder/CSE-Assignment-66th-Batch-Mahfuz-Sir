#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the value of N: ";
    cin >> n;

    cout << "Prime numbers from 1 to " << n << " are: ";

    for (int num = 2; num <= n; num++) {
        bool isPrime = true;

        // check if num is divisible by any number from 2 to num/2
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break; // not a prime number
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    return 0;
}

