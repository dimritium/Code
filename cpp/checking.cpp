#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;
class s
{
  int x;
  friend void show();
};

class f
{
    int y;
    friend void show();
};

void show(s obj, f obj1)
{
    obj.x = obj1.y =1;
    cout<<obj.x<<obj1.y;
}
int main()
{
    s obj;
    f 
}