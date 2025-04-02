//Program for Encapusaltion
#include<iostream.h>
#include<conio.h>
class student
{
	private:
		float average;
	public:
		int age;
	void getdata()
	{
		cout<<"Enter the average:";
		cin>>average;
	}
	void showdata()
	{
		cout<<"The Average:"<<average;
	}
};
void main()
{
	clrscr();
	student s1;
	s1.age=25;
	s1.getdata();
	s1.showdata();
	cout<<endl<<s1.age;
	getch();
}





















