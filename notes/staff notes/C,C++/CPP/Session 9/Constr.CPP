#include<iostream.h>
#include<conio.h>
class cons
{
  public:
	cons()
	{
	cout<<"constructor";
	}
	void sample()
	{
	cout<<"member function";
	}
};

void main()
{
 cons c1;
 c1.sample();
 getch();
}



