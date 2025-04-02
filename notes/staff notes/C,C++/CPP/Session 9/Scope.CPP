#include<iostream.h>
#include<conio.h>
class student
{
	private:
		int id;
		float avg;
	public:
		void getdata();
		void showdata();
};
void student::getdata()
{
	cout<<"\n Enter the Id:";
	cin>>id;
	cout<<"\n Enter the Avg:";
	cin>>avg;
}
void student::showdata()
{
	cout<<"\n The Id:"<<id;
	cout<<"\n The Avg:"<<avg;
}
void main()
{
	student s1;
	student *fptr;
	fptr=&s1;
	s1.getdata();
	fptr->showdata();
	getch();
}