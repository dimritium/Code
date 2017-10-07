#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    ll k, sum = 0, diff, digits = 0;
    string n;
    cin>>k;
    cin>>n;
    multiset<int>ms;
    multiset<int>::reverse_iterator it;
    for(ll i = 0; i<n.length(); i++){
        ms.insert(9-(n[i]-'0'));
        sum+=n[i]-'0';
    }
    diff = k-sum;
    if(sum>=k)
        cout<<0;
    else{
        for(it = ms.rbegin(); diff>0 && it!=ms.rend(); ++it){
            diff = diff-*it;
            digits+=1;
        }
        cout<<digits;
    }
}