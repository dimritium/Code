#include<iostream>
using namespace std;
#define b "Not a leap year"
#define a "A leap year"
int main()
{
    int year;
    cout<<"Enter year\n";
    cin>>year;
    (year%100==0)?(year%400==0)?cout<<a:(cout<<b):(year%4==0)?cout<<a:cout<<b;
    return 0;
}
