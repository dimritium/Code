#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long 
#define MOD 1000000007
#define pb push_back

using namespace std;

int main()
{
	int tc, n, i, j, k, sum_new, l;
	cin>>tc;
	ll sum = 0, max_sum = 0;
	while(tc--)
	{
		cin>>n;
		int arr[n][n]={0};
		fl(i, 0, n)
		  fl(j, 0, i+1)
		  {
		  	cin>>arr[i][j];
		  }
		  sum = arr[0][0];

		  fl(l, 0, 2)
		  {
		  	sum = 0;
		  	fl(k, 0, n)
		  	{
		  	 sum += arr[k][0];
		  	 sum_new = sum;
		  	 j = l;
		  	 fl(i, k+1, n)
		  	 {
		  	  sum_new += arr[i][j];
		  	   if(arr[i+1][j] > arr[i+1][j+1] && (i+1) < n && (j+1) < n)
		  	   {
		  		if(j-1 >= 0 && arr[i+1][j-1] > arr[i+1][j])
		  			j = j-1;
		  		}
			  	else
			  	{
			  		if(j-1 >= 0 && arr[i+1][j-1] > arr[i+1][j+1])
			  			j = j-1;
			  		else
			  			j = j+1;	
			  	}
			  }
			  if(sum_new > max_sum)
			  {
			  	max_sum = sum_new;
			  }	
			}
		}
		cout<<max_sum<<endl;
		max_sum = 0;
	}
}