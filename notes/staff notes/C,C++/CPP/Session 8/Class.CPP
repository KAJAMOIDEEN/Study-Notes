//Program for Using Class
#include<iostream.h>
#include<conio.h>
class student
{
	public:
		int std_id;
		int age;
		char name[20];
	void getdata()
	{
		cout<<"Enter Id:";
		cin>>std_id;
		cout<<"Enter Age:";
		cin>>age;
		cout<<"Enter Name:";
		cin>>name;
	}
	void showdata()
	{
		cout<<"Name:"<<name<<endl;
		cout<<"Age :"<<age<<endl;
		cout<<"Id  :"<<std_id<<endl;
	}
};
void main()
{
	clrscr();
	student s1,s2,s3;
	s1.getdata();
	s2.getdata();
	s3.getdata();
	s1.showdata();
	s2.showdata();
	s3.showdata();
	getch();
}
