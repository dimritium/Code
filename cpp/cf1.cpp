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
    int n,pos=0,neg=0;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        for(int i = 0; i<s.length(); i++){
            if(s[i]=='+')
                pos+=1;
            else if(s[i]=='-')
                neg+=1;
        }
    }
        cout<<(pos/2 - (neg/2));
}