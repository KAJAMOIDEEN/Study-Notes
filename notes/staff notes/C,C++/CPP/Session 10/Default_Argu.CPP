// Program For Default Argument
#include<iostream.h>
#include<conio.h>
class Def
{
	public:
	void func(int x=10,int y=20,int z=30)
	{
		int sum;
		sum=x+y+z;
		cout<<"\nSum Value is : "<<sum<<endl;
	}
};

void main()
{
	clrscr();
	Def df;
	df.func(2,3,4);
	df.func();
	df.func(10,2);
	df.func(1);
	getch();
}
