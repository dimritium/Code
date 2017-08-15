#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

void swap_(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

int main(int argc, char const *argv[])
{
	/* code */
	string s="asdad";
	swap_(s[0], s[6]);
	cout<<s;
	return 0;
}