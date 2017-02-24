#include<iostream>
using namespace std;
int main()
{
    int a[20][20],i,j,k;
    for(i=0;i<20;i++)
        for(j=0;j<20;j++)
        cin>>a[i][j];
    long long int res=1,max=0;
    for(i=0;i<20;i++)
    {
        for(j=0;j<17;j++)
        {
        for(k=j;k<j+4;k++)
        {
        res*=a[i][k];
        }
        if(res>max)
        max=res;
             res=1;
        }

   }
   for(i=0;i<17;i++)
   {
       for(j=0;j<20;j++)
       {
           for(k=i;k<i+4;k++)
            res*=a[k][j];
           if(res>max)
            max=res;
            res=1;
       }

   }
 for(i=0;i<17;i++)
 {
     for(j=0;j<17;j++)
     {
         for(k=j;k<=j;k++)
         res=a[i][k]*a[i+1][k+1]*a[i+2][k+2]*a[i+3][k+3];
         if(res>max)
            max=res;
           res=1;
     }

 }
    for(i=0;i<17;i++)
    {
        for(j=19;j>=3;j--)
          {
            for(k=j;k<=j;k++)
            res=a[i][j]*a[i+1][j-1]*a[i+2][j-2]*a[i+3][j-3];
            if(res>max)
            max=res;
            res=1;
        }
    }
 cout<<max;
}
