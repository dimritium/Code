#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#define MOD 10000000000000000007
using namespace std;
int main()
{
    long long int tc,A,D,L,R,i,j,res,a[9];
    cin>>tc;
    while(tc--)
    {
        long long int count=0,set=0;
        cin>>A>>D>>L>>R;
        A=A%9;
        D=D%9;
        for(i=L,j=0;i<(L+9);i++,j++)
        {
            res=(A+((i-1)*D))%9;
            if(res>0)
            {
                a[j]=res;
                set+=res;
            }
            else
            {
                a[j]=9;
                set+=9;
            }
        }
        count=((R-L+1)/9)*set;
        for(i=0;i<(R-L+1)%9;i++)
            count+=a[i];
        cout<<count%MOD<<"\n";
        count=0;
    }
    return 0;
}

