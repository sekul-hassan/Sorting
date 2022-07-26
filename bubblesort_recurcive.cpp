#include<iostream>
using namespace std;
void Swap(int *x,int *y)
{
    int temp = *x;
        *x = *y;
        *y = temp;
}
void BBsort(int arr[],int n)
{
    if(n==1)
        return ;
    int i,j;
    for(i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            Swap(&arr[i],&arr[i+1]);
        }
    }
    BBsort(arr,n-1);
}
int main()
{
    int arr[]={3, 2, 9, 5 ,3,0,-1};
    int n=7,i,j;
    BBsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
