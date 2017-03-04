#include <stdio.h>
#include <stdlib.h>
int main() 
{

    int Units;
    float charge;
    int i,n;
    printf("Enter number of User:--\n");
    scanf("%d",&n);
    char Name[n][20];
	printf("Enter the name of the user: ");
    for(i=0;i<n;i++)
	{
	scanf("%s",Name[i]);
	}
  
    printf("Enter Total Units Consumed\n");
    scanf("%d",&Units);
    if(Units>=0&&Units<=200)
    charge=100+(Units*0.80);
    else if(Units>200&&Units<=300)
    charge=100+(Units*0.90);
    else if(Units>300&&Units<=400)
    charge=100+Units;
    else
    charge=(100+Units)+(100+Units)*15;
    printf("Name Units Charge\n");
    for(i=0;i<n;i++)
	{
	
	printf("%s %d %.2f",Name[i],Units,charge);
    }
	return 0;
}
