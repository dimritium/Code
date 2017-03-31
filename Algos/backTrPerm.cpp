//string permutations
#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *a, int l, int r)
{
    int i;
    if(l==r)
    cout<<a<<endl;
    else
    {
        for(i=l; i<= r; i++)
        {
            swap((a+l),(a+i));
            cout<<a<<"bef"<<endl;
            permute(a, l+1, r);
            swap((a+l), (a+i));
            cout<<a<<"In"<<endl; 
        }
    }
}
int main()
{
    char str[] = "ABC";
    int n = strlen(str);
    permute(str, 0, n-1);
    return 0;
}