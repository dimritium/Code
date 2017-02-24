#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    long long int tc,carry=0,sum=0,flg=0,i,j;
    cin>>tc;
    char a[tc][50];
    vector<int>v;
    for(i=0;i<tc;i++)
    {
        for(j=0;j<50;j++)
            cin>>a[i][j];
    }
    if(tc==1)
    {
        for(i=0;i<=0;i++)
            for(j=0;j<10;j++)
            cout<<(a[i][j]-48);
    }
    for(i=49;i>9;i--)
    {
        for(j=0;j<tc;j++)
            sum+=(a[j][i]-48);
            sum=sum+carry;
                carry=sum/10;
        sum=0;

    }
    for(i=9;i>=0;i--)
    {
        for(j=0;j<tc;j++)
            sum+=(a[j][i]-48);
        sum=sum+carry;
        if(i==0)
        {
            while(sum)
            {
                v.push_back(sum%10);
                sum=sum/10;
            }
        }
        else
        {
        v.push_back(sum%10);
        carry=sum/10;
        sum=0;
        }
    }
    reverse(v.begin(),v.end());
    for(i=0;i<10;i++)
        cout<<v.at(i);
    return 0;
}
