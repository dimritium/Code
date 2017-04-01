#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define MOD 1000000007
#define pb push_back

using namespace std;

void swap_(char *a, char *b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void permute(char *a, int l, int r)
{
	int i;
	if(l==r)
		cout<<a<<"\n";
	else
	{
		for(int i=l; i<=r; i++)
		{
		swap_((a+l),(a+i));
		permute(a, l+1, r);
		swap_((a+l),(a+i));
		}
	}
}
int main()
{
	char a[] = "ABC";
	int n = strlen(a);
	permute(a,0, n-1);
	return 0;
}