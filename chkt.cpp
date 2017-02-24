#include<stdio.h>
int main()
{
	float d, u, a, t;
	printf("Enter acc ");
	scanf("%f", &a);
	printf("Enter the time ");
	scanf("%f", &t);
	printf("Enter velocity ");
	scanf("%f", &u);
	d = a*t + (u*t*t) / 2;
	printf("result %f ", d);
return 0;	
}
