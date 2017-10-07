#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    int arr[] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n;
    cin>>n;
    for(int i=0; i<14; i++)
        if(n%arr[i]==0){
            cout<<"YES";
            exit(0);
        }
    cout<<"NO";
}