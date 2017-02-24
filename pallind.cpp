#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int palind(long long int);
int main()
{
    vector<long long int>v;
    int i,j;
    for(i=100;i<=999;i++)
    {
        for(j=100;j<=i;j++)
       {
        long long int no=i*j;
        if(palind(no)==1)
            v.push_back(no);
       }
    }
    cout<<v.at(0);
    for(i=0;i<v.size();i++)
        cout<<v.at(i)<<"\n";
        return 0;
}
int palind(long long int n)
{

    long long int m=n;
    long long rev=0;
    while(n)
    {
        rev+=rev*10+n%10;
        n=n/10;
    }
    if(rev==m)
        return 1;
    else
        return 0;
}
