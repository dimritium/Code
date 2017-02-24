#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<cmath>
#define fl(i,j,k) for(i=j;i<=k;i++)
int main()
{
    int tc,n,i;
    cin>>tc;
    while(tc--)
    {
        vector <long long int> v;
        cin>>n;
        long long int a,b,c,z,d,ab;
        for(c=1;c<=n/2;c++)
            for(b=(n-c)/2;b<(n-c)&&b<c;b++)
            {
              a=n-b-c;
              if(a>b) {continue;}
              else if((a*a)+(b*b)==(c*c))
              {
                  cout<<a<<"\n"<<b<<"\n";
                v.push_back(a*b*c);
              }
            }
        if(v.empty())
            cout<<"-1"<<"\n";
        else{
        sort(v.begin(),v.end());
        cout<<v.back()<<"\n";
        }
        v.clear();
    }
    return 0;
}
