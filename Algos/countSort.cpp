#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

void count_sort(int A[], int sortedA[], int N){
    int k = 0;
    int Aux[N];
    for(int i = 0; i<N; i++){
        k = max(k, A[i]);
    }

    for(int i = 0; i<=k; i++){
        Aux[i] = 0;
    }
    for(int i = 0; i<N; i++){
        Aux[A[i]]++;
    }
    int j = 0;
    for(int i=0; i<=k; i++){
        int tmp = Aux[i];
        while (tmp--)
        {
            sortedA[j] = i;
            j++;
        }
    }
}
int main()
{
    int sortedA[] = {2,1,4,5,6}, sortedA_[5];
    int i;
    count_sort(sortedA,sortedA_, 5);
    for(int i=0; i<5; i++)
    cout<<sortedA_[i];
}