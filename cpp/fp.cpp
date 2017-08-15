#include<stdio.h>
#include<string.h>

void check(char *a, char *b, int(*comp)(const char *, const char *));

int main()
{
	char s1[80], s2[80];
	int (*p)(const char *, const char *);

	p = strcmp;
	gets(s1);
	gets(s2);
	check(s1, s2, strcmp);
	return 0;
}

void check(char *a, char *b, int (*comp)(const char *, const char *))
{
	printf("Testing for equality\n");
	if(!(*comp)(a, b))
		printf("Equal\n");
	else
		printf("Not Equal\n");
}