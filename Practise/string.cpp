#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {

        vector<string> v;
    string s,u;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
        if(s[i]==' ')
        {
        v.push_back(u);
        u.erase();
        continue;
        }
    else
    u+=s[i];
    v.push_back(u);
    for(int i=v.size()-1;i>=0;i--)
        cout<<v.at(i)<<" ";
        cout<<"\n";
    }
    return 0;
}
