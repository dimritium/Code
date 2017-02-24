#include<bits/stdc++.h>
using namespace std;
int convtd(string);
string convtb(int);
int main()
{
    string a,b,c;
    cout<<"Enter two bin nos"<<endl;
    cin>>a>>b;
    int n1=convtd(a);
    int n2=convtd(b);
    int n3=n1+n2;
    string bn=convtb(n3);
    for(int i=(bn.size()-1);i>=0;i--)
        cout<<bn[i];
    return 0;
}
int convtd(string c)
{
    int x,no=0;
    for(int i=(c.size()-1),x=1;i>=0;i--,x*=2)
    {
        no+=(int)((c[i]-48)*x);
    }
    return no;
}
string convtb(int n3)
{
    int i=0;
    string bbn;
    while(n3)
    {
        bbn[i]=(n3%2)+48;
        n3=n3/2;
        bbn+=bbn[i];
        i++;

    }
    return bbn;
}
