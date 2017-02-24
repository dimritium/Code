#include<iostream>
using namespace std;
int main()
{
    int ro,col,i,j;
    cin>>ro>>col;
    string a[ro][col];
    for(i=0;i<ro;i++)
        for(j=0;j<col;j++)
        a[i][j]="*";
    for(i=1;i<ro-1;i++)
        for(j=1;j<col-1;j++)
        a[i][j]=".";
    for(i=0;i<ro;i++)
    {
        for(j=0;j<col;j++)
        {
        cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
