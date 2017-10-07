#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define MOD 1000000007
using namespace std;

int main()
{
    int n;
    int x,y,z,c = 0;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>x>>y>>z;
        if((x&y)||(x&z)||(y&z))
            c+=1;
    }
    cout<<c;
}