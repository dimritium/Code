#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define MOD 1000000007
#define pb push_back

using namespace std;

int check(int v1,int v2)
{
	if(v1==abs(v2))
		return 1;
	else
		return 0;
}

int poped(vector<long long int>v)
{
	if(v.empty())
		return 0;
	long long int v1 = v.back();
	v.pop_back();
	return v1;
}

int main()
{
	long long int n,x,i,max=0,j;
	vector<long long int>v,v1;
	cin>>n;
	fl(i,0,n)
	{
		cin>>x;
		v.pb(x);
	}
	fl(i,0,n)
	{
	  long long int row = 0;
	for(j=i;j<n;j++)
	{ 
		if(v[j]>0)
			v1.pb(v[j]);
		else if(v[j]<0)
		{
			if(check(poped(v1),v[j])){
				row++;
			}
			else
				break;
		}
	}
	if(row>max)
			max=row;
	}
	max==0?cout<<max:cout<<max+1;
}