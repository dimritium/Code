#include<bits/stdc++.h>
using namespace std;
int main()
{
int tc,n;
cin>>tc;
while(tc--)
{
    vector<int>v(1,1);
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        int carry=0;
        for(int j=0;j<v.size();j++)
        {
            v[j]=v[j]*i+carry;
            carry=v[j]/10;
            v[j]%=10;
        }
        while(carry)
        {
            v.push_back(carry%10);
            carry/=10;
        }
    }
    int sum=0;
    for(int i=v.size()-1;i>=0;i--)
        cout<<v[i];
    v.erase(v.begin(),v.end());
}
return 0;
}
