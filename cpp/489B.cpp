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
    int b,g,i,res = 0;
    cin>>b;

    int bys[b];
    
    fl(i,0,b)
        cin>>bys[i];
    
    cin>>g;
    
    int gls[g];

    fl(i,0,g)
        cin>>gls[i];

    sort(bys,bys+sizeof(bys)/sizeof(bys[0]));
    sort(gls,gls+sizeof(gls)/sizeof(gls[0]));
    int cntr_g = 0;
    int cntr_b = 0;
    while(cntr_g<g && cntr_b<b){
        if(abs(bys[cntr_b] - gls[cntr_g])<=1){
            res++;
            cntr_g++;
            cntr_b++;
        }
        else if(bys[cntr_b]<gls[cntr_g])
            cntr_b++;
        else
            cntr_g++;
    }
    cout<<res;
}