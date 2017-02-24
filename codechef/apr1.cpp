#include<bits/stdc++.h>
using namespace std;
void hashit(char);
int freq[5]={0};
int main()
{
    int tc;
    string S;
    long long int N,i,p,q,r;
    cin>>tc;
    while(tc--)
    {
        for(i=0;i<5;i++)
            freq[i]=0;
        cin>>N;
        cin>>S;
        for(i=0;i<N;i++)
            hashit(S[i]);
    freq[17]=p;freq[6]=q;freq[1]=r;
    if(freq[17]==freq[6]==freq[1])
    {
        if(freq[17]==1)
            cout<<1<<endl;
        else
            cout<<2*p<<endl;
    }
    else if(p>q&&p>r)
        cout<<p+r<<endl;
    else if(q>p&&q>r)
        cout<<p+r<<endl;
    else
        cout<<p+q<<endl;
    }
    return 0;
}
void hashit(char c)
{
    freq[c-'A']++;
}
