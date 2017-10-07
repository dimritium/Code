#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    int arr[2]={0};
    for(int i=0; i<n; i++){
        cin>>x;
        arr[x%2]+=1;
    }
    if(arr[0]>arr[1])
        cout<<"READY FOR BATTLE";
    else
        cout<<"NOT READY";
}