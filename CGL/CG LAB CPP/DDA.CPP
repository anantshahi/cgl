#include<conio.h>
#include<graphics.h>
#include<iostream.h>

int abs(int n)
{
  return((n>0) ? n : (n-(-1)));
}

void BRESNHEM(int xb,int yb , int xe, int ye)
{
  int dx = xe-xb;
  int dy = ye-yb;
  float m = dy/dx;
  if(m<0)
  int temp = dx;
  dx = dy;
  dy = temp;

  {
  int c1 = 2*(dy-dx);
  int c2 = 2 * dy;
  int d = 2 * dy - dx;
  int x = xs;
  int y = ys;
  putpixel(x,y,RED);
  while(x<=xe)
  {
    x  = x+1;
    if(d<0)
    {
      d =  d+c2;

    }
    else
      {
        d = d+c1;
        y++;

      }
  }
  }
  else if(m>1)
  {
  int c1 = -2*(dy-dx);
  int c2 = 2 * dx;
  int d = 2 * dx - dy;
  int x = xs;
  int y = ys;
  putpixel(x,y,RED);
  while(x<=xe)
  {
    x  = x+1;
    if(d<0)
    {
      d =  d+c2;

    }
    else
      {
        d = d+c1;
        y++;

      }
    }
  }
}
void dda(int xb,int yb,int xe,int ye)
  {
    int step;
    int dx = xe-xb;
    int dy = ye-yb;
    int x = xb;
    int y = yb;
    if (abs(dx)>abs(dy))
      step = abs(dx);
    else
      step =abs(dy);
    float xinc = abs(dx)/step;
    float yinc = abs(dy)/step;
    for(int i = 0;i<step;i++)
    {
      putpixel(x,y,RED);

      x +=xinc;
      y +=yinc;
    }
}

void main()
{
clrscr();
int gd = DETECT , gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
int xb,yb,xe,ye;
cout<<"Enter first point coordinates"<<endl;
cin>>xb>>yb;
cout<<"Enter Second point coordinates"<<endl;
cin>>xe>>ye;
BRESNHEM(xb,yb,xe,ye);
getch();
}
















#include<iostream.h>
#include<graphics.h>
 
void drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;
 
	dx=x1-x0;
	dy=y1-y0;
 
	x=x0;
	y=y0;
 
	p=2*dy-dx;
 
	while(x<x1)
	{
		if(p>=0)
		{
			putpixel(x,y,15);
			y=y+1;
			p=p+2*dy-2*dx;
		}
		else
		{
			putpixel(x,y,7);
			p=p+2*dy;
		}
		x=x+1;
	}
}
 
int main()
{
	int gdriver=DETECT, gmode, error, x0, y0, x1, y1;
	initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
 
	cout<<"Enter co-ordinates of first point: ";
	cin>>x0>>y0;
 
	cout<<"Enter co-ordinates of second point: ";
	cin>>x1>>y1;
	drawline(x0, y0, x1, y1);
 
	return 0;
}











#include<graphics.h>
#include<conio.h>
#include<iostream.h>
void midpt_circle(int xc,int yc,int r)
{
  int x = 0;
  int y = r;
  int di = 5/4 -r;
  while (x<=y)
  {
    putpixel(xc + x , yc+y,RED);
    putpixel(xc - x , yc+y,RED);
    putpixel(xc + x , yc-y,RED);
    putpixel(xc - x , yc - y,RED);
    putpixel(xc-y,yc-x,RED);
    putpixel(xc-y,yc+x,RED);
    putpixel(xc+y,yc-x,RED);
    putpixel(xc+y,yc+x,RED);
    if(di<0)
    {
      di = di + 2*x + 3;

    }
    else
    {
    di = di + 2*(x-y) + 5;
    y = y-1;
    }
    x = x+1;
    /* code */
  }
}


  void main()

  {
  int gd = DETECT , gm;
  int x = 320,y=240;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  cout<<"Enter x y "<<endl;
  int xc,yc;
  cin>>xc>>yc;
  midpt_circle(xc+x,yc+y,100);
  getch();
  closegraph();
  }











	#include<graphics.h>
#include<conio.h>
#include<iostream.h>
void bres_circle(int xc,int yc,int r)
{
  int x = 0;
  int y = r;
  int d = 3-2*r;
  while(x<=y)
  {
    putpixel(xc + x , yc+y,RED);
    putpixel(xc - x , yc+y,RED);
    putpixel(xc + x , yc-y,RED);
    putpixel(xc - x , yc - y,RED);
    putpixel(xc-y,yc-x,RED);
    putpixel(xc-y,yc+x,RED);
    putpixel(xc+y,yc-x,RED);
    putpixel(xc+y,yc+x,RED);
    
    x = x+1;
    if(d<0)
    {
      d = d+4*x + 6;

    }
    else
    {
      d = d+4*(x-y) + 10;
      y = y-1;

    }
  }
}







void main()

{
int gd = DETECT , gm;
int x = 320,y=240;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
cout<<"Enter x y "<<endl;
int xc,yc;
cin>>xc>>yc;
bres_circle(xc+x,yc+y,100);
getch();
closegraph();
}









