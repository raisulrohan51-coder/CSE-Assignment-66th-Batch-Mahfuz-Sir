#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            cout << num << " can be written as "
                 << i << " + " << num - i;
            return 0;
        }
    }

    cout << "Sorry, " << num
         << " cannot be written as sum of two prime numbers.";
}

