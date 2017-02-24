#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,4,6,7,24,56};
    int b[]={2,3,4,5,6,7,8,4};
    int k;
    int c[8];
    for(k=0;k<8;k++){
        c[k]=*(a+k)+*(b+k);
    }
    for(k=0;k<8;k++)
        cout<<c[k]<<"\n";
}
