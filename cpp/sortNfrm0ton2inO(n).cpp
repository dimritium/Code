//basic idea is to use radix sort which uses counting sort as its base
#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

int countSort(int arr[], int n, int exp)
{
    int output[n];
    int i, count[n];
    for(i = 0; i < n; i++)
    count[i] = 0;

    fl(i, 0,n)
    count[(arr[i]/exp)%n]++;
}

int main()
{

}