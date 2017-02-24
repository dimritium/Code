#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ro;
    cout<<"Enter the no of rows\n";
    cin>>ro;
    for(int i=0;i<ro;i++)
    {
        for(int k=0;k<(ro-i-1);k++)
            cout<<" ";
        for(int j=1;j<=(i*2+1);j++)
        {
            if((j!=1)&&(j!=(i*2+1)))
         cout<<"* *";
         else
            cout<<" * ";
        }
        cout<<endl;
    }
}
