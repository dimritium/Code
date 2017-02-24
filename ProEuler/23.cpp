#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>v;
    for(int i=12;i<=28123;i++)
        {
        long long int sum=1;
        for(int j=2;j<=sqrt(i);j++)
            {
            if(i%j==0)
                (j*j==i)?(sum=sum+j):(sum=sum+j+i/j);

        }
        if(sum>i){
            v.push_back(i);
           // cout<<v.back();
        }
    }
    int tc,n;
    cin>>tc;
    while(tc--)
        {
        int flag=0;
        cin>>n;
        if(n>28123)
            cout<<"YES\n";
        else
            {
            long long int sum2=0;
            for(int i=0,l=0;i<v.size();i++)
                {
                sum2=v[i];
                if(sum2>=n){
                        break;
                }
                while(sum2<n)
                    {
                    sum2=sum2+v[l++];
                    if(sum2==n)
                        {
                        cout<<"YES\n";
                       // cout<<sum2-v[l-1]<<" "<<v[l-1]<<endl;
                        flag=1;
                        break;
                    }
                    else if(sum2<n)
                        sum2=sum2-v[l-1];
                    else if(sum2>n)
                        break;
                }
                if(flag==1)
                    break;
                l=0;
            }
            if(flag==0)
                cout<<"NO\n";
        }
    }
    return 0;
}

