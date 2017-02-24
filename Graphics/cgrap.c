#include<graphics.h>
int main()
void wait_for_char();
{
    int gd=DETECT,gm,top=100,right=200,bottom=200,left=100,x=300,y=300,y=150,radius=50;
    initgraph(&gd,&gm,NULL);
    rectangle(top,left,bottom,right);
    circle(x,y,radius);
    line(left-10, top+150,left+400,top+450);
    outtextxy(left+100,top+325,"graphics sucks");
    
    delay(100);
    wait_for_char();
    closegraph();
    return 0;
}
void wait_for_char()
{
//Wait for a key press
int in = 0;
while (in == 0) {
    in = getchar();
 }
}