#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    ll a, b;
    ifstream in;
    ofstream out;
   in.open("input.txt");
   out.open("output.txt");
   in>>a>>b;
   out<<(a+pow(b,2));
   in.close();
   out.close();
}