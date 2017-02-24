#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{
	int tc,len,z;
	cin>>tc;
	while(tc--)
	{
		string a;
		cin>>a;
		len=a.size();
		
		for(z=len-1;z>=0;z--)
		cout<<a[z];
		cout<<"\n";
	}
	return 0;
}
