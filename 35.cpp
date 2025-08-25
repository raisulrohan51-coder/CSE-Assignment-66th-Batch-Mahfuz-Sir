#include<iostream>
using namespace std ;
int main ()
{
    int num, sq, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    sq = num * num;

    while (sq > 0) {
        sum = sum + (sq % 10);  // take last digit
        sq = sq / 10;           // remove last digit
    }

    if (sum == num)
        cout << "Neon number";
    else
        cout << "Not a neon number";
        return 0 ;
}
