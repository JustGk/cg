#include<graphics.h>
void boundryfill(int x, int y, int n, int o){
	int current=getpixel(x,y);
	if(current!=n&& current!=o){
		putpixel(x,y,n);
//		delay(1);
		boundryfill(x,y+1,n,o);
		boundryfill(x,y-1,n,o);
		boundryfill(x-1,y,n,o);
		boundryfill(x+1,y,n,o);
		boundryfill(x-1,y-1,n,o);
		boundryfill(x-1,y+1,n,o);
		boundryfill(x+1,y-1,n,o);
		boundryfill(x+1,y+1,n,o);
		
		
		
	}
}
void dl(int x1,int y1,int x2,int y2){
	float x, y,dx,dy,steps,xinc,yinc;
    dx = (x2-x1);
    dy=(y2-y1);
    setlinestyle(1,3,3);
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
    putpixel(x,y,BLACK);
    while(i<= steps)
    {
        
        x += xinc;
        y += yinc;
        putpixel(x,y, BLACK);
        i=i+1;
//      	delay(0.9);
    }
}
int main()
{
    int gd = DETECT ,gm;
    
    initgraph(&gd, &gm, "");    
    setbkcolor(15);
    cleardevice();
    dl(50,50,250,50);
    dl(50,50,50,250);
    dl(100,50,100,250);
    dl(150,50,150,250);
    dl(200,50,200,250);
    dl(50,250,250,250);
    dl(50,200,250,200);
    dl(50,150,250,150);
    dl(50,100,250,100);
    dl(250,50,250,250);
    boundryfill(105,55,0,0);
    boundryfill(205,55,0,0);
    boundryfill(55,105,0,0);
    boundryfill(205,55,0,0);
    boundryfill(105,155,0,0);
    boundryfill(155,205,0,0);
	boundryfill(155,105,0,0);
	boundryfill(55,205,0,0);
	boundryfill(205,155,0,0);
	
	 	   
    
    getch();
    closegraph();
}
