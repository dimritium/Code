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
    string s;
    int c = 0,p=0;
    cin>>s;
    for(int i = 0; i<s.length(); i++){
        if(s[i]=='1'){
            c+=1;
            p = 0;
        }
        else if(s[i]=='0'){
            c = 0;
            p+=1;
        }
        if(c==7 or p == 7){
            cout<<"YES";
            exit(0);
        }
    }
    cout<<"NO";
}