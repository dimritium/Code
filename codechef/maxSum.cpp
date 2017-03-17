#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
#define INF 1<<30
using namespace std;

ll maxSum(ll a[], int n){
    ll max_till_now = -INF;
    ll max = 0;
    for(int i = 0; i<n; i++){
        if(max < 0)
        max = 0;
        
        max = max + a[i];
        
        if(max_till_now < max)
        max_till_now = max;
        
    }
    return max_till_now;
}
int main()
{   
    ll a[] = {-4,2,-1,9,-7};
    cout<<maxSum(a, 5);
}