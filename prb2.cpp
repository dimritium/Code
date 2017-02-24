#include<bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define MOD 10000000007

using namespace std;

int main()
{
	int n,m,i,j;
	cin>>n>>m;
	char arr[n][m];
	string s,ns;
	for(i=0;i<n;i++)
	{
		cin>>s;
		fl(j,0,m)
		{
			arr[i][j]=s[j];
		}
	}
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<m;j++)
		{
			cout<<arr[i][j];
		}
		cout<<endl;
	}
	return 0;
}