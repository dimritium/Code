#include<bits/stdc++.h>
using namespace std;
int freq[10005]={0};
int hashFunc(int z)
{
	int index=z%10;
	freq[index]=freq[index];
}
int main()
{
	int tc,n,x;
	cin>>tc;
	while(tc--)
	{
		int count=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			hashFunc[x];
		}
		for(int i=0;i<10005;i++)
		{
			if(freq[i]>1)
			count+=freq[i];
		}
		for(int i=0;i<n;i++)
		cout<<freq[i]<<endl;
		cout<<count<<endl;
		for(int i=0;i<10005;i++)
		freq[i]=0;
	}
}
