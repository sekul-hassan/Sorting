#include<iostream>
using namespace std;
void Swap(int *x,int *y)
{
    int temp = *x;
        *x = *y;
        *y = temp;
}
int main()
{
    int arr[]={3, 2, 9, 5 ,3,0,-1};
    int n=7,i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                Swap(&arr[j],&arr[j+1]);
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
