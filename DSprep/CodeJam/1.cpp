#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
using namespace std;

int main(){
    long long int tc,n,m;
    cin>>tc;
    long long int res[tc];
    for(int i = 0; i< tc; i++)
    {
    long long int sum = 0;
    cin>>n>>m;
    if(n>m){
        swap(n,m);
    }
    for(long long int k = 1; k<=n-1; k++){
       sum += ((k*(n-k)%MOD)*((m-k)%MOD))%MOD;
    }
    // ll fp = (((n*m)%MOD)*(((n*(n+1))%MOD)/2))%MOD;
    // ll sp = (((((n+m)%MOD)*((n*(n+1))%MOD))%MOD)*(((((2*n)%MOD + 1)%MOD)/6)%MOD))%MOD;
    // ll tp = (((n*n)%MOD)*(((n+1)*(n+1))%MOD)/4)%MOD;
    // sum = ((tp + (fp-sp)%MOD))%MOD;
    cout<<"Case #"<<i+1<<": "<<sum%MOD;
    cout<<endl;
    }
}