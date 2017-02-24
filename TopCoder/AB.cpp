#include<iostream>
using namespace std;
class AB
{
public:
    int flag=0,m,p;
    string createString(int n,int k)
    {
        int i,j;
        string s;
        if(k==0)
           {
            for(i=0;i<n;i++)
                s+='B';
        return s;
           }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
            if((i*j)==k&&(i+j)<=n)
            {
                flag=1;
                m=i;
                p=j;
                break;
            }
          }
          if(flag==1)
            break;
        }
             if(flag==0)
                return "";

        if((m+p)==n)
        {
            if(m<=p)
            {
                for(i=0;i<m;i++)
                    s+='A';
                for(i=0;i<p;i++)
                    s+='B';
                return s;
            }
            else
            {
                for(i=0;i<p;i++)
                    s+='A';
                for(i=0;i<m;i++)
                    s+='B';
                return s;
            }
        }
        else
        {
            for(i=0;i<(n-(m+p));i++)
            s+='B';

            if(m<=p)
            {
                for(i=0;i<m;i++)
                    s+='A';
                for(i=0;i<p;i++)
                    s+='B';
                return s;
            }
            else
            {
                for(i=0;i<p;i++)
                    s+='A';
                for(i=0;i<m;i++)
                    s+='B';
                return s;
            }

        }

    }
};
int main()
{
    AB x1;
    string s1;
    s1=x1.createString(2,0);
    cout<<s1;
    return 0;
}
