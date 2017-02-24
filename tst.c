#include<stdio.h>
int main()
{
	int n,x;
	printf("Enter length of histogram\n");
	scanf("%d",&n);
	printf("\n");
	for(x=0;x<n;x++)
	{
		if(x==0)
		printf(" _______\n");
		printf("|	|\n");
	}
	return 0;
}
