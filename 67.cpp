#include <iostream>
using namespace std;

void merge(int a[],int l,int m,int r)
{
    int L[50],R[50],n1=m-l+1,n2=r-m;
    for(int i=0;i<n1;i++) L[i]=a[l+i];
    for(int j=0;j<n2;j++) R[j]=a[m+1+j];
    int i=0,j=0,k=l;
    while(i<n1&&j<n2) a[k++]=(L[i]<R[j])?L[i++]:R[j++];
    while(i<n1) a[k++]=L[i++];
    while(j<n2) a[k++]=R[j++];
}
void mergesort(int a[],int l,int r){
    if(l<r){int m=(l+r)/2;mergesort(a,l,m);mergesort(a,m+1,r);merge(a,l,m,r);}
}
int main(){
    int arr[]={38,27,43,3,9};
    mergesort(arr,0,4);
    for(int i=0;i<5;i++) cout<<arr[i]<<" ";
}

