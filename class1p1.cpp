#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,c=0;
    cout<<"Enter a no: ";
    cin>>n;
    while(n)
    {
        sum+=n%10;
        c++;
        n=n/10;
    }
    cout<<"Sum of digits: "<<sum<<"\nNo of Digits: "<<c;

}
