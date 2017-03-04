#include<iostream>
using namespace std;
int main()
{

    int a[100]={0},i,j,n;
    for(int i=2;i<100;i++)
    {
        for(j=i*i;j<100;j+=i)
            a[j-1]=1;
    }
    cin>>n;
    if(a[n-1]==0)
        cout<<n<<" is prime";
    return 0;
}
