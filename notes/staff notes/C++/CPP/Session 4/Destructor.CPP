#include<iostream.h>
#include<conio.h>
class student
{

		int id;
		float marks;
	public:
		void getdata();
		void showdata();
	       ~student();
};
void student::getdata()
{
	cout<<"\n Enter the Id:";
	cin>>id;
	cout<<"\n Enter the marks:";
	cin>>marks;
}
void student::showdata()
{
	cout<<"\n The Id:"<<id;
	cout<<"\n The Marks:"<<marks;
}
student::~student()
{
	cout<<"\nDestructor";
}
void main()
{
	clrscr();
	student s1;
	s1.getdata();
	s1.showdata();
	getch();
}
