#include<iostream>
using namespace std;
int main()
{
    int a[30],n,min,max;
    cout<<"Enter limit of array\n";
    cin>>n;
    a[n];
    cout<<"Enter the numbers\n";
    cin>>a[0];
    min=a[0],max=a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        if(a[i]<min)
            min=a[i];
        if(a[i]>max)
            max=a[i];
    }
    cout<<"Largest number = "<<max<<"\n";
    cout<<"Smallest number = "<<min;
}
