#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define MOD 1000000007
#define pb push_back

using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n, i, j, k, l, m;
		cin>>n;
		int a[n][n]={0};
		fl(i, 0, n)
		{
			fl(j, 0, n)
			{
				if(a[i][j]==0)
				{
					a[i][j] = 1;
					cout<<i+1<<" "<<j+1<<endl;
					fl(k, i+1, n)
					a[k][j]=-1;
					for(l = i+1, m = j+1; l<n && m<n; l++, m++)
					a[l][m]=-1;
					for(l = i+1, m = j-1; l<n && m>0; l++, m--)
					a[l][m] = -1;
				break;
				}
			}
		}
	}
}