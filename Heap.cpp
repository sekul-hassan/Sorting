#include<bits/stdc++.h>
using namespace std;
int const n = 5;
int arr[n] = {3, 6, 2, 5, 1};
int l,r,m;
void HEAP(int i)
{
    if(i==n)
        return ;
    l = 2*i+1;
    r = 2*i+2;
    if(l<n and arr[l]>arr[i]){
        m = l;
    }
    else{
        m = i;
    }
    if(r<n and arr[r]>arr[m]){
        m = r;
    }
    if(m!=i){
        swap(arr[i],arr[m]);
    }
    HEAP(i++);

}

void Print()
{
    for(auto i:arr)
        cout<<i<<" ";
    cout<<endl;
}
int main()
{
    int t = 1;
    while(t--){
        HEAP(0);
        Print();
    }
}
