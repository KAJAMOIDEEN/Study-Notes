#include<iostream.h>
#include<conio.h>

class one
{
	private:
		int a;
	public:
		one(int b)
		{
		a=b;
		}
};

class two
{
	private:
		int c;
		one obj;
	public:
		two(int x, int y):obj(ob)
		{
		c=x;
		}
};

void main()
{
	clrscr();
	one obj(ob);
	getch();
}

