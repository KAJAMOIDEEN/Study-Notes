#include<iostream.h>
#include<conio.h>
class sample
{
	private:
		int m1;
	public:
		void display();
};
void sample::display()
{
	this->m1=25;
	cout<<this->m1;
}
void main()
{
	clrscr();
	sample s1;
	s1.display();
	getch();
}
