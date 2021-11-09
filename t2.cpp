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
        delay(2);
    }
}
int main()
{
    int gd = DETECT ,gm;
    
    initgraph(&gd, &gm, "");    
    setbkcolor(14);
    cleardevice();
    dl(200,350,500,350);
    dl(350,91,500,350);
    dl(350,91,200,350);
    
    md(275,220,350,350);
    md(425,221,350,350);
    md(275,220,425,220);
    setcolor(0);
    circle(350,263,87);
//    circle(0,87,87);
    
//    dl(250,,)
    
    
    //dl(50,400,50,50);
    
    
    getch();
    closegraph();
}


