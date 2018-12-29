# include "iGraphics.h"
#include<stdlib.h>
#include<math.h>
int x=rand()%800,c=0,y=800,xx=0,w=70,a=0,s=0,r=50,life=0,score=0,m,q=xx+50;
char str[100];

void time()
{
}
void mydelay(int mseconds)
{
}
void iDraw()
{
	iClear();
	iSetColor(255,123,0);
	iFilledRectangle(0,0,800,600);

	


	iSetColor(210,250,134);

	double ar[]={xx,xx+100,xx+100,xx+50,xx};
	double ari[]={0,0,50,75,50};
	iFilledPolygon(ar,ari,5);

	
	if(life==3) exit(0);
	
	if(s==0) q=xx+50;


	iFilledCircle(q,w,5);
	
	

	if(s==1){
		if(c%2==0){
			w++;
			
			
			}
	}
	if(w==800){
		w=70;
		s=0;
		}
	if(x<50) x=x+50;
	if(x>750) x=x-50;
	if(score<20)
	{	
		iSetColor(31,12,231);
	iFilledCircle(x,y,r);
	if(c%5==0)
		y--;
		
		c++;
	
	if(y==0)
	{
		y=800;
		x=(x+rand())%800;
	}}

	
	double d=sqrt((x-(q))*(x-(q))+(y-w)*(y-w));
	if(d<=r){
		
		y=800;
		w=70;
		s=0;
		
		x=(x+rand())%800;
		score++;
	}
	if(score>=20 &&score <=50){
		iSetColor(231,121,233);
	iFilledCircle(x,y,r);
	if(c%4==0)
		y--;
		
		c++;
	
	if(y==0)
	{
		y=800;
		x=(x+rand())%800;
	}}
	if(score>50 && score<=80){iSetColor(231,121,131);
	iFilledCircle(x,y,r);
	if(c%3==0)
		y--;
		
		c++;
	
	if(y==0)
	{
		y=800;
		x=(x+rand())%800;
	}}
	if(score>80){
		iSetColor(231,121,131);
	iFilledCircle(x,y,r);
	if(c%2==0)
		y--;
		
		c++;
	
	if(y==0)
	{
		y=800;
		x=(x+rand())%800;
	}}




	double d1=sqrt((x-xx)*(x-xx)+(y-50)*(y-50));
	double d2=sqrt((xx+100-x)*(xx+100-x)+(y-50)*(y-50));
	double d3=sqrt((xx+50-x)*(xx+50-x)+(y-75)*(y-75));
	
	if(d1<=50 || d2<=50 || d3<=50){

		life++;

		x=rand()%800,c=0,y=800,xx=0,w=70,a=0,s=0,r=50;
	}
	

	
	/*if(life==3) exit(0);*/

	iText(820,550,"score",GLUT_BITMAP_HELVETICA_18);


	 

}

void iMouseMove(int mx, int my)
{
}	

void iMouse(int button, int state, int mx, int my)
{

	
}

void iPassiveMouseMove(int mx,int my)
{
	

}

void iKeyboard(unsigned char key)
{

	
	if (key=='d'){
		if(xx<700){
		xx=xx+100;
	}
	}

	
	
	if (key=='a'){
		if(xx>99){
		xx=xx-100;
		}

	
	}
	if(key=='s'){
		s=1;}
	if(key=='q'){
		exit(0);
	}






	
}

void iSpecialKeyboard(unsigned char key)
{

	
}

int main()
{
	
	iInitialize(900, 600, "Final");
	return 0;
}	








