#include<bits/stdc++.h>
using namespace std;
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define ll long long int
#define MOD 1000000007

struct miax
{
	int min;
	int max;
};

miax max_min(int A[],int start,int end)
{
	miax findL,findR,maxmin;
	int mid;
	if(start==end)
	{
		maxmin.min=A[start];
		maxmin.max=A[start];
		return maxmin;
	}
	if(start==end-1)
	{
		if(A[start]<A[end])
		{
			maxmin.min=A[start];
			maxmin.max=A[end];
		}
		else
		{
			maxmin.min=A[end];
			maxmin.max=A[start];
		}
		return maxmin;
	}
	mid=(start+end)/2;
	findL=max_min(A,start,mid);
	findR=max_min(A,mid+1,end);

	if(findR.min<findL.min)
		maxmin.min=findR.min;
	else
		maxmin.min=findL.min;

	if(findR.max<findL.max)
		maxmin.max=findL.max;
	else
		maxmin.max=findR.max;
	
	return maxmin;

}
int main()
{
	int a[]={5,3,1,4,5,6};
	miax x=max_min(a,0,5);
	cout<<x.max<<" "<<x.min;	
}