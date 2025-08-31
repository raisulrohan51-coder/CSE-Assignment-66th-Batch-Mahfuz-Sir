
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {7, 2, 9, 4, 1};
    int mx = arr[0], mn = arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>mx) mx=arr[i];
        if(arr[i]<mn) mn=arr[i];
    }
    cout << "Max = " << mx << ", Min = " << mn;
}
