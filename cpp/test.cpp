#include <bits/stdc++.h>
#include <iostream>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;


class res
{
    public:
   int x, y;
   res(){
       x =5;
       y=7;
   }
};
int main()
{
    res* x = new res();
    cout<<x->x;
}