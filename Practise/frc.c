#include<stdio.h>
int main()
{
	int N,i;
    scanf("%d",&N);
    int a[N],pos=0,neg=0,zer=0;
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    for(i=0;i<N;i++)
      {
	if(a[i]<0)
     neg++;
    else if(a[i]>0)
    pos++;
else
zer++;
}
float x,y,z;
x=(float)pos/N;
y=(float)neg/N;
z=(float)zer/N;
printf("%.3f\n",x);
printf("%.3f\n",y);
printf("%.3f\n",z);
return 0;
}

