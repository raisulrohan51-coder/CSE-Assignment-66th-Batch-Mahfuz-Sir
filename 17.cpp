#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Enter a number: ";
    cin >> i;

    if (i % 2 == 0)
        cout << i << " is an Even number.";
    else
        cout << i << " is an Odd number.";

    return 0;
}

