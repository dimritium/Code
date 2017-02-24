#include<bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define MOD 10000000007

using namespace std;
void insert(stack <int>&st,int x)
{
	if(st.empty()||x>=st.top())
	{
		st.push(x);
		return;
	}
	else
	{
		int y=st.top();
		st.pop();
		insert(st,x);
		st.push(y);
	}
}
void sort(stack <int>&st)
{
	if(st.empty())
		return;
	int x=st.top();
	st.pop();
	sort(st);
	insert(st,x);
}
int main()
{
	stack<int> st;
	st.push(30);
	st.push(-5);
	st.push(18);
	st.push(-1);
	sort(st);
	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
	return 0;
}