#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long
#define pb push_back
using namespace std;

void countSort(int arr[], int n, int place)
{
    int range = 10;
    int i, freq[range] = {0};
    int output[n];
    fl(i, 0, n)
    freq[(arr[i]/place)%range]++;
    fl(i, 1, range)
    freq[i]+=freq[i-1];
    for(i = n-1; i>=0; i--)
    {
        output[freq[(arr[i]/place)%range]-1] = arr[i];
        freq[(arr[i]/place)%range]--;
    }
    for(i=0; i<n; i++)
    arr[i] = output[i];
}

void radixSort(int arr[], int n, int maxx)
{
    int mul = 1;
    while (maxx)
    {
        countSort(arr, n, mul);
        mul*=10;
        maxx/=10;
    }
}

int main()
{
    int arr[] = {2,1,3,4,5}, i;
    radixSort(arr, 5, 5);
    fl(i, 0, 5)
    cout<<arr[i]<<" ";
}