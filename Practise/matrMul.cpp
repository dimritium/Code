#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10][10],b[10][10];
    int ro,co,ro1,co1;
    cout<<"Enter the order of first matrix m x n\n";
    cin>>ro>>co;
    a[ro][co],b[ro][co];
    cout<<"Enter elements in first matrix\n";
    for(int i=0;i<ro;i++)
        for(int j=0;j<co;j++)
        cin>>a[i][j];
    cout<<"Enter the order of second matrix m x n\n";
    cin>>ro1>>co1;
    int c[ro][co1];
    if(co==ro1)
    {
    cout<<"Enter the elements of second matrix\n";
    for(int i=0;i<ro1;i++)
        for(int j=0;j<co1;j++)
        cin>>b[i][j];
  cout<<"Multiplication result\n";
    for(int i=0;i<ro;i++)
    {
      for(int j=0;j<co1;j++)
      {
        int sum=0;
        for(int k=0;k<ro1;k++)
        sum+=a[i][k]*b[k][j];
        c[i][j]=sum;
      }
    }
    for(int i=0;i<ro;i++)
    {
        for(int j=0;j<co1;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
 }
    else
        cout<<"Multiplication not possible";
    return 0;
}
''