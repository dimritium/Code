#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    ll n;
    cin>>n;
    if(n>=0){
        cout<<n;
    }
    else{
        n = -n;
        n = min(n/10,n%10+(n/100)*10);
        if(n)
            cout<<-n;
        else
            cout<<n;
    }
}