#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    long long int l,r,x,y,k,i;
    cin>>l>>r>>x>>y>>k;
    for(i = x; i<=y; i++){
        if(l<=i*k && i*k<=r){
            cout<<("YES");
            return 0;
        }
    }
    cout<<("NO");
}