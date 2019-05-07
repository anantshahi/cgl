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
