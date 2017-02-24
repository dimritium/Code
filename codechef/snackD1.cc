#include<bits/stdc++.h>
using namespace std;
int visited[100];
vector<int>v[100];

int main()
{
 int tc,n,m,x,y;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>m;
        while(m--)
        {
            cin>>x>>y;
        }
        cout<<1<<" "<<n<<endl;
        for(int i=1;i<=n;i++)
        {
            cout<<i<<" "<<(n+1)<<endl;
        }
    }
    return 0;
}
