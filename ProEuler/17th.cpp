#include<iostream>
#include<string>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string n;
        cin>>n;
        int len=n.length();
        if(len%3==0)
        {
        len=len/3;
        string s[len];
        }
        else
        {
        len=len/3 + 1;
            string s[len];
        }
        cout<<len;
    }
}
