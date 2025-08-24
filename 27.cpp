#include <iostream>
using namespace std;
int main()
{
    int p, q, max;
    cout << "Enter a numbers: ";
    cin >> p ;
    cout << "Enter a numbers: ";
    cin >> q;

    max = (p > q) ? p : q;
    while (true) {
        if (max % p == 0 && max % q == 0) {
            cout << "LCM = " << max;
            break;
        }
        max++;
    }
    return 0;
}

