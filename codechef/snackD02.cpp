#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int tc;
    int64_t n,i,x,max=-9999999999,sum,k,j,min,m;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        int64_t v[n];
        for(i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]>max)
                max=v[i];
        }

        //for(k=1;k<n;k++)
        //{
         for(i=1;i<n;i++)
          {
              sum=0;min=0,m=0;
             for(j=m;j<=i+m,m<n-i;j++,m++)
             {
                (int64_t)(sum+=v[j]);
                if(v[j]<0&&v[j]<min){
                    min=v[j];
                }
                 (int64_t)(sum+=(min*-1));
             if(sum>max)
                    max=sum;
                sum=0;
             }
          }
        //}
        cout<<(int64_t)max<<endl;
        for(i=0;i<n;i++)
            v[i]=0;
        max=-9999999999;
   }
  return 0;
}
