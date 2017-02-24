#include<bits/stdc++.h>
using namespace std;
/*class calc
{
public:
    int prime(int i)
   {
     int x,y,flag=0;
     for(x=2;x<=sqrt(i);x++)
     {
         if((i%x)==0)
         {
            flag=1;
            break;
         }
     }
    if(flag==0)
        cout<<i<<" is a prime number\n";
        else
            cout<<i<<" is not a prime number\n";
   }
};*/
int main()
{
    long long int a[100000]={0},i,n,m,j;
    a[1]=1;
    a[0]=1;
    for(i=2;i<=100000;i++)
    {
        for(j=i*i;j<=100000;j+=i)
        {
            a[j]=1;
        }
    }
    int ch,no;
    char cho;

    cho='y';
    while(cho=='y'||cho=='Y')
    {
        cout<<"Enter the choice\n";
      cout<<"1.For checking if a number is prime or not\n2.For printing all prime between a range\n";
    cin>>ch;
    switch(ch)
    {

    case 1:
        cout<<"Enter the number\n";
        cin>>no;
        if(a[no]==0)
            cout<<no<<" is prime\n";
        else
            cout<<no<<" is not prime\n";
        break;
    case 2:
        long long int np=0;
        cout<<"Enter the range\n";
        cin>>n>>m;
        for(i=n;i<=m;i++)
            {
            if(a[i]==0){
                cout<<i<<"\n";
               np++;
            }
            }
        if(np==0)
            cout<<"No number to display\n";
        else
            cout<<"Total prime numbers are: "<<np<<"\n";

       break;
    }
        cout<<"Want to go again?y or n\n";
        cin>>cho;

    }
}

