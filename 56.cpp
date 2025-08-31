#include <iostream>
using namespace std;


int addUp(int n)
{
    if (n == 0) return 0;
    return n + addUp(n - 1);
}

int main() {
    int n;
    cout << "Add numbers up to: ";
    cin >> n;
    cout << "The sum is " << addUp(n);
}

