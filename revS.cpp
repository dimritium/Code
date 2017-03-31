#include <bits/stdc++.h>
#include <iostream>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

void rev(char s[], int i)
{
    if(s[i] == '\0')
    return;
    else
    rev(s, i+1);
    cout<<s[i];
}
int main()
{
 string s = "adasd";
 int i = 0;
 reverse(s.begin()+i, s.end());
 cout<<s;
 
}