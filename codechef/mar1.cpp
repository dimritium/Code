#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 string a,b;
 cin>>t;
 while(t--)
 {
     int flag=0;
     cin>>a;
     cin>>b;
     for(int i=0;i<a.length();i++)
     {
       for(int j=0;j<b.length();j++)
       {
          if(a[i]==b[j])
         {
             cout<<"Yes\n";
             flag=1;
             break;
         }
     }
     if(flag==1)
        break;
     else if((i==(a.length()-1))&&flag==0)
     {
         cout<<"No\n";
         break;
     }
 }
}
return 0;
}
