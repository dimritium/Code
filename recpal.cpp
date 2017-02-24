#include<bits/stdc++.h>
using namespace std;
int chkpal(string,int);
int len;
int i=0;
int main()
{
    string s;
    cin>>s;
   len=s.size();
   if(s[0]=='-')
   {
    s.erase(s.begin()+0);
    len--;
   }
    if(chkpal(s,len))
        cout<<"Palin";
    else
        cout<<"Not Palin";
    return 0;
}
int chkpal(string s,int x)
{
    if(x==len/2)
        return 1;
    else if(s[i]==s[len-i-1])
    {
        x++;
        i++;
        chkpal(s,x);
    }
    else
        return 0;

}
