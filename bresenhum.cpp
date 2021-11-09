#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	
    int gd = DETECT ,gm, i;
    float x, y,dx,dy,steps,xinc,yinc,pinc;
    int x0, x1, y0, y1;
    initgraph(&gd, &gm, "");
    float p;
//    setbkcolor(3);
//    cleardevice();
//	initwindow(400,300);

    cout<<"enter x0 and x1 ";
    cin>>x0>>x1;
    cout<<"enter y0 and y1 ";
    cin>>y0>>y1;
    dx=x1-x0;
    dy=y1-y0;
    p=2*dy-dx;
    if(abs(dx)>abs(dy))
    {
    	steps=dx;
	}
	else
	{
		steps=dy;
		
	}
	i=0;
	x=x0;
	y=y0;
	int p1,p2;
	p1=2*dy-2*dx;
	p2=2*dy;
	xinc=x0+1;
	yinc=y0+1;
	while(i<steps)
	{
		if(p>=0){
			pinc=p+p1;
			p=pinc;
			
			putpixel(x,y,YELLOW);
			xinc=xinc+1;
			yinc=yinc+1;
			x=xinc;
			y=yinc;
			
			
		}
		else if(p<0)
		{
			pinc=p+p2;
			p=pinc;
			putpixel(x,y,YELLOW);
			xinc=xinc+1;
			
			x=xinc;
//			y=yinc;
//			y=y0;
			
		}
		i++;
		delay(20);
	}
    getch();
    closegraph();
}

