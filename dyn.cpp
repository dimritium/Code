#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *p=new int[100];
    int i;
    for(i=0;i<5;i++)
        cin>>p[i];
    for(i=0;i<5;i++)
        cout<<p[i];
    delete p;
    return 0;

}
