#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    string s;
    cin>>s;
    vector<char>v;
    for(int i=0;s[i]!='\0';i++)
        v.push_back(s[i]);
    sort(v.begin(),v.end());
    cout<<"Characters\tFrequency\n";
    for(int i=0;i<s.length();i++)
    {
        if(v[i]==v[i+1])
            count++;
        else
        {
            cout<<v.at(i)<<"\t\t\t"<<count+1<<endl;
            count=0;
        }
    }
    return 0;
}
