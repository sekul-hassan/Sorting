#include<bits/stdc++.h>
#define N '\n'
#define ll long long
using namespace std;

int Partition(int A[],int l,int h)
{
    int i = l-1;
    int p = A[h-1];
    for(int j=l;j<h;j++){
        if(A[j]<p){
            i++;
            swap(A[i],A[j]);
        }
    }
    i++;
    swap(A[i],A[h-1]);
    return i;
}
void Qsort(int A[],int l,int h)
{
    if(l>=h)
        return ;
    int p = Partition(A,l,h);
    Qsort(A,l,p);
    Qsort(A,p+1,h);
}

int main()
{
    int A[] = {4,2,-7,4,1,6,3};
    int n = 7;
    Qsort(A,0,n);
    cout<<"Print sorted Array "<<endl;
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<N;
    return 0;
}
