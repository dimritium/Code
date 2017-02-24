#include<stdio.h>

int main()
{
	int a=5,b;
//	b=cube(&a);
	printf("%d",cube(&a));
	return 0;
}
int cube(int *c)
{
	return *c * *c * *c;
}
