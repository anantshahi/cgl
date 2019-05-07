#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

class trans{
	public:
	int x,y,x1=0,x2=100,x3=100,x4=0,y1=0,y2=0,y3=100,y4=100,z1=0,z2=0,z3=0,z4=0;
	int x5=0,x6=100,x7=100,x8=0,y5=0,y6=0,y7=100,y8=100,z5=30,z6=30,z7=30,z8=30;
	int gd=USER, gm=999738;
	
	int xt1,yt1,xt2,yt2,xt3,yt3,xt4,yt4,xt5,yt5,xt6,yt6,xt7,yt7,xt8,yt8,zt1,zt2,zt3,zt4,zt5,zt6,zt7,zt8;
	int tx,ty,tz;
	int xr1,yr1,xr2,yr2,xr3,yr3;
	double A;
	int xs1,ys1,xs2,ys2,xs3,ys3,sx,sy;
	
	void insert(){
		cout<<"Enter first point of cube\n";
		cin>>x1>>y1;
		cout<<"Enter second point of cube\n";
		cin>>x2>>y2;
		cout<<"Enter third point of cube\n";
		cin>>x3>>y3;
		cout<<"Enter forth point of cube\n";
		cin>>x4>>y4;
		cout<<"Enter fifth point of cube\n";
		cin>>x5>>y5;
		cout<<"Enter sixth point of cube\n";
		cin>>x6>>y6;
		cout<<"Enter seventh point of cube\n";
		cin>>x7>>y7;
		cout<<"Enter eight point of cube\n";
		cin>>x8>>y8;
	}
	
	void scaling(){
		cout<<"Enter the scaling factor Sx and Sy and Sz"<<endl;
		cin>>tx>>ty>>tz;
		
		xt1=x1*tx;
		yt1=y1*ty;
		xt2=x2*tx;
		yt2=y2*ty;
		xt3=x3*tx;
		yt3=y3*ty;
		xt4=x4*tx;
		yt4=y4*ty;
		xt5=x5*tx;
		yt5=y5*ty;
		xt6=x6*tx;
		yt6=y6*ty;
		xt7=x7*tx;
		yt7=y7*ty;
		xt8=x8*tx;
		yt8=y8*ty;
		
		zt1 = z1*tz;
		zt2 = z2*tz;
		zt3 = z3*tz;
		zt4 = z4*tz;
		zt5 = z5*tz;
		zt6 = z6*tz;
		zt7 = z7*tz;
		zt8 = z8*tz;
		
		
		initgraph(&gd,&gm,NULL);
		line(x1,y1,x2,y2);
		line(x2,y2,x3,y3);
		line(x3,y3,x4,y4);
		line(x4,y4,x1,y1);
		line(x5+(z5-z1),y5+(z5-z1),x6+(z6-z2),y6+(z6-z2));
		line(x6+(z6-z2),y6+(z6-z2),x7+(z7-z3),y7+(z7-z3));
		line(x7+(z7-z3),y7+(z7-z3),x8+(z8-z4),y8+(z8-z4));
		line(x8+(z8-z4),y8+(z8-z4),x5+(z5-z1),y5+(z5-z1));
		
		line(x1,y1,x5+(z5-z1),y5+(z5-z1));
		line(x2,y2,x6+(z6-z2),y6+(z6-z2));
		line(x3,y3,x7+(z7-z3),y7+(z7-z3));
		line(x4,y4,x8+(z8-z4),y8+(z8-z4));
		delay(3000);
		
		cleardevice();
		
		line(xt1,yt1,xt2,yt2);
		line(xt2,yt2,xt3,yt3);
		line(xt3,yt3,xt4,yt4);
		line(xt4,yt4,xt1,yt1);
		line(xt5+(zt5-zt1),yt5+(zt5-zt1),xt6+(zt6-zt2),yt6+(zt6-zt2));
		line(xt6+(zt6-zt2),yt6+(zt6-zt2),xt7+(zt7-zt3),yt7+(zt7-zt3));
		line(xt7+(zt7-zt3),yt7+(zt7-zt3),xt8+(zt8-zt4),yt8+(zt8-zt4));
		line(xt8+(zt8-zt4),yt8+(zt8-zt4),xt5+(zt5-zt1),yt5+(zt5-zt1));
		
		line(xt1,yt1,xt5+(zt5-zt1),yt5+(zt5-zt1));
		line(xt2,yt2,xt6+(zt6-zt2),yt6+(zt6-zt2));
		line(xt3,yt3,xt7+(zt7-zt3),yt7+(zt7-zt3));
		line(xt4,yt4,xt8+(zt8-zt4),yt8+(zt8-zt4));
		//line(xt1,yt1,xt2,yt2);
		//line(xt3,yt3,xt2,yt2);
		//line(xt4,yt4,xt3,yt3);
		//line(xt1,yt1,xt4,yt4);
		delay(5000);
		closegraph();
	}
	
