#include<iostream>
#include<cmath>
#include<vector>
 vector <long long int> v;
long long int c=0;
using namespace std;
long long int chkp(long long int);
int main()
{
    int tc;
    long long int n,i;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        for(i=2;c!=n;i++)
        {
            for(int j=0;j<v.size();j++)
                if(i%v[j]==0)
                break;
           c= chkp(i);
        }
        cout<<i-1;
        c=0;
    }
    return 0;
}
long long int chkp(long long int x)
{
    long long int l=c;
    int flag=0;
    for(int i=2;i<=sqrt(x);i++)
        {
            if(x%i==0)
            {
            flag=1;
             break;
            }
        }
        if(flag==0)
        {
         v.push_back();
        l++;
        }
        return l;
}
