#include<bits/stdc++.h>
using namespace std;
#define N '\n'

void CountSort(int arr[],int n,int k)
{
    int i;
    int brr[k+1];
    memset(brr,0,sizeof(brr));
    for(i=0;i<n;i++){
        brr[arr[i]]++;
    }
    /// We can use that or
//    for(i=1;i<=k;i++){
//        brr[i] = brr[i]+brr[i-1];
//    }
//    int crr[n];
//    for(i=n-1;i>=0;i--){
//        int d = --brr[arr[i]];
//        crr[d] = arr[i];
//    }
//    for(i=0;i<n;i++){
//        arr[i] = crr[i];
//    }
    /// We can use that
    int d = 0;
    for(i=0;i<=k;i++){
        int p = brr[i];
        while(brr[i]--){
            arr[d] = i;
            d++;
        }
    }
}

/// We can count sort when max element <n*n
/// O(N+Max)
/// space O(Max)
/// It don't work for negative value
/// if smallest negative value (+) all those elements after sorting (-) this value
/// Here counting sort valid for negative value

int main()
{
    int arr[] = {0,3,2,5,1,8,0,2,5,6,1,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i,k = 0;
    for(i=0;i<n;i++){
        k = max(arr[i],k);
    }
    CountSort(arr,n,k);
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<N;
}
