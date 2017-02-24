#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10][10],b[10][10];
    int ro,co;
    cout<<"Enter the order of matrix m x n\n";
    cin>>ro>>co;
    a[ro][co],b[ro][co];
    cout<<"Enter elements in first matrix\n";
    for(int i=0;i<ro;i++)
        for(int j=0;j<co;j++)
        cin>>a[i][j];
    cout<<"Enter elements in second matrix\n";
    for(int i=0;i<ro;i++)
        for(int j=0;j<co;j++)
        cin>>b[i][j];
    cout<<"Result of addition\n";
     for(int i=0;i<ro;i++){
        for(int j=0;j<co;j++){
        cout<<(a[i][j]+b[i][j])<<" ";
        }
        cout<<endl;
     }
      return 0;
}
