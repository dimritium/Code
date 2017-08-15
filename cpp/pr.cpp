#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

void foo(int **const p)
{
    int j = 11;
    *p = &j;
    cout<<**p<<endl;
}
int main()
{
    int i = 10;
    int *p = &i;
    foo(&p);
    cout<<*p<<endl;
    cout<<*p<<endl;
}