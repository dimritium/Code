#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int p,i,j;
    float avg,sum=0;
    cout<<"Enter no of processes:\n";
    cin>>p;
    int a[p][2];
    string s;
    for(i=0;i<p;i++)
    {
        s="arrival";
        for(j=0;j<2;j++)
     {
        cout<< "Enter "<<s<<" time for P"<<(i+1)<<" Process: ";
        cin>>a[i][j];
        s="burst";
     }
    }
    for(i=0;i<p;i++)
        sum+=a[i][1];
    avg=sum/p;
    cout<<"\nAverage time of scheduling for all processes: "<<setprecision(3)<<avg;
}
