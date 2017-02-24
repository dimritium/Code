using namespace std;
#include<bits/stdc++.h>
#define fl(i,a,b) for(i=a;i<b;i++)
int arr[1000006], dp[1000006], revdp[1000006];
int main()
{
	int i,j;
	int n;
	cin>>n;
	fl(i,0,n)
	 cin>>arr[i];
	 dp[0]=1;
	 fl(i,1,n)
	 {
	 	if(arr[i]<=arr[i-1])
	 	dp[i]=1;
	 	else
	 	dp[i]=dp[i-1]+1;
	 }
	 int ans=0;
	 reverse(arr,arr+n);
	 revdp[0]=1;
	 fl(i,1,n)
	 {
	 	if(arr[i]<=arr[i-1])
	 	revdp[i]=1;
	 	else
	 	revdp[i]=revdp[i-1]+1;
	 }
	 reverse(revdp,revdp+n);
	 fl(i,0,n)
	 ans+=max(dp[i],revdp[i]);
	 cout<<ans;
	 return 0;
}
