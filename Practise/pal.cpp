#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len=0,i,x=0,st=0;
    string s;
    cin>>s;
    if(s[0]=='-')
    s.erase(s.begin()+0);
    for(i=0,len=0;s[i]!='\0';i++,len++);
    for(i=0;i<len/2&&s[i]==s[len-1-i];i++,x++);
    if(x==((len)/2))
        cout<<"The given string is palindrome";
    else
        cout<<"The given string is not palindrome";
    return 0;
}
