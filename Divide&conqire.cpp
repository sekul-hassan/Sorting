#include<iostream>
using namespace std;
int Cross(int arr[],int l,int m,int h);
int Max(int arr[],int low,int high)
{
    int mid = (low+high)/2;
    if(low == high){
        return arr[low];
    }
    int ls,rs,cs;
    ls = Max(arr,low,mid);
    rs = Max(arr,mid+1,high);
    cs = Cross(arr,low,mid,high);
    return max((ls,rs),cs);
}
int Cross(int arr[],int low,int mid,int high)
{
    int lsum = INT_MIN;
    int sum = 0,i;
    for(i=mid;i>=low;i--){
        sum = sum+arr[i];
        if(sum>lsum){
            lsum = sum;
        }
    }
    int rsum = INT_MIN;
    sum = 0;
    for(i=mid+1;i<=high;i++){
        sum = sum+arr[i];
        if(sum>rsum){
            rsum = sum;
        }
    }
    sum = lsum + rsum;
    return max(lsum,(rsum,sum));
}
int main()
{
    int n,i;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : " ;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Max(arr,0,n-1);
}
