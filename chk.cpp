#include<stdio.h>
static int i=1;
	void pr()
{
	printf("%d\n",i++);
	if(i<=100)
	pr();
}
int main()
{

		pr();
	
	
	return 0;

	

}
