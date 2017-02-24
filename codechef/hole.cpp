#include<iostream>
using namespace std;
int main()
{

    int tc,hol=0;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        for(int i=0;s[i]!='\0';i++)
            if(s[i]=='A'||s[i]=='D'||s[i]=='O'||s[i]=='P'||s[i]=='Q'||s[i]=='R')
            hol++;
            else if(s[i]=='B')
                hol+=2;
        cout<<hol<<"\n";
        hol=0;
    }
    return 0;
}
