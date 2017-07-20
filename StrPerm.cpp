#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;


int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        do{
            cout<<s<<" ";
        }while(next_permutation(s.begin(),s.end()));
    }
}