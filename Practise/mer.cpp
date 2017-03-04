#include<bits/stdc++.h>
using namespace std;
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
        A[start++]=Arr[p];//real array contains both parts
}
void merge_sort(int A[],int start,int end)
{
    int mid;
    if(start<end)
    {
        mid=(start+end)/2;
        merge_sort(A,start,mid);
        merge_sort(A,mid+1,end);
         merge(A,start,mid,end);
    }
     
}
int main()
{
    int n;
 cout<<"Enter the no of elements";
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
    cin>>a[i];
 merge_sort(a,0,n);
 for(int i=0;i<n;i++)
    cout<<a[i]<<endl;
 return 0;
}
