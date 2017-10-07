#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define MOD 1000000007
using namespace std;

float fac(int n){
    float res = 1.0;
    int i;
    fl(i,1,n+1){
        res*=i;
    }
    return res;
}
int main()
{
    int pos = 0, h_pos = 0, neg = 0, h_neg = 0, blks = 0, i;
    float res;
    string s1, s2;
    
    cin>>s1;
    cin>>s2;

    fl(i,0,s1.length()){
        if(s1[i] == '+')
            pos++;
        else if(s1[i] == '-')
            neg++;
    }

    fl(i,0,s2.length()){
        if(s2[i] == '+')
            h_pos++;
        else if(s2[i] == '-')
            h_neg++;
        else
            blks++;
    }

    int diff_pos = (pos-h_pos);
    int diff_neg = (neg-h_neg);
    
    if(diff_pos<0)
        diff_neg = diff_neg - diff_pos;
    else if (diff_neg<0)
        diff_pos = diff_pos - diff_neg; //if neg smbl not req add in pos
    
    if((diff_neg+diff_pos)>blks)
        res = 0.0;
    else
    {
        float smpl_spc = 1<<blks;
        res = fac(blks)/((fac(diff_neg))*fac(diff_pos));
        res = res/smpl_spc;
    }
    printf("%0.12f",res);
}