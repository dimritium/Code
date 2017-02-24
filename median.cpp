#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>v;
	int n,x;
	float median;
	cout<<"Enter no of elements\n";
	cin>>n;
	cout<<"Enter elements\n";
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	cout<<"Median is ";
	if (n % 2 == 0)                                        
          median = (v[n/2] + v[n/2-1])/2.0 ;                   
       else                                                    
          median = v[n/2];
      cout<<median;
      return 0;
}