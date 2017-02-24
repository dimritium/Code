#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ro,k=1,flag=0,flag2=0;
    int a[101]={0};
    a[0]=1;
    for(int i=1,x=2;i<100;i++,x++)
        a[i]=x;
    for(int i=1,x=1;i<100;i++)
        a[i]=a[i-1]+a[i];
    cout<<"Enter the number\n";
    cin>>ro;
    for(int i=0;i<100;i++){
        if(a[i]==ro){
        flag=1;
        break;
        }
    }
    if(flag==1)
        {
            for(int i=0;;i++){
        for(int j=0;j<=i;j++)
        {
            if(k<=ro)
        cout<<k++<<"\t";
        if(k>ro)
            flag2=1;
        }
        if(flag2==1)
            break;
        cout<<endl;
          }
        }
    else
        cout<<"Floyd triangle doesn't exist";

    return 0;
}
