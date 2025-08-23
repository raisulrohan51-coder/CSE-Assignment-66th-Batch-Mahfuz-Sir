#include<iostream>
using namespace std;
int main ()
{
     float principal,  rate , time , simpleInterest ;

     cout << " principal : " ;
     cin >> principal ;
     cout << "  rate  : " ;
     cin >>  rate ;
     cout << " time : " ;
     cin >> time ;
    simpleInterest = ( principal *  rate * time) / 100 ;

    cout << " simple interest : " << simpleInterest ;
    return 0;

}
