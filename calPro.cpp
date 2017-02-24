#include<bits/stdc++.h>
using namespace std;
class cal
{
public:
	int add(int a,int b)
	{
		return a+b;
	}
	int sub(int a,int b)
	{
		return a-b;
	}
	int mul(int,int);
	float div(int,int);

};
int cal::mul(int a,int b)
{
	return a*b;
}
float cal::div(int a,int b)
{
	if(b==0){
		cout<<"Undefined\n";
	}
	else
	return (float)a/b;
}
int main()
{
	cal x1;
	int ch,a,b;
	char cho='y';
	while(cho=='y'||cho=='Y')
    {
	cout<<"1 for add\n2 for sub\n3 for mul\n4 for dividing\n";
	cin>>ch;
	cout<<"Enter two nos\n";
	cin>>a>>b;
	switch(ch)
	{
		case 1:cout<<x1.add(a,b);
		break;
		case 2:cout<<x1.sub(a,b);
		break;
		case 3:cout<<x1.mul(a,b);
		break;
		case 4:cout<<x1.div(a,b);
		break;
		default:cout<<"Wrong choice\n";
	}
	cout<<"\nDo you wish to continue?y or n\n";
	cin>>cho;
    }
	return 0;
}
