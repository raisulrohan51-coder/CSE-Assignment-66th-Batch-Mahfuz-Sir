#include<iostream>
using namespace std;
int main ()
{
     int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int a = 0, b = 1, sum = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)   // if index is even
            sum += a;

        int next = a + b;
        a = b;
        b = next;
    }

    cout << "Sum of even-index Fibonacci terms = " << sum;
    return 0 ;
}
