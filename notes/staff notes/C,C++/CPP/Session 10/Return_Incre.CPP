// Program for object return Type - operator overloading increment
#include<iostream.h>
#include<conio.h>

class Second
{
	public:
		int x;

		Second()
		{
			x=0;
		}

		Second operator++()
		{
			Second ss;
			++x;
			ss.x=++x;
			cout<<x;
			return ss;
		}
};

void main()
{
	Second s,s3;
	clrscr();

	s3=++s;
	cout<<s3.x;
	getch();
}