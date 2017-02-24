#include<bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define MOD 10000000007

using namespace std;
void swap(int *,int *);
int main()
{
	int a=5,b=6;
	swap(&a,&b);
	cout<<a<<" "<<b;
	return 0;
}
void swap(int *a,int *b)
{
	int *c;
	*c=*b;
	*b=*a;
	*a=*c;
}