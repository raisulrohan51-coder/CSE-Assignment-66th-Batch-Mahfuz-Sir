#include <iostream>
using namespace std;

int main()
{
    int x ;
    cout << "Enter a number: ";
    cin >> x;

    if (x > 0)
        cout << x << " is Positive number.";
    else if (x < 0)
        cout << x << " is Negative number.";
    else
        cout << "The number is Zero.";

    return 0;
}

