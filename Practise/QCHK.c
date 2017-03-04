#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{  
   int a=0,b=0,c=0,d=0,m,i;
   printf("\n Enter the marks of 10 students: " );
   for(i=1;i<=10;i++)
  
 {
 	{

   scanf("%d",&m);
}
   if(m>75&&m<=100)
    {
    a++;  
	}
    else if(m<=75&&m>60)
	{
	  b++;
	}    
	
	
	
	
	
	else if(m<=60&&m>=40)
	{
	   c++;	
	}    	   	
    else
	{
	    d++;    
    }
 }

	printf("\nThe number of students with F.C.D are %d",a);
    printf("\nThe number of students with F.C are %d ",b);
    printf("\nThe number of students with S.C are %d ",c);
    printf("The fail students are %d",d); 
	return 0;
}
