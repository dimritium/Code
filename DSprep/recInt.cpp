#include<bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define MOD 10000000007

using namespace std;
class state
{
	static int x;
	public:
	static int statevar(int n)
	{
		x=n;
	} 
};
int main()
{
	static state x1=new state();
	x1.statevar(5);
	state x2=new state();
	x2.statevar(6);

}