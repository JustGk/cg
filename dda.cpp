#include<graphics.h>
int main()
{
    int gd = DETECT ,gm, i;
    float x, y,dx,dy,steps,xinc,yinc;
    int x0, x1, y0, y1;
    initgraph(&gd, &gm, "");
    
    setbkcolor(3);
    cleardevice();
    x0 = 2 , y0 = 2, x1 = 50, y1 = 50;
    dx = (float)(x1 - x0);
    dy = (float)(y1 - y0);
    if(dx>=dy)
           {
        steps = dx;
    }
    else
           {
        steps = dy;
    }
    xinc = dx/steps;
    yinc = dy/steps;
    x = x0;
    y = y0;
    i = 1;
    while(i<= steps)
    {
        putpixel(x, y, BLUE);
        x += xinc;
        y += yinc;
        i=i+1;
        delay(20);
    }
    getch();
    closegraph();
}


