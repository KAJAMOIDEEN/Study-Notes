//Program for Constructor & Destructor
#include<iostream.h>
#include<conio.h>
class cons
{
	public:
		cons();
		~cons();
};
cons::cons()
{
	cout<<"\n Constructor";
}
cons::~cons()
{
	cout<<"\n Destructor";
}
void main()
{
clrscr();
	cons c;
getch();
}