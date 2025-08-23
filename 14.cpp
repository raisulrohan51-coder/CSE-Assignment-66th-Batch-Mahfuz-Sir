#include<iostream>
using namespace std;
int main ()
{
     float principal,  rate , time , compoundInterest, Amount ;

     cout << " principal : " ;
     cin >> principal ;
     cout << "  rate  : " ;
     cin >>  rate ;
     cout << " time : " ;
     cin >> time ;
    Amount = principal * ((1) + (rate / 100));
    compoundInterest = Amount - principal ;
    cout << " compound interest : " << compoundInterest ;
    return 0;

}

