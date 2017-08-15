#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long 
#define MOD 1000000007
#define pb push_back

using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll n, m;
        cin>>n>>m;
        ll arr[m];
        for(ll i = 0; i<m; i++)
        {
            cin>>arr[i];
        }
        for(ll i = 0; i<m; i++)
        {
            if(arr[i]==0)
                n--;
            else
                n=n+2;
            if(n == 0 && i!=(m-1))
            {
                cout<<"No "<<i+1<<endl;
                break;
            }
            else if(i==(m-1))
            {
                cout<<"Yes "<<n<<endl;
                break;
            }
        }
    }
}