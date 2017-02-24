#include<bits/stdc++.h>
using namespace std;
void findB(int n);
int main()
{
	findB(5);

}
void findB(int n)
{
	string s;
	queue<string>q;
	q.push("1");
	while(n--)
	{
		s=q.front();
		cout<<s<<endl;
		q.push(s+"0");
		q.push(s+"1");
		q.pop();
	}
}