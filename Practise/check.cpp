#include<iostream>
using namespace std;
int x=5;
int main()
{
  extern int x;
  x=3;
	{
		
		cout<<x<<" "<<::x;
	}
	return 0;
}
