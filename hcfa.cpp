#include<iostream>
using namespace std;
int hcf(int a,int b);
int main()
{
	int a,b;
	cout<<"Input two nos\n";
	cin>>a>>b;
	int hc=hcf(a,b);
	cout<<"HCF= "<<hc;
	cout<<"LCM= "<<(a*b)/hc;
}
int hcf(int a,int b)
{
	if(b==0)
		return a;
	else
		return hcf(b,a%b);
}