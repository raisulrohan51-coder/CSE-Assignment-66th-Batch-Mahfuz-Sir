#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2,4,6,8,10};
    int sum=0;
    for(int i=0;i<5;i++) sum+=arr[i];
    cout << "Average = " << sum/5.0;
}

