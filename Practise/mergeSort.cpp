#include<iostream>
using namespace std;
void merge(int A[],int,int,int);
void merge_sort(int A[],int,int);
int main()
{
int A[20],n;
cin>>n;
A[n];
for(int i=0;i<n;i++)
    cin>>A[i];
merge_sort(A,0,n-1);
for(int i=0;i<n;i++)
    cout<<A[i]<<"\n";
return 0;
}
void merge(int A[],int start,int mid,int end)
{
    int p=start,q=mid+1;
    int Arr[end-start+1],k=0;

    for(int i=start;i<=end;i++)
    {
        if(p>mid)
        Arr[k++]=A[q++];
        else if(q>end)
            Arr[k++]=A[p++];
        else if(A[p]<A[q])
            Arr[k++]=A[p++];
            else
            Arr[k++]=A[q++];
    }
    for(int p=0;p<k;p++)
        A[start++]=Arr[p];
}
void merge_sort(int A[],int start,int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        merge_sort(A,start,mid);
        merge_sort(A,mid+1,end);
        merge(A,start,mid,end);
    }
}

