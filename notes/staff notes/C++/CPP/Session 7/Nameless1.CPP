// Program for nameless object
#include<iostream.h>
#include<conio.h>
class Second
{
	private:
		int x;
	public:
		Second()
		{
			x=0;
		}
		Second(int m)
		{
		x=m;
		cout<<x;
		}
		Second operator++()
		{
			++x;
			return Second(x);
		}
		};

void main()
{
	Second s,s3;
	clrscr();
	s3=++s;
	getch();
}