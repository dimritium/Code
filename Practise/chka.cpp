#include<iostream>
using namespace std;
#include<vector>
int main()
    {
    int n;
    cin>>n;
    long long int a[n],x,sum=0;
    for(int i=0;i<n;i++)
        {
        cin>>x;
        a[i]=x;
        sum+=a[i];
    }
    cout<<sum;
    return 0;
}
