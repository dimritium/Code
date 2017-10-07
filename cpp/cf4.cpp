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
    int a[4]={0};
    cin>>s;
    for(int i = 0; i<s.length(); i++){
        if(isdigit(char(s[i]))){
            a[char(s[i])-'0']+=1;
        }
    }
    int add_sign = a[1]+a[2]+a[3] - 1;
    for(int i = 1; i<4; i++){
        while(a[i]){
            cout<<i;
            if(add_sign)
                cout<<"+";
            a[i]--;
            add_sign--;
        }
    }
}