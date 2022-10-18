#include<bits/stdc++.h>
using namespace std;

void MakeHeap(int arr[],int i,int n)
{
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left<n and arr[largest]<arr[left])
        largest = left;
    if(right<n and arr[largest]<arr[right])
        largest = right;
    if(largest!=i){
        swap(arr[i],arr[largest]);
        MakeHeap(arr,largest,n);
    }
}
void HeapSort(int arr[],int n)
{
    for(int i=0;i<n/2-1;i++){
        MakeHeap(arr,i,n);
    }
    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        MakeHeap(arr,0,i);
    }
}


void Print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int n;
    int arr[] = {3,6,2,5,1};
    n = sizeof(arr)/sizeof(arr[0]);
    HeapSort(arr,n);
    Print(arr,n);
}
