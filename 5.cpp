#include<iostream>
using namespace std;
int main()
{
     int i, n ;
     bool prime = true ;
     cout<< "Enter a number:";
     cin >> n;

     if( n <= 1)
     {
         cout << "Number invalid";

     } else
     {
         for(i = 2; i < n ; i++)
            {
            if ( n%i==0)
            {
                prime = false;
                break;
            }
            }
            if (prime)

                cout << n << " n is a prime number"  ;
             else

                cout << n << " n is not a prime number"  ;

         }

     return 0 ;
}
