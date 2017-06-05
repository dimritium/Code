#include<bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define MOD 10000000007

using namespace std;

typedef struct res
{
	int i,j,sum;
}res;

res max_sub(int a[],int n)
{
	int i;
	res max,max_curr;
	max_curr.sum=-1*INT_MAX;
	cout<<max_curr.sum<<endl;
	max=max_curr;
	for(i=0;i<n;i++)
	{
		if(max_curr.sum<=0)
		{
			max_curr.sum=a[i];
			max_curr.i=i;
			max_curr.j=i;
		}
		else
		{
			max_curr.sum+=a[i];
			max_curr.j=i;
		}
		if(max_curr.sum>max.sum)
		{
			max=max_curr;
		}
	}
	return max;
}
int main()
{
	int a[]={-2, -3, -4, -2, -2,-1,-5,-2};
	res x;
	x=max_sub(a,8);
	cout<<x.sum<<" "<<x.i<<" "<<x.j;
}