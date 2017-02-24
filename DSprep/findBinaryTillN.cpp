#include<bits/stdc++.h>
#define fl(a,c) for(a=0;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define MOD 10000000007

using namespace std;

void genPB(int n)
{
	queue<string>q;
	q.push("1");
	while(n--)
	{
		string s1=q.front();
		q.pop();
		cout<<s1<<"\n";
		string s2=s1;
		q.push(s1.append("0"));
		q.push(s2.append("1"));
	}
}
int main()
{
	int 10;
	genPB(n);
	return 0;
}