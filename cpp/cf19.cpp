#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define MOD 1000000007
using namespace std;

int main()
{
    string s;
    int j,c=0;
    int arr[26] = {0};
    cin>>s;
    for(int i = 0;i<s.length();i++){
        arr[s[i]-'a']+=1;
    }
    fl(j,0,26){
        if(arr[j]){
            c++;
        }
    }
    if(c%2)
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";
}