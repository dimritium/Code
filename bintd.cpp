#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,i=0,a[10];
    cout<<"Enter number to convert into binary\n";
    cin>>n;
    while(n)
    {
        a[i]=n%2;
        n=n/2;
        i++;
    }
    cout<<"Answer = ";
    for(int j=i-1;j>=0;j--)
    cout<<a[j];
}