	void translation(){
		cout<<"Enter the translating factor Tx and Ty and Tz"<<endl;
		cin>>tx>>ty>>tz;
		xt1=x1+tx;
		yt1=y1+ty;
		xt2=x2+tx;
		yt2=y2+ty;
		xt3=x3+tx;
		yt3=y3+ty;
		xt4=x4+tx;
		yt4=y4+ty;
		xt5=x5+tx;
		yt5=y5+ty;
		xt6=x6+tx;
		yt6=y6+ty;
		xt7=x7+tx;
		yt7=y7+ty;
		xt8=x8+tx;
		yt8=y8+ty;
		
		zt1 = z1+tz;
		zt2 = z2+tz;
		zt3 = z3+tz;
		zt4 = z4+tz;
		zt5 = z5+tz;
		zt6 = z6+tz;
		zt7 = z7+tz;
		zt8 = z8+tz;
		
		
		initgraph(&gd,&gm,NULL);
		line(x1,y1,x2,y2);
		line(x2,y2,x3,y3);
		line(x3,y3,x4,y4);
		line(x4,y4,x1,y1);
		line(x5+(z5-z1),y5+(z5-z1),x6+(z6-z2),y6+(z6-z2));
		line(x6+(z6-z2),y6+(z6-z2),x7+(z7-z3),y7+(z7-z3));
		line(x7+(z7-z3),y7+(z7-z3),x8+(z8-z4),y8+(z8-z4));
		line(x8+(z8-z4),y8+(z8-z4),x5+(z5-z1),y5+(z5-z1));
		
		line(x1,y1,x5+(z5-z1),y5+(z5-z1));
		line(x2,y2,x6+(z6-z2),y6+(z6-z2));
		line(x3,y3,x7+(z7-z3),y7+(z7-z3));
		line(x4,y4,x8+(z8-z4),y8+(z8-z4));
		
		delay(3000);
		
		line(xt1,yt1,xt2,yt2);
		line(xt2,yt2,xt3,yt3);
		line(xt3,yt3,xt4,yt4);
		line(xt4,yt4,xt1,yt1);
		line(xt5+(zt5-zt1),yt5+(zt5-zt1),xt6+(zt6-zt2),yt6+(zt6-zt2));
		line(xt6+(zt6-zt2),yt6+(zt6-zt2),xt7+(zt7-zt3),yt7+(zt7-zt3));
		line(xt7+(zt7-zt3),yt7+(zt7-zt3),xt8+(zt8-zt4),yt8+(zt8-zt4));
		line(xt8+(zt8-zt4),yt8+(zt8-zt4),xt5+(zt5-zt1),yt5+(zt5-zt1));
		
		line(xt1,yt1,xt5+(zt5-zt1),yt5+(zt5-zt1));
		line(xt2,yt2,xt6+(zt6-zt2),yt6+(zt6-zt2));
		line(xt3,yt3,xt7+(zt7-zt3),yt7+(zt7-zt3));
		line(xt4,yt4,xt8+(zt8-zt4),yt8+(zt8-zt4));
		//line(xt1,yt1,xt2,yt2);
		//line(xt3,yt3,xt2,yt2);
		//line(xt4,yt4,xt3,yt3);
		//line(xt1,yt1,xt4,yt4);
		delay(10000);
		closegraph();
	}
	
	void rotation(){
		cout<<"Enter the Angle by which u have to rotate"<<endl;
		cin>>A;
		xr1=x1*cos(A)-y1*sin(A);
		yr1=x1*sin(A)+y1*cos(A);
		xr2=x2*cos(A)-y2*sin(A);
		yr2=x2*sin(A)+y2*cos(A);
		xr3=x3*cos(A)-y3*sin(A);
		yr3=x3*sin(A)+y3*cos(A);
		
		initgraph(&gd,&gm,NULL);
		line(x1,y1,x2,y2);
		line(x3,y3,x2,y2);
		line(x1,y1,x3,y3);
		delay(2000);
		line(xr1,yr1,xr2,yr2);
		line(xr3,yr3,xr2,yr2);
		line(xr1,yr1,xr3,yr3);
		delay(5000);
		closegraph();
	}
};


int main()
{
	trans t;
	char ch;
	Again:
	cout <<"\nSelect:\n1. Insert\n2. Scaling\n3. Translation\n4. Rotation\n0. Exit"<<endl;
	cin>>ch;	
	switch(ch){
		case '1':
			t.insert();
			goto Again;
		case '2':
			t.scaling();
			goto Again;	
		case '3':
			t.translation();
			goto Again;
		case '4':
			t.rotation();
			goto Again;
		case '0': 
			break;
		default:
			cout<<"Wrong Choice\n";
			goto Again;					
	}
	return 0;
	
	
}
