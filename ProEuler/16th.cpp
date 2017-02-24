#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double a[10000];
    a[1]=2;
    for(int i=2;i<=10000;i++)
        a[i]=2*a[i-1];
    int tc;
    cin>>tc;
    while(tc--)
        {
        double n;
        double sum=0;
        cin>>n;
        while(a[n])
            {
                sum+=a[n]%10;
            a[n]=a[n]/10;
        }
        cout<<sum;
    }
    return 0;
}

