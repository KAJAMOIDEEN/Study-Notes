//Function overloading
#include<iostream.h>
#include<conio.h>
class Sample
{
public:
	void square(int,int);
	void square(float,float);
	void square(double,double);
	void square(long,long);
};

void Sample::square(int x,int y)
{
int res=x*y;
cout<<"Square of int Type : "<<res<<endl;
}

void Sample::square(float x,float y)
{
float res=x*y;
cout<<"Square of Float Type : "<<res<<endl;
}

void Sample::square(double x,double y)
{
double res=x*y;
cout<<"Square of Double Type : "<<res<<endl;
}

void Sample::square(long x,long y)
{
long res=x*y;
cout<<"Square of Long : "<<res;
}

void main()
{
Sample ob;
clrscr();
ob.square(2,2);
ob.square(2.0f,4.5f);
ob.square(12.12,3.0);
ob.square(2l,2l);
getch();
}