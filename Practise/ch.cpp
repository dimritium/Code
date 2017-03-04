#include<iostream>
#include<cmath>
using namespace std;
int prim(long long int);
int main()
{
	long long int sum,N,tc;
	cin>>tc;
	while(tc--)
    {
	cin >> N;
	sum = N;
	for (int i = 2; i < N; i++)
    {
		if (sum%i != 0 && prim(i))
			sum = sum*i;
			else if(sum%i!=0 && !prim(i))
                sum=(sum*i)/(sum%i);
    }
	cout << sum<<"\n";
    }
	return 0;
}
int prim(long long int i)
{
    int flag=1;
    for(long long int x=2;x<=sqrt(i);x++)
        if(i%x==0)
    {
        flag=0;
        break;
    }
    return flag;
}
