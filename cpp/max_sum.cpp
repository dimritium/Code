#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    int sum = 0,best = 0;
    int arr[] = {1,5,-2,5,1,4,-1};
    for(int i=0; i<;i++){
        sum = max(arr[i],sum+arr[i]);
        best = max(sum,best);
    }
    cout<<best;
}