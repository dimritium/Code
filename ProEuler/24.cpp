#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

void swap_(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

cpp
string perm(string str)
{
    ll len = str.size();
    ll k, f, s, i;
    fl(i, 0, len-1)
    {
        if(str[i]<str[i+1])
        f = i;
    }
    fl(i, f, len)
    {
        if(str[f]<str[i])
        s=i;
    }
    swap_(str[f], str[s]);
    reverse(str.begin()+(f+1), str.end());
    return str;
}

int main()
{
    int tc;
    cin>>tc;
    string arr[100000];
    while(tc--)
    {
        ll n, i;
        cin>>n;
        string res="abcdefghijklm";
        fl(i, 0, n-1)
        {
        res=perm(res);
        }
        cout<<res<<endl;   
    }
}