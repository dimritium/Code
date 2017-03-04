#include<bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define MOD 10000000007

using namespace std;
void Heapsort(int A[],int n)
{
	struct Heap *h=CreateHeap(n);
	int old_size,i,temp;
	BuildHeap(h,A,n);
	old_size=h->count;
	for(i=n-1;i>0;i--)
	{
		temp=h->array[0];
		h->array[0]=h->array[h->count-1];
		h->array[0]=temp;
		h->count--;
		PercolateDown(h,0);
	}
	h->count=old_size;
}
void BuildHeap(struct Heap *h,int A[],int n)
{
	if(h==NULL)
		return;
	while(n>h->capacity)
		ResizeHeap(h);
	for (int i=0;i<n;i++)
		h->array[i]=A[i];
}
int main()
{

}