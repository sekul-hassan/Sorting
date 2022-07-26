#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int>v = {3,8,1,6,3,0};

int n = 6;
void Sort()
{
    int i,j;
    for(j=1;j<n;j++){
        int key = v[j];
        i = j-1;
        while(i>=0 and key<v[i]){
            v[i+1]=v[i];
            v[i]=key;
            i--;
        }
    }
}
int main()
{
    Sort();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
