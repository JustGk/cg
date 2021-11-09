#include<graphics.h>
void dl(int x1,int y1,int x2,int y2){
	float x, y,dx,dy,steps,xinc,yinc;
    dx = (x2-x1);
    dy=(y2-y1);
    if(abs(dx)>abs(dy))
           {
        steps = dx;
    }
    else
           {
        steps = dy;
    }
    xinc = dx/steps;
    yinc = dy/steps;
    x = x1;
    y = y1;
    int i = 1;
    putpixel(x,y,RED);
    while(i<= steps)
    {
        
        x += xinc;
        y += yinc;
        putpixel(x,y, BLUE);
        i=i+1;
//        delay(0.9);
    }
}
void md(int m1,int n1,int m2,int n2){
	float x, y,dx,dy,steps,xinc,yinc;
    dx = (m2-m1);
    dy=(n2-n1);
    if(abs(dx)>abs(dy))
           {
        steps = dx;
    }
    else
           {
        steps = dy;
    }
    xinc = dx/steps;
    yinc = dy/steps;
    x = m1;
    y = n1;
    int i = 1;
    putpixel(x,y,RED);
    while(i<= steps)
    {
        
        x += xinc;
        y += yinc;
        putpixel(x,y, RED);
        i=i+1;
//        delay(2);
    }
}
int main()
{
    int gd = DETECT ,gm;
    
    initgraph(&gd, &gm, "");    
    setbkcolor(3);
    cleardevice();
    dl(50,50,50,400);
    //dl(50,400,50,50);
    dl(50,50,400,50);
    dl(400,50,400,400);
    dl(50,400,400,400);
    md(225,50,50,225);
    md(50,225,225,400);
    
    md(225,50,400,225);
    //
    md(400,225,225,400);
    getch();
    closegraph();
}


