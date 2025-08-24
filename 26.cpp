#include <iostream>
using namespace std;
int main() {
    int i, n, first = 0, second = 1, nextTerm;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        cout << first << " ";
        nextTerm = first + second;
        first = second;
        second = nextTerm;
    }
    return 0;
}

