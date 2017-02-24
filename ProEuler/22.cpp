#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<string>s;
    string name;
    int n,q;
    cin>>n;
    while(n--)
        {
        cin>>name;
        s.push_back(name);
    }
    sort(s.begin(),s.end());
    cin>>q;
    while(q--)
        {
        cin>>name;
        long long int score=0;
        for(int i=0;i<s.size();i++)
            {
            if(s[i]==name)
                {
                for(int j=0;j<name.length();j++)
                    score+=(int)(name[j]-64);
                score=score*(i+1);
                cout<<score<<endl;
                break;
            }
        }
    }
    return 0;
}
