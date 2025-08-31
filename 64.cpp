#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,3,5,7,9};
    int key = 7;
    int low=0, high=4;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){ cout<<"Found "<<key; return 0; }
        if(arr[mid]<key) low=mid+1;
        else high=mid-1;
    }
    cout<<"Not found";
}

