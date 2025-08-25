#include<iostream>
using namespace std ;
int main ()
{
    int start, end;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " are:\n";

    for (int n = start; n <= end; n++) {
        bool isPrime = true;
        if (n <= 1) continue;

        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << n << " ";
    }
}
