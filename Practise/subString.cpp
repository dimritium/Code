#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{
	int chk=0,z=0;
	string a,b;
	cin>>a>>b;
	for(int x=0;x<=5;x++)
	{
		int t=x+5;
		if((b.compare(a.substr(x,x+5))==0))
		{
		cout<<"1";
		chk=1;
		break;
     	}
     	z++;
	}
	if(chk==0)
	cout<<"0"<<z;
	return 0;
}
