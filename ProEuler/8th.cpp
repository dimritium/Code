#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int tc,K,N,z,i,j,n;
    vector <int> v;
    vector <long long int> v1;
    cin>>tc;
    while(tc--)
        {
        cin>>N>>K;
       char s[N];
       cin>>s;
        for(i=0;i<N;i++)
            {
            z=s[i]-48;
            v.push_back(z);
        }
        long long int sum=1;
        int flag=0;
        for(i=0;i<=N-K;i++)
            {
                sum=1;
            for(j=i;j<(K+i)&&(K+i)<N;j++)
                {
                sum=sum*v.at(j);
                flag=1;
            }
            if(flag==1)
            v1.push_back(sum);
            flag=0;
        }
        sort(v1.begin(),v1.end());
        cout<<v1.back()<<"\n";
        v.clear();
        v1.clear();
    }
    return 0;
}

