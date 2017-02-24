#include<stdio.h>
float area(float *);
int main()
{ 
	float r, *pr=&r,result,*presult;
	printf("\n enter the radius=");
	scanf("%f",pr);
	*presult=area(&r);
	printf("\n area of circle=%.2f",*presult);
}
float area(float *x)
{  
	float a, *pa;
	pa=&a;
	*pa= *x * *x;
return *pa;
}