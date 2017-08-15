#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    // printf("%c",char(48));
    while(tc--){
        string s;
        cin>>s;
        for(int i=0; i<s.length();i+=2){
            int inc = s[i+1]-'0';
            while(inc--){
                cout<<s[i];
            }
        }
        // map<char,int>mymap;

        // for(int i=0; i<s.length(); i+=2){
        //     mymap.insert(pair<char,int>(s[i],s[i+1]-'0'));
        // }
        // map<char,int>::iterator it = mymap.begin();
        // for(it = mymap.begin(); it!=mymap.end(); it++){
        //     while(it->second--){
        //         cout<<it->first;
        //     }
        //     // cout<<it->first<<" "<<it->second;
        // }
    }
}