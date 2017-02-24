#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a[1000000]={0},j,i;
	a[1]=1;
	for(i=2;i<sqrt(1000000);i++)
		for(j=i*i;j<1000000;j+=i)
		{
			a[j]=1;
		}
	vector<long long int>v;
	for(i=2;i<1000000;i++)
		if(a[i]==0)
		{
			v.push_back(i);
			cout<<i;
		}

}