#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N '\n'

void Merge(int A[],int p,int q,int r)
{
    int i,j,k;
    int n1 = q-p+1;
    int n2 = r-q;
    vector<int>L(n1);
    vector<int>R(n2);
    for(i=0;i<n1;i++){
        L[i]=A[p+i];
    }
    for(j=0;j<n2;j++){
        R[j] = A[q+j+1];
    }
    i = 0;
    j = 0;
    for(k=p;i<n1 and j<n2;k++){
        if(L[i]<R[j]){
            A[k] = L[i];
            i++;
        }
        else{
            A[k] = R[j];
            j++;
        }
    }
    while(i<n1){
        A[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        A[k] = R[j];
        j++;
        k++;
    }
}

void MergeSort(int A[],int p,int r)
{
    if(p>=r)
        return ;
    int q = (p+r)/2;
    MergeSort(A,p,q);
    MergeSort(A,q+1,r);
    Merge(A,p,q,r);
}

int main()
{
    int A[] = {4,2,-7,4,1,6,3,-1,0};
    int n = 8;
    MergeSort(A,0,n);
    cout<<"Print sorted Array "<<endl;
    for(int i=0;i<=n;i++){
        cout<<A[i]<<" ";
    }
    cout<<N;
    return 0;
}
