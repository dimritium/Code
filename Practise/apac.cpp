#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{
    int tc;
     int m=1;
    cin>>tc;
    while(tc--)
    {

        vector<string>v;
        string s,u;
        getline(cin,s);
        cout<<s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
            v.push_back(u);
            cout<<u<<"\n";
            u.erase();
            continue;
            }
        else
            u=u+s[i];
        }
        v.push_back(u);
            cout<<"case "<<m<<"\n";
            cout<<v.at(2)<<"\n";
            for(int i=v.size()-1;i>=0;i--)
                cout<<v.at(i)<<" ";
                m++;

    }
    return 0;
}
