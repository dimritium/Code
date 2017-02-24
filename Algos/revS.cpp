#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define MOD 1000000007
#define pb push_back

using namespace std;

void swap1(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

void reverse(char str[])
{
	int n = strlen(str), i;
	for(i = 0; i<n/2; i++)
		swap1(&str[i], &str[n-i-1]);
}

int main()
{
	char str[] = "abc";
	reverse(str);
	cout<<"Reversed string is "<<str;  
}