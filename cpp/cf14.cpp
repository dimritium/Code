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
    int n,i=0,j=1,c=0;
    string s;
    cin>>n>>s;
    while(i<n && j<n){
        if(s[i]!=s[j]){
            i=j;
            j++;
        }
        else if(s[i]==s[j]){
            j++;
            c++;
        }
    }
    cout<<c;
}