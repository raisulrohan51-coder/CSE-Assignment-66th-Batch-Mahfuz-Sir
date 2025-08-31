#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 8, 2, 10, 3};
    int biggest = arr[0];
    for(int i=1;i<5;i++)
        if(arr[i] > biggest) biggest = arr[i];
    cout << "Biggest number is " << biggest;
}

