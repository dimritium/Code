#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[8][8];
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
    {
        if(i==0||i==7)
         a[i][j]="*";
        else if(j==i||(7-j)==i)
            a[i][j]="*";
        else
            a[i][j]=" ";

    }
     for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cout<<a[i][j];
        }
        cout<<"\n";
     }
    return 0;
}
