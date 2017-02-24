#include<iostream>
using namespace std;
int main()
{
    int a[6][6],j,k,i;
    for(i=0;i<6;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0||i==j)
                a[i][j]=1;
            else
                a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(i=0;i<6;i++)
    {
        for(k=6-i;k>0;k--)
                cout<<" ";

        for(j=0;j<=i;j++)
        {

            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
