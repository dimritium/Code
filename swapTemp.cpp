#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define MOD 1000000007
#define pb push_back

using namespace std;

template<class T>
void swap_(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
};

int main()
{
	int a = 5, b=8;
	swap_(a, b);
	cout<<a<<b;
	float c=5.5, d = 5.9;
	swap_(c, d);
	cout<<c<<" "<<d;
}