#include<iostream.h>
#include<conio.h>
class student
{
	public:
	int id;
	float avg;
	public:
	void getdata();
	void showdata();
	student();
	student(int i);
	student(int i,float a);
};
student::student(int i)
{
	id=i;
	cout<<"Enter the Average:";
	cin>>avg;
}
student::student(int i, float a)
{
	id=i;
	avg=a;
}
void main()
{
	clrscr();
	student s1,raj(101),saran(24,2000);
	s1.getdata();
	s1.showdata();
	raj.showdata();
	saran.showdata();
getch();
}
