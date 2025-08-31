#include <iostream>
using namespace std;

int main()
{
    int arr[] = {64,25,12,22,11};
    for(int i=0;i<4;i++){
        int min=i;
        for(int j=i+1;j<5;j++)
            if(arr[j]<arr[min]) min=j;
        swap(arr[i],arr[min]);
    }
    for(int i=0;i<5;i++) cout<<arr[i]<<" ";
}

