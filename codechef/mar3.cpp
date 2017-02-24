#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int d;
    string a;
    cin>>d;
    while(d--)
    {
        cin>>a;
        long long int len=a.length();
        if(a.length()%2==0)
        {
          if(a.substr(0,len/2)==a.substr(len/2,len/2))
             cout<<"Yes\n";
          else
            cout<<"No\n";
        }
        else
        {
            if(a.substr(0,len/2)==a.substr(len/2+1,len/2))
             cout<<"Yes\n";
          else
            cout<<"No\n";
        }
    }
    return 0;
}
