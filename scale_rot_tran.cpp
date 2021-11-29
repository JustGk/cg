#include<graphics.h>
#include<iostream>
#include<math.h>
using namespace std;
void scale(){
	int i;
	int points[4][2]={100,100,200,100,200,200,100,200};
	for(i=0;i<3;i++){
		line(points[i][0],points[i][1],points[i+1][0],points[i+1][1]);
	
	}
	line(points[i][0],points[i][1],points[0][0],points[0][1]);

	int result[4][2];
	
	//result[4][2]=points[4][2];
	
	int sx=3;
	int sy=2;
	for(int c=0;c<=3;c++)
	    {
	            result[c][0]=points[c][0]*sx;
	           result[c][1]=points[c][1]*sy;
	    }
	int r;
	for(r=0;r<3;r++){
		line(result[r][0],result[r][1],result[r+1][0],result[r+1][1]);
	
	}
	line(result[r][0],result[r][1],result[0][0],result[0][1]);
}

void rot1(){
	int points[4][2]={100,100,200,100,200,200,100,200};
	int res[4][2];
	double ang=10*(3.14/180);
	int i;
	for(i=0;i<3;i++){
		line(points[i][0],points[i][1],points[i+1][0],points[i+1][1]);
	
	}
	line(points[i][0],points[i][1],points[0][0],points[0][1]);
	for(int c=0;c<=3;c++)
	    {
	            res[c][0]=points[c][0]*cos(ang)-points[c][1]*sin(ang);
	           res[c][1]=points[c][0]*sin(ang)+points[c][1]*cos(ang);
	    }
	
	int l;
	for(l=0;l<3;l++){
		line(res[l][0],res[l][1],res[l+1][0],res[l+1][1]);
	
	}
	line(res[l][0],res[l][1],res[0][0],res[0][1]);
	
	
}

void rot2(){
	int res[4][2];
	double ang=10*(3.14/180);
	int points[4][2]={100,100,200,100,200,200,100,200};
	int i;
	for(i=0;i<3;i++){
		line(points[i][0],points[i][1],points[i+1][0],points[i+1][1]);
	
	}
	line(points[i][0],points[i][1],points[0][0],points[0][1]);
	for(int c=0;c<=3;c++)
	    {
	            res[c][0]=points[c][0]*cos(ang)+points[c][1]*sin(ang);
	           res[c][1]=-points[c][0]*sin(ang)+points[c][1]*cos(ang);
	    }
	int l;
	for(l=0;l<3;l++){
		line(res[l][0],res[l][1],res[l+1][0],res[l+1][1]);
	
	}
	line(res[l][0],res[l][1],res[0][0],res[0][1]);
}


void trans(){
	int points[4][2]={100,100,200,100,200,200,100,200};
	int i;
	for(i=0;i<3;i++){
		line(points[i][0],points[i][1],points[i+1][0],points[i+1][1]);
	
	}
	line(points[i][0],points[i][1],points[0][0],points[0][1]);
	int tx=80, ty=80;
	int result[4][2];
	for(int i=0;i<=3;i++)
	    {
	            result[i][0]=points[i][0]+tx;
	           result[i][1]=points[i][1]+ty;
	    }
	int r;
	for(r=0;r<3;r++){
		line(result[r][0],result[r][1],result[r+1][0],result[r+1][1]);
	
	}
	line(result[r][0],result[r][1],result[0][0],result[0][1]);
}

int main()
{
 
int gd=DETECT,gm,left=100,top=100,bottom=200,right=200;

int op;
//char j[4]={'A','B','c','D'};
initgraph(&gd,&gm,NULL);
while(1){
cout<<"for scaling type 1";
cout<<"\nfor rotation in anticlockwise ttype 2";
cout<<"\nfor rotation in clockwise ttype 3 ";
cout<<"\nfor translation type 4";
cout<<endl;
cin>>op;
if(op==1){
	scale();
	delay(3000);
}
else if(op==2){
	rot2();
	delay(3000);
}
else if(op==3){
	rot1();
	delay(3000);
}
else{
	trans();
	delay(3000);
	}
cleardevice();
}


getch();
delay(1000);
closegraph();
return 0;
}
