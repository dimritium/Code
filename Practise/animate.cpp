#include<bits/stdc++.h>
#include<graphics.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define MOD 10000000007

using namespace std;

int main()
{
	int gdriver=DETECT,gmode;
	int x1=200,y1=200;
	int x2=300,y2=300;
	initgraph(&gdriver,&gmode,NULL);
	line(x1,y1,x2,y2);
	getchar();
	closegraph();
}