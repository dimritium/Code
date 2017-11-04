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
    ios_base::sync_with_stdio (false);
    string s;
    cin>>s;
    ll length = s.length();
    int arr[length] = {0};
    ll k = 1;
    ll m, i, l, r;
    fl(i,0,length){
        if (s[i] == s[i+1]){
            arr[k] = arr[k-1] + 1;
        }
        else{
            arr[k] = arr[k-1];
        }
        k += 1;
    }
    
    cin>>m;
    fl(i,0,m){
        cin>>l>>r;
        cout<<arr[r-1] - arr[l-1]<<endl;
    }
}