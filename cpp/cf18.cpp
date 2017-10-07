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
    string match = "hello";
    string s;
    int k = 0;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(match[k]==s[i])
            k++;
    }
    if(k==5)
        cout<<"YES";
    else
        cout<<"NO";
}