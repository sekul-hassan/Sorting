/// Selection sort
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
    int arr[]={3, 2, 9, 5 ,3};
    int n=5;
    int j,i,mn = INT_MAX;
    for(i=0;i<n-1;i++){
        int min_index = i;
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                min_index = j;
            }
        }
        Swap(&arr[i],&arr[min_index]);
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
